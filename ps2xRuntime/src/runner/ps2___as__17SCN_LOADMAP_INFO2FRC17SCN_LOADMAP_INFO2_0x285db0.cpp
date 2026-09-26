#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__17SCN_LOADMAP_INFO2FRC17SCN_LOADMAP_INFO2
// Address: 0x285db0 - 0x285e70
void ps2___as__17SCN_LOADMAP_INFO2FRC17SCN_LOADMAP_INFO2_0x285db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__17SCN_LOADMAP_INFO2FRC17SCN_LOADMAP_INFO2_0x285db0");
#endif

    switch (ctx->pc) {
        case 0x285de4u: goto label_285de4;
        case 0x285e10u: goto label_285e10;
        default: break;
    }

    ctx->pc = 0x285db0u;

    // 0x285db0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x285db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285db4: 0x24a80014  addiu       $t0, $a1, 0x14
    ctx->pc = 0x285db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x285db8: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x285dbc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x285dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x285dc0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x285dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x285dc4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x285dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x285dc8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x285dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x285dcc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x285dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x285dd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x285dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x285dd4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x285dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x285dd8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x285dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x285ddc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x285ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x285de0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x285de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_285de4:
    // 0x285de4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x285de4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x285de8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x285dec: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x285decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x285df0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x285df0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x285df4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x285df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x285df8: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x285df8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x285dfc: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x285DFCu;
    {
        const bool branch_taken_0x285dfc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x285E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DFCu;
            // 0x285e00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dfc) {
            ctx->pc = 0x285DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285de4;
        }
    }
    ctx->pc = 0x285E04u;
    // 0x285e04: 0x24a80024  addiu       $t0, $a1, 0x24
    ctx->pc = 0x285e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x285e08: 0x24870024  addiu       $a3, $a0, 0x24
    ctx->pc = 0x285e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x285e0c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x285e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_285e10:
    // 0x285e10: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x285e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x285e14: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x285e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x285e18: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x285e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x285e1c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x285e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x285e20: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x285e24: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x285e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x285e28: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x285E28u;
    {
        const bool branch_taken_0x285e28 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x285E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285E28u;
            // 0x285e2c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e28) {
            ctx->pc = 0x285E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285e10;
        }
    }
    ctx->pc = 0x285E30u;
    // 0x285e30: 0x8ca3018c  lw          $v1, 0x18C($a1)
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x285e34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x285e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285e38: 0xac83018c  sw          $v1, 0x18C($a0)
    ctx->pc = 0x285e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 3));
    // 0x285e3c: 0x8ca30190  lw          $v1, 0x190($a1)
    ctx->pc = 0x285e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x285e40: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x285e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
    // 0x285e44: 0x8ca30194  lw          $v1, 0x194($a1)
    ctx->pc = 0x285e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x285e48: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x285e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
    // 0x285e4c: 0x8ca30198  lw          $v1, 0x198($a1)
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
    // 0x285e50: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x285e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
    // 0x285e54: 0x8ca3019c  lw          $v1, 0x19C($a1)
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 412)));
    // 0x285e58: 0xac83019c  sw          $v1, 0x19C($a0)
    ctx->pc = 0x285e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 3));
    // 0x285e5c: 0x8ca301a0  lw          $v1, 0x1A0($a1)
    ctx->pc = 0x285e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x285e60: 0xac8301a0  sw          $v1, 0x1A0($a0)
    ctx->pc = 0x285e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
    // 0x285e64: 0x8ca301a4  lw          $v1, 0x1A4($a1)
    ctx->pc = 0x285e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
    // 0x285e68: 0x3e00008  jr          $ra
    ctx->pc = 0x285E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285E68u;
            // 0x285e6c: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285E70u;
}
