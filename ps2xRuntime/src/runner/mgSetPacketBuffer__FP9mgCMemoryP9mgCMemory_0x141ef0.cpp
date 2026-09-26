#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory
// Address: 0x141ef0 - 0x142034
void mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0");
#endif

    switch (ctx->pc) {
        case 0x141f00u: goto label_141f00;
        case 0x141f90u: goto label_141f90;
        default: break;
    }

    ctx->pc = 0x141ef0u;

    // 0x141ef0: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x141ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x141ef4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x141ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x141ef8: 0x250823d0  addiu       $t0, $t0, 0x23D0
    ctx->pc = 0x141ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9168));
    // 0x141efc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x141efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141f00:
    // 0x141f00: 0x81260000  lb          $a2, 0x0($t1)
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x141f04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x141f08: 0x81230001  lb          $v1, 0x1($t1)
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x141f0c: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x141f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x141f10: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x141f14: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x141f14u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x141f18: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x141F18u;
    {
        const bool branch_taken_0x141f18 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x141F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F18u;
            // 0x141f1c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f18) {
            ctx->pc = 0x141F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141f00;
        }
    }
    ctx->pc = 0x141F20u;
    // 0x141f20: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x141f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x141f24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f28: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x141f28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x141f2c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x141f30: 0x24e72400  addiu       $a3, $a3, 0x2400
    ctx->pc = 0x141f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9216));
    // 0x141f34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x141f34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f38: 0xac2323e0  sw          $v1, 0x23E0($at)
    ctx->pc = 0x141f38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9184), GPR_U32(ctx, 3));
    // 0x141f3c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x141f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x141f40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f44: 0xac2323e4  sw          $v1, 0x23E4($at)
    ctx->pc = 0x141f44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9188), GPR_U32(ctx, 3));
    // 0x141f48: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141f4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f50: 0xac2323e8  sw          $v1, 0x23E8($at)
    ctx->pc = 0x141f50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9192), GPR_U32(ctx, 3));
    // 0x141f54: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x141f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141f58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f5c: 0xac2323ec  sw          $v1, 0x23EC($at)
    ctx->pc = 0x141f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9196), GPR_U32(ctx, 3));
    // 0x141f60: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x141f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x141f64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f68: 0xac2323f0  sw          $v1, 0x23F0($at)
    ctx->pc = 0x141f68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9200), GPR_U32(ctx, 3));
    // 0x141f6c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x141f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x141f70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f74: 0xac2323f4  sw          $v1, 0x23F4($at)
    ctx->pc = 0x141f74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9204), GPR_U32(ctx, 3));
    // 0x141f78: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x141f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x141f7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f80: 0xac2323f8  sw          $v1, 0x23F8($at)
    ctx->pc = 0x141f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9208), GPR_U32(ctx, 3));
    // 0x141f84: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x141f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x141f88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141f8c: 0xac2323fc  sw          $v1, 0x23FC($at)
    ctx->pc = 0x141f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9212), GPR_U32(ctx, 3));
label_141f90:
    // 0x141f90: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x141f90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x141f94: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x141f98: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x141f98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x141f9c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x141f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x141fa0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x141fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x141fa4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x141fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x141fa8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x141FA8u;
    {
        const bool branch_taken_0x141fa8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x141FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141FA8u;
            // 0x141fac: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fa8) {
            ctx->pc = 0x141F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141f90;
        }
    }
    ctx->pc = 0x141FB0u;
    // 0x141fb0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x141fb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141fb8: 0xac232410  sw          $v1, 0x2410($at)
    ctx->pc = 0x141fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9232), GPR_U32(ctx, 3));
    // 0x141fbc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x141fc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141fc4: 0xac232414  sw          $v1, 0x2414($at)
    ctx->pc = 0x141fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9236), GPR_U32(ctx, 3));
    // 0x141fc8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x141fcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141fd0: 0xac232418  sw          $v1, 0x2418($at)
    ctx->pc = 0x141fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9240), GPR_U32(ctx, 3));
    // 0x141fd4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x141fd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141fdc: 0xac23241c  sw          $v1, 0x241C($at)
    ctx->pc = 0x141fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9244), GPR_U32(ctx, 3));
    // 0x141fe0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x141fe4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141fe8: 0xac232420  sw          $v1, 0x2420($at)
    ctx->pc = 0x141fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9248), GPR_U32(ctx, 3));
    // 0x141fec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x141fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x141ff0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x141ff4: 0xac232424  sw          $v1, 0x2424($at)
    ctx->pc = 0x141ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9252), GPR_U32(ctx, 3));
    // 0x141ff8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x141ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x141ffc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142000: 0xac232428  sw          $v1, 0x2428($at)
    ctx->pc = 0x142000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9256), GPR_U32(ctx, 3));
    // 0x142004: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x142004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x142008: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14200c: 0xac23242c  sw          $v1, 0x242C($at)
    ctx->pc = 0x14200cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9260), GPR_U32(ctx, 3));
    // 0x142010: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142014: 0xac2023f4  sw          $zero, 0x23F4($at)
    ctx->pc = 0x142014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9204), GPR_U32(ctx, 0));
    // 0x142018: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14201c: 0xac2023ec  sw          $zero, 0x23EC($at)
    ctx->pc = 0x14201cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9196), GPR_U32(ctx, 0));
    // 0x142020: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142024: 0xac202424  sw          $zero, 0x2424($at)
    ctx->pc = 0x142024u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9252), GPR_U32(ctx, 0));
    // 0x142028: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14202c: 0x3e00008  jr          $ra
    ctx->pc = 0x14202Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14202Cu;
            // 0x142030: 0xac20241c  sw          $zero, 0x241C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142034u;
}
