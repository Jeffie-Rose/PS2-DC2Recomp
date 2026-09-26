#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: YesNoCursor__7CDC2MesFv
// Address: 0x21d8c0 - 0x21d94c
void YesNoCursor__7CDC2MesFv_0x21d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("YesNoCursor__7CDC2MesFv_0x21d8c0");
#endif

    switch (ctx->pc) {
        case 0x21d8e8u: goto label_21d8e8;
        case 0x21d900u: goto label_21d900;
        case 0x21d924u: goto label_21d924;
        case 0x21d934u: goto label_21d934;
        default: break;
    }

    ctx->pc = 0x21d8c0u;

    // 0x21d8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d8c4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21d8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21d8c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d8d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d8d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x21d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x21d8dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8e0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D8E0u;
    SET_GPR_U32(ctx, 31, 0x21D8E8u);
    ctx->pc = 0x21D8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8E0u;
            // 0x21d8e4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D8E8u; }
        if (ctx->pc != 0x21D8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D8E8u; }
        if (ctx->pc != 0x21D8E8u) { return; }
    }
    ctx->pc = 0x21D8E8u;
label_21d8e8:
    // 0x21d8e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D8E8u;
    {
        const bool branch_taken_0x21d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8E8u;
            // 0x21d8ec: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8e8) {
            ctx->pc = 0x21D8F4u;
            goto label_21d8f4;
        }
    }
    ctx->pc = 0x21D8F0u;
    // 0x21d8f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21d8f4:
    // 0x21d8f4: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x21d8f8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D8F8u;
    SET_GPR_U32(ctx, 31, 0x21D900u);
    ctx->pc = 0x21D8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8F8u;
            // 0x21d8fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D900u; }
        if (ctx->pc != 0x21D900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D900u; }
        if (ctx->pc != 0x21D900u) { return; }
    }
    ctx->pc = 0x21D900u;
label_21d900:
    // 0x21d900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D900u;
    {
        const bool branch_taken_0x21d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D900u;
            // 0x21d904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d900) {
            ctx->pc = 0x21D910u;
            goto label_21d910;
        }
    }
    ctx->pc = 0x21D908u;
    // 0x21d908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d90c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d910:
    // 0x21d910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d918: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21d918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d91c: 0xc0875e0  jal         func_21D780
    ctx->pc = 0x21D91Cu;
    SET_GPR_U32(ctx, 31, 0x21D924u);
    ctx->pc = 0x21D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D91Cu;
            // 0x21d920: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D780u;
    if (runtime->hasFunction(0x21D780u)) {
        auto targetFn = runtime->lookupFunction(0x21D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D924u; }
        if (ctx->pc != 0x21D924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor__7CDC2MesFiiii_0x21d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D924u; }
        if (ctx->pc != 0x21D924u) { return; }
    }
    ctx->pc = 0x21D924u;
label_21d924:
    // 0x21d924: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D924u;
    {
        const bool branch_taken_0x21d924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D924u;
            // 0x21d928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d924) {
            ctx->pc = 0x21D934u;
            goto label_21d934;
        }
    }
    ctx->pc = 0x21D92Cu;
    // 0x21d92c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21D92Cu;
    SET_GPR_U32(ctx, 31, 0x21D934u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D934u; }
        if (ctx->pc != 0x21D934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D934u; }
        if (ctx->pc != 0x21D934u) { return; }
    }
    ctx->pc = 0x21D934u;
label_21d934:
    // 0x21d934: 0x822221e1  lb          $v0, 0x21E1($s1)
    ctx->pc = 0x21d934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8673)));
    // 0x21d938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d944: 0x3e00008  jr          $ra
    ctx->pc = 0x21D944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D944u;
            // 0x21d948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D94Cu;
}
