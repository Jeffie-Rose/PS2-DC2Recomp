#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MES__FP12RS_STACKDATAi
// Address: 0x26d920 - 0x26d9ac
void ps2__LOAD_MES__FP12RS_STACKDATAi_0x26d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MES__FP12RS_STACKDATAi_0x26d920");
#endif

    switch (ctx->pc) {
        case 0x26d940u: goto label_26d940;
        case 0x26d948u: goto label_26d948;
        case 0x26d97cu: goto label_26d97c;
        case 0x26d988u: goto label_26d988;
        case 0x26d994u: goto label_26d994;
        default: break;
    }

    ctx->pc = 0x26d920u;

    // 0x26d920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26d924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26d928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d930: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d934: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26d934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d938: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D938u;
    SET_GPR_U32(ctx, 31, 0x26D940u);
    ctx->pc = 0x26D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D938u;
            // 0x26d93c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D940u; }
        if (ctx->pc != 0x26D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D940u; }
        if (ctx->pc != 0x26D940u) { return; }
    }
    ctx->pc = 0x26D940u;
label_26d940:
    // 0x26d940: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D940u;
    SET_GPR_U32(ctx, 31, 0x26D948u);
    ctx->pc = 0x26D944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D940u;
            // 0x26d944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D948u; }
        if (ctx->pc != 0x26D948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D948u; }
        if (ctx->pc != 0x26D948u) { return; }
    }
    ctx->pc = 0x26D948u;
label_26d948:
    // 0x26d948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d94c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D94Cu;
    {
        const bool branch_taken_0x26d94c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D94Cu;
            // 0x26d950: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d94c) {
            ctx->pc = 0x26D95Cu;
            goto label_26d95c;
        }
    }
    ctx->pc = 0x26D954u;
    // 0x26d954: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26D954u;
    {
        const bool branch_taken_0x26d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D954u;
            // 0x26d958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d954) {
            ctx->pc = 0x26D994u;
            goto label_26d994;
        }
    }
    ctx->pc = 0x26D95Cu;
label_26d95c:
    // 0x26d95c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D95Cu;
    {
        const bool branch_taken_0x26d95c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D95Cu;
            // 0x26d960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d95c) {
            ctx->pc = 0x26D974u;
            goto label_26d974;
        }
    }
    ctx->pc = 0x26D964u;
    // 0x26d964: 0xae0017ec  sw          $zero, 0x17EC($s0)
    ctx->pc = 0x26d964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6124), GPR_U32(ctx, 0));
    // 0x26d968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d96c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26D96Cu;
    {
        const bool branch_taken_0x26d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D96Cu;
            // 0x26d970: 0xae0017f0  sw          $zero, 0x17F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d96c) {
            ctx->pc = 0x26D994u;
            goto label_26d994;
        }
    }
    ctx->pc = 0x26D974u;
label_26d974:
    // 0x26d974: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D974u;
    SET_GPR_U32(ctx, 31, 0x26D97Cu);
    ctx->pc = 0x26D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D974u;
            // 0x26d978: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D97Cu; }
        if (ctx->pc != 0x26D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D97Cu; }
        if (ctx->pc != 0x26D97Cu) { return; }
    }
    ctx->pc = 0x26D97Cu;
label_26d97c:
    // 0x26d97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d980: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26D980u;
    SET_GPR_U32(ctx, 31, 0x26D988u);
    ctx->pc = 0x26D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D980u;
            // 0x26d984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D988u; }
        if (ctx->pc != 0x26D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D988u; }
        if (ctx->pc != 0x26D988u) { return; }
    }
    ctx->pc = 0x26D988u;
label_26d988:
    // 0x26d988: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26d988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d98c: 0xc09b608  jal         func_26D820
    ctx->pc = 0x26D98Cu;
    SET_GPR_U32(ctx, 31, 0x26D994u);
    ctx->pc = 0x26D990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D98Cu;
            // 0x26d990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D820u;
    if (runtime->hasFunction(0x26D820u)) {
        auto targetFn = runtime->lookupFunction(0x26D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D994u; }
        if (ctx->pc != 0x26D994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_MES_sub__FPciP6ClsMes_0x26d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D994u; }
        if (ctx->pc != 0x26D994u) { return; }
    }
    ctx->pc = 0x26D994u;
label_26d994:
    // 0x26d994: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26d994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26D9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9A4u;
            // 0x26d9a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D9ACu;
}
