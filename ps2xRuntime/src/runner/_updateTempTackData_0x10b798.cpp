#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _updateTempTackData
// Address: 0x10b798 - 0x10b80c
void _updateTempTackData_0x10b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateTempTackData_0x10b798");
#endif

    ctx->pc = 0x10b798u;

    // 0x10b798: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10b798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7a0: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x10b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x10b7a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b7a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B7A8u;
    {
        const bool branch_taken_0x10b7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7A8u;
            // 0x10b7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7a8) {
            ctx->pc = 0x10B7D0u;
            goto label_10b7d0;
        }
    }
    ctx->pc = 0x10B7B0u;
    // 0x10b7b0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B7B0u;
    {
        const bool branch_taken_0x10b7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b7b0) {
            ctx->pc = 0x10B7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7B0u;
            // 0x10b7b4: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B7D4u;
            goto label_10b7d4;
        }
    }
    ctx->pc = 0x10B7B8u;
    // 0x10b7b8: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B7B8u;
    {
        const bool branch_taken_0x10b7b8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10b7b8) {
            ctx->pc = 0x10B7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7B8u;
            // 0x10b7bc: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B7CCu;
            goto label_10b7cc;
        }
    }
    ctx->pc = 0x10B7C0u;
    // 0x10b7c0: 0x8cc20854  lw          $v0, 0x854($a2)
    ctx->pc = 0x10b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2132)));
    // 0x10b7c4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x10b7c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10b7c8: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x10b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
label_10b7cc:
    // 0x10b7cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10b7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10b7d0:
    // 0x10b7d0: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x10b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_10b7d4:
    // 0x10b7d4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x10b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10b7d8: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B7D8u;
    {
        const bool branch_taken_0x10b7d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7D8u;
            // 0x10b7dc: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7d8) {
            ctx->pc = 0x10B7F4u;
            goto label_10b7f4;
        }
    }
    ctx->pc = 0x10B7E0u;
    // 0x10b7e0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x10b7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10b7e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B7E4u;
    {
        const bool branch_taken_0x10b7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b7e4) {
            ctx->pc = 0x10B7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7E4u;
            // 0x10b7e8: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B7F8u;
            goto label_10b7f8;
        }
    }
    ctx->pc = 0x10B7ECu;
    // 0x10b7ec: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x10b7f0: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x10b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
label_10b7f4:
    // 0x10b7f4: 0x8cc20850  lw          $v0, 0x850($a2)
    ctx->pc = 0x10b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
label_10b7f8:
    // 0x10b7f8: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x10b7fc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x10b7fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10b800: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x10b800u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x10b804: 0x3e00008  jr          $ra
    ctx->pc = 0x10B804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B804u;
            // 0x10b808: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B80Cu;
}
