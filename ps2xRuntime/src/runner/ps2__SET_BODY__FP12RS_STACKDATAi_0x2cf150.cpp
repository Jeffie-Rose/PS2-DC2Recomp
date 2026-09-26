#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BODY__FP12RS_STACKDATAi
// Address: 0x2cf150 - 0x2cf1ac
void ps2__SET_BODY__FP12RS_STACKDATAi_0x2cf150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BODY__FP12RS_STACKDATAi_0x2cf150");
#endif

    switch (ctx->pc) {
        case 0x2cf174u: goto label_2cf174;
        case 0x2cf180u: goto label_2cf180;
        case 0x2cf198u: goto label_2cf198;
        default: break;
    }

    ctx->pc = 0x2cf150u;

    // 0x2cf150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf15c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF15Cu;
    {
        const bool branch_taken_0x2cf15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF15Cu;
            // 0x2cf160: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf15c) {
            ctx->pc = 0x2CF16Cu;
            goto label_2cf16c;
        }
    }
    ctx->pc = 0x2CF164u;
    // 0x2cf164: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CF164u;
    {
        const bool branch_taken_0x2cf164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF164u;
            // 0x2cf168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf164) {
            ctx->pc = 0x2CF19Cu;
            goto label_2cf19c;
        }
    }
    ctx->pc = 0x2CF16Cu;
label_2cf16c:
    // 0x2cf16c: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF16Cu;
    SET_GPR_U32(ctx, 31, 0x2CF174u);
    ctx->pc = 0x2CF170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF16Cu;
            // 0x2cf170: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF174u; }
        if (ctx->pc != 0x2CF174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF174u; }
        if (ctx->pc != 0x2CF174u) { return; }
    }
    ctx->pc = 0x2CF174u;
label_2cf174:
    // 0x2cf174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf178: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF178u;
    SET_GPR_U32(ctx, 31, 0x2CF180u);
    ctx->pc = 0x2CF17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF178u;
            // 0x2cf17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF180u; }
        if (ctx->pc != 0x2CF180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF180u; }
        if (ctx->pc != 0x2CF180u) { return; }
    }
    ctx->pc = 0x2CF180u;
label_2cf180:
    // 0x2cf180: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cf180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cf184: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf188: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cf188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf18c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf190: 0xc05a988  jal         func_16A620
    ctx->pc = 0x2CF190u;
    SET_GPR_U32(ctx, 31, 0x2CF198u);
    ctx->pc = 0x2CF194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF190u;
            // 0x2cf194: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A620u;
    if (runtime->hasFunction(0x16A620u)) {
        auto targetFn = runtime->lookupFunction(0x16A620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF198u; }
        if (ctx->pc != 0x2CF198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryBodyCol__12CActionCharaFif_0x16a620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF198u; }
        if (ctx->pc != 0x2CF198u) { return; }
    }
    ctx->pc = 0x2CF198u;
label_2cf198:
    // 0x2cf198: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cf198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cf19c:
    // 0x2cf19c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf1a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1A4u;
            // 0x2cf1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF1ACu;
}
