#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: quest_COMMENT__FP9SPI_STACKi
// Address: 0x31a920 - 0x31a9a0
void quest_COMMENT__FP9SPI_STACKi_0x31a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quest_COMMENT__FP9SPI_STACKi_0x31a920");
#endif

    switch (ctx->pc) {
        case 0x31a938u: goto label_31a938;
        case 0x31a944u: goto label_31a944;
        case 0x31a95cu: goto label_31a95c;
        case 0x31a988u: goto label_31a988;
        default: break;
    }

    ctx->pc = 0x31a920u;

    // 0x31a920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31a928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a930: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A930u;
    SET_GPR_U32(ctx, 31, 0x31A938u);
    ctx->pc = 0x31A934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A930u;
            // 0x31a934: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A938u; }
        if (ctx->pc != 0x31A938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A938u; }
        if (ctx->pc != 0x31A938u) { return; }
    }
    ctx->pc = 0x31A938u;
label_31a938:
    // 0x31a938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a93c: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A93Cu;
    SET_GPR_U32(ctx, 31, 0x31A944u);
    ctx->pc = 0x31A940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A93Cu;
            // 0x31a940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A944u; }
        if (ctx->pc != 0x31A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A944u; }
        if (ctx->pc != 0x31A944u) { return; }
    }
    ctx->pc = 0x31A944u;
label_31a944:
    // 0x31a944: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A944u;
    {
        const bool branch_taken_0x31a944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A944u;
            // 0x31a948: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a944) {
            ctx->pc = 0x31A95Cu;
            goto label_31a95c;
        }
    }
    ctx->pc = 0x31A94Cu;
    // 0x31a94c: 0x8f82a388  lw          $v0, -0x5C78($gp)
    ctx->pc = 0x31a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943624)));
    // 0x31a950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31a950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a954: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31A954u;
    SET_GPR_U32(ctx, 31, 0x31A95Cu);
    ctx->pc = 0x31A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A954u;
            // 0x31a958: 0x24440088  addiu       $a0, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A95Cu; }
        if (ctx->pc != 0x31A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A95Cu; }
        if (ctx->pc != 0x31A95Cu) { return; }
    }
    ctx->pc = 0x31A95Cu;
label_31a95c:
    // 0x31a95c: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x31A95Cu;
    {
        const bool branch_taken_0x31a95c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x31a95c) {
            ctx->pc = 0x31A988u;
            goto label_31a988;
        }
    }
    ctx->pc = 0x31A964u;
    // 0x31a964: 0x8f82a388  lw          $v0, -0x5C78($gp)
    ctx->pc = 0x31a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943624)));
    // 0x31a968: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x31a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31a96c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x31a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31a970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31a970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a974: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a978: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31a978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31a97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31a980: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31A980u;
    SET_GPR_U32(ctx, 31, 0x31A988u);
    ctx->pc = 0x31A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A980u;
            // 0x31a984: 0x2444018a  addiu       $a0, $v0, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 394));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A988u; }
        if (ctx->pc != 0x31A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A988u; }
        if (ctx->pc != 0x31A988u) { return; }
    }
    ctx->pc = 0x31A988u;
label_31a988:
    // 0x31a988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a998: 0x3e00008  jr          $ra
    ctx->pc = 0x31A998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A998u;
            // 0x31a99c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A9A0u;
}
