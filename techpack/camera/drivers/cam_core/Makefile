# SPDX-License-Identifier: GPL-2.0-only

ccflags-y += -I$(srctree)/techpack/camera/include/uapi
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_req_mgr
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_smmu/
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_sync
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_utils
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_isp
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_isp/isp_hw_mgr/include
ccflags-y += -I$(srctree)/techpack/camera/drivers/cam_fastpath/
ccflags-y += -I$(src)

obj-$(CONFIG_SPECTRA_CAMERA) += cam_context.o cam_context_utils.o cam_node.o cam_subdev.o \
				cam_node_fastpath.o cam_subdev_fastpath.o
