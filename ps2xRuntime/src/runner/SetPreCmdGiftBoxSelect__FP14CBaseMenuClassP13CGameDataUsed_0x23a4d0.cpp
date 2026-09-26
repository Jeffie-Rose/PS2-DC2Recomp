#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPreCmdGiftBoxSelect__FP14CBaseMenuClassP13CGameDataUsed
// Address: 0x23a4d0 - 0x23a530
void SetPreCmdGiftBoxSelect__FP14CBaseMenuClassP13CGameDataUsed_0x23a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPreCmdGiftBoxSelect__FP14CBaseMenuClassP13CGameDataUsed_0x23a4d0");
#endif

    switch (ctx->pc) {
        case 0x23a50cu: goto label_23a50c;
        case 0x23a51cu: goto label_23a51c;
        default: break;
    }

    ctx->pc = 0x23a4d0u;

    // 0x23a4d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23a4d4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23a4d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23a4dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a4e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23a4e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23a4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4ec: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x23a4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a4f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4f4: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x23a4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a4f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a4fc: 0xa383936c  sb          $v1, -0x6C94($gp)
    ctx->pc = 0x23a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939500), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a500: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23a504: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x23A504u;
    SET_GPR_U32(ctx, 31, 0x23A50Cu);
    ctx->pc = 0x23A508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A504u;
            // 0x23a508: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A50Cu; }
        if (ctx->pc != 0x23A50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A50Cu; }
        if (ctx->pc != 0x23A50Cu) { return; }
    }
    ctx->pc = 0x23A50Cu;
label_23a50c:
    // 0x23a50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a510: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23a514: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x23A514u;
    SET_GPR_U32(ctx, 31, 0x23A51Cu);
    ctx->pc = 0x23A518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A514u;
            // 0x23a518: 0xafb000ac  sw          $s0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A51Cu; }
        if (ctx->pc != 0x23A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A51Cu; }
        if (ctx->pc != 0x23A51Cu) { return; }
    }
    ctx->pc = 0x23A51Cu;
label_23a51c:
    // 0x23a51c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23a51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a528: 0x3e00008  jr          $ra
    ctx->pc = 0x23A528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A528u;
            // 0x23a52c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A530u;
}
