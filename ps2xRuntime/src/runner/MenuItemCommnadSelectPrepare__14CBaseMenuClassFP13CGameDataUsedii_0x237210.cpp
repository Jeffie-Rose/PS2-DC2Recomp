#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCommnadSelectPrepare__14CBaseMenuClassFP13CGameDataUsedii
// Address: 0x237210 - 0x237294
void MenuItemCommnadSelectPrepare__14CBaseMenuClassFP13CGameDataUsedii_0x237210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCommnadSelectPrepare__14CBaseMenuClassFP13CGameDataUsedii_0x237210");
#endif

    switch (ctx->pc) {
        case 0x23725cu: goto label_23725c;
        case 0x237270u: goto label_237270;
        default: break;
    }

    ctx->pc = 0x237210u;

    // 0x237210: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x237210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x237214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x237214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x237218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x237218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23721c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x237220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x237220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x237224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x237228: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23722c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23722Cu;
    {
        const bool branch_taken_0x23722c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x237230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23722Cu;
            // 0x237230: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23722c) {
            ctx->pc = 0x23723Cu;
            goto label_23723c;
        }
    }
    ctx->pc = 0x237234u;
    // 0x237234: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x237234u;
    {
        const bool branch_taken_0x237234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237234u;
            // 0x237238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237234) {
            ctx->pc = 0x23727Cu;
            goto label_23727c;
        }
    }
    ctx->pc = 0x23723Cu;
label_23723c:
    // 0x23723c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x23723cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x237240: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x237240u;
    {
        const bool branch_taken_0x237240 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237240u;
            // 0x237244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237240) {
            ctx->pc = 0x23727Cu;
            goto label_23727c;
        }
    }
    ctx->pc = 0x237248u;
    // 0x237248: 0xa64600f4  sh          $a2, 0xF4($s2)
    ctx->pc = 0x237248u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 6));
    // 0x23724c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237250: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x237250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x237254: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x237254u;
    SET_GPR_U32(ctx, 31, 0x23725Cu);
    ctx->pc = 0x237258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237254u;
            // 0x237258: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23725Cu; }
        if (ctx->pc != 0x23725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23725Cu; }
        if (ctx->pc != 0x23725Cu) { return; }
    }
    ctx->pc = 0x23725Cu;
label_23725c:
    // 0x23725c: 0x864600f4  lh          $a2, 0xF4($s2)
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x237260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237264: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x237264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237268: 0xc08f268  jal         func_23C9A0
    ctx->pc = 0x237268u;
    SET_GPR_U32(ctx, 31, 0x237270u);
    ctx->pc = 0x23726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237268u;
            // 0x23726c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C9A0u;
    if (runtime->hasFunction(0x23C9A0u)) {
        auto targetFn = runtime->lookupFunction(0x23C9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237270u; }
        if (ctx->pc != 0x237270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemCommandMsg__FP13CGameDataUsedP17MENU_ASKMODE_PARAii_0x23c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237270u; }
        if (ctx->pc != 0x237270u) { return; }
    }
    ctx->pc = 0x237270u;
label_237270:
    // 0x237270: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x237270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x237274: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x237274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x237278: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x237278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23727c:
    // 0x23727c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23727cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23728c: 0x3e00008  jr          $ra
    ctx->pc = 0x23728Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23728Cu;
            // 0x237290: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237294u;
}
