/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _SWD_REGISTERS_QM_H
#define _SWD_REGISTERS_QM_H

/* The repetitions to check the RRAM bit in order to check if it is fine or time out. */
#define QM35_RRAM_WRITE_TIMEOUT_REPS 3200

#define QM35_RRAM_LOCK_CTRL_REG 0x50129010UL
#define QM35_RRAM_APB_BASE_ADDR 0x5012C000UL

// RRAM lock defines
#define QM35_RRAM_DISABLE_LOCK_VAL	0x0
#define QM35_RRAM_ENABLE_LOCK_VAL	0x2

#define QM35_START_RRAM_ADDRESS 0x10200000UL

/* RRAM commands */
enum {
	QM35_RRAM_CMD_IDLE = 0,
	QM35_RRAM_CMD_READ,
	QM35_RRAM_CMD_LOAD,
	QM35_RRAM_CMD_WRITE,
	QM35_RRAM_CMD_CLR_LOAD,
	QM35_RRAM_CMD_WRT_CONFIG,
	QM35_RRAM_CMD_READ_CONFIG,
	QM35_RRAM_CMD_RECALL,
	QM35_RRAM_CMD_RST_REG,
	QM35_RRAM_CMD_DUMMY,
	QM35_RRAM_CMD_REWRITE
};

/* GFC_IRQ_CLR reg offset  */
#define QM35_GFC_IRQ_CLR_REG		(0xC + QM35_RRAM_APB_BASE_ADDR)
#define QM35_GFC_IRQ_CLR_REG_STATUS 0x3F

#define QM35_RRAM_CTRL_REG                      (0x14 + QM35_RRAM_APB_BASE_ADDR)
#define QM35_RRAM_CTRL_STREAM_CIPHER_KEY_SHIFT  0xA
#define QM35_RRAM_CTRL_STREAM_CIPHER_KEY_MASK   (0x1UL << QM35_RRAM_CTRL_STREAM_CIPHER_KEY_SHIFT)
#define QM35_RRAM_CTRL_RRAM_LOW_VOLT_SHIFT      0x8
#define QM35_RRAM_CTRL_RRAM_LOW_VOLT_MASK       (0x1UL << QM35_RRAM_CTRL_RRAM_LOW_VOLT_SHIFT)
#define QM35_RRAM_CTRL_RRAM_NAP_EN_SHIFT        0x7
#define QM35_RRAM_CTRL_RRAM_NAP_EN_MASK         (0x1UL << QM35_RRAM_CTRL_RRAM_NAP_EN_SHIFT)
#define QM35_RRAM_CTRL_STREAM_CIPHER_MODE_SHIFT 0x6
#define QM35_RRAM_CTRL_STREAM_CIPHER_MODE_MASK  (0x1UL << QM35_RRAM_CTRL_STREAM_CIPHER_MODE_SHIFT)
#define QM35_RRAM_CTRL_STREAM_CIPHER_SHIFT      0x5
#define QM35_RRAM_CTRL_STREAM_CIPHER_MASK       (0x1UL << QM35_RRAM_CTRL_STREAM_CIPHER_SHIFT)
#define QM35_RRAM_CTRL_ABORT_SHIFT              0x4
#define QM35_RRAM_CTRL_ABORT_MASK               (0x1UL << QM35_RRAM_CTRL_ABORT_SHIFT)
#define QM35_RRAM_CTRL_CMD_SHIFT                0x0
#define QM35_RRAM_CTRL_CMD_MASK                 (0xFUL << QM35_RRAM_CTRL_CMD_SHIFT)

// RRAM Status register and bits
#define QM35_RRAM_STATUS_REG				(0x18 + QM35_RRAM_APB_BASE_ADDR)
#define QM35_RRAM_STATUS_CMD_SUCCESS_SHIFT	0x2
#define QM35_RRAM_STATUS_CMD_SUCCESS_MASK	(0x1UL << QM35_RRAM_STATUS_CMD_SUCCESS_SHIFT)
#define QM35_RRAM_STATUS_ARB_LOCKED_SHIFT	0x5
#define QM35_RRAM_STATUS_ARB_LOCKED_MASK	(0x1UL << QM35_RRAM_STATUS_ARB_LOCKED_SHIFT)
#define QM35_RRAM_STATUS_ERROR_SHIFT		0x6
#define QM35_RRAM_STATUS_ERROR_MASK			(0x1 << QM35_RRAM_STATUS_ERROR_SHIFT)
#define QM35_RRAM_STATUS_BUSY_SHIFT			0x7
#define QM35_RRAM_STATUS_BUSY_MASK			(0x1UL << QM35_RRAM_STATUS_BUSY_SHIFT)

#define QM35_RRAM_WORDLINE_BITLINE_REG	(0x1C + QM35_RRAM_APB_BASE_ADDR)
#define QM35_BITLINE_SHIFT				0xA
#define QM35_BITLINE_MASK				(0x3FUL << BITLINE_SHIFT)
#define QM35_WORDLINE_SHIFT				0
#define QM35_WORDLINE_MASK				(0x3FFUL << WORDLINE_SHIFT)
/* Each bitline has 8 bytes */
#define QM35_BITLINE_SIZE_SHIFT			3
#define QM35_BITLINE_SIZE_BYTES			(0x1UL << QM35_BITLINE_SIZE_SHIFT)
/* Each wordline has 64 bitlines (512 bytes) */
#define QM35_WORDLINE_SIZE_SHIFT		(6 + QM35_BITLINE_SIZE_SHIFT)
#define QM35_WORDLINE_SIZE_BYTES		(0x1UL << QM35_WORDLINE_SIZE_SHIFT)


// Registers that hold the data to write. Each write is 8 bytes - 64 bits
#define QM35_RRAM_DATA_0_REG (0x20 + QM35_RRAM_APB_BASE_ADDR)
#define QM35_RRAM_DATA_1_REG (0x24 + QM35_RRAM_APB_BASE_ADDR)

#endif
