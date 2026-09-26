#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishPrize__FiiP15FISH_PRIZE_INFO
// Address: 0x21a1d0 - 0x21a270
void GetFishPrize__FiiP15FISH_PRIZE_INFO_0x21a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishPrize__FiiP15FISH_PRIZE_INFO_0x21a1d0");
#endif

    ctx->pc = 0x21a1d0u;

    // 0x21a1d0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A1D0u;
    {
        const bool branch_taken_0x21a1d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1D0u;
            // 0x21a1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1d0) {
            ctx->pc = 0x21A1E0u;
            goto label_21a1e0;
        }
    }
    ctx->pc = 0x21A1D8u;
    // 0x21a1d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x21A1D8u;
    {
        const bool branch_taken_0x21a1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a1d8) {
            ctx->pc = 0x21A268u;
            goto label_21a268;
        }
    }
    ctx->pc = 0x21A1E0u;
label_21a1e0:
    // 0x21a1e0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A1E0u;
    {
        const bool branch_taken_0x21a1e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x21A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1E0u;
            // 0x21a1e4: 0x28810004  slti        $at, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1e0) {
            ctx->pc = 0x21A1F0u;
            goto label_21a1f0;
        }
    }
    ctx->pc = 0x21A1E8u;
    // 0x21a1e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1ec: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x21a1ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_21a1f0:
    // 0x21a1f0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A1F0u;
    {
        const bool branch_taken_0x21a1f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a1f0) {
            ctx->pc = 0x21A1FCu;
            goto label_21a1fc;
        }
    }
    ctx->pc = 0x21A1F8u;
    // 0x21a1f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21a1fc:
    // 0x21a1fc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A1FCu;
    {
        const bool branch_taken_0x21a1fc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x21A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1FCu;
            // 0x21a200: 0x28a10003  slti        $at, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1fc) {
            ctx->pc = 0x21A20Cu;
            goto label_21a20c;
        }
    }
    ctx->pc = 0x21A204u;
    // 0x21a204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a208: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x21a208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_21a20c:
    // 0x21a20c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A20Cu;
    {
        const bool branch_taken_0x21a20c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a20c) {
            ctx->pc = 0x21A218u;
            goto label_21a218;
        }
    }
    ctx->pc = 0x21A214u;
    // 0x21a214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a218:
    // 0x21a218: 0x8f829288  lw          $v0, -0x6D78($gp)
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21a21c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21A21Cu;
    {
        const bool branch_taken_0x21a21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A21Cu;
            // 0x21a220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a21c) {
            ctx->pc = 0x21A268u;
            goto label_21a268;
        }
    }
    ctx->pc = 0x21A224u;
    // 0x21a224: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x21a224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21a228: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x21a228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x21a22c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a230: 0x2463c930  addiu       $v1, $v1, -0x36D0
    ctx->pc = 0x21a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
    // 0x21a234: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x21a234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21a238: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x21a238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21a23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a240: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x21a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x21a244: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x21a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21a248: 0x2442c934  addiu       $v0, $v0, -0x36CC
    ctx->pc = 0x21a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953268));
    // 0x21a24c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a250: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a254: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a258: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21a258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21a25c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a260: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x21a260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x21a264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a268:
    // 0x21a268: 0x3e00008  jr          $ra
    ctx->pc = 0x21A268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A270u;
}
