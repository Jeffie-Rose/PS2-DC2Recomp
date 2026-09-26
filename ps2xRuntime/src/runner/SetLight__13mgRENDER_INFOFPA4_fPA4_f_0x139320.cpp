#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLight__13mgRENDER_INFOFPA4_fPA4_f
// Address: 0x139320 - 0x13939c
void SetLight__13mgRENDER_INFOFPA4_fPA4_f_0x139320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLight__13mgRENDER_INFOFPA4_fPA4_f_0x139320");
#endif

    switch (ctx->pc) {
        case 0x139348u: goto label_139348;
        case 0x139358u: goto label_139358;
        case 0x139364u: goto label_139364;
        default: break;
    }

    ctx->pc = 0x139320u;

    // 0x139320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13932c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139334: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x139334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13933c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13933cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139340: 0xc04e494  jal         func_139250
    ctx->pc = 0x139340u;
    SET_GPR_U32(ctx, 31, 0x139348u);
    ctx->pc = 0x139344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139340u;
            // 0x139344: 0xac8203f0  sw          $v0, 0x3F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139348u; }
        if (ctx->pc != 0x139348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139348u; }
        if (ctx->pc != 0x139348u) { return; }
    }
    ctx->pc = 0x139348u;
label_139348:
    // 0x139348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13934c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139350: 0xc041c60  jal         func_107180
    ctx->pc = 0x139350u;
    SET_GPR_U32(ctx, 31, 0x139358u);
    ctx->pc = 0x139354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139350u;
            // 0x139354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139358u; }
        if (ctx->pc != 0x139358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139358u; }
        if (ctx->pc != 0x139358u) { return; }
    }
    ctx->pc = 0x139358u;
label_139358:
    // 0x139358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13935c: 0xc041c60  jal         func_107180
    ctx->pc = 0x13935Cu;
    SET_GPR_U32(ctx, 31, 0x139364u);
    ctx->pc = 0x139360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13935Cu;
            // 0x139360: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139364u; }
        if (ctx->pc != 0x139364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139364u; }
        if (ctx->pc != 0x139364u) { return; }
    }
    ctx->pc = 0x139364u;
label_139364:
    // 0x139364: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x139364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x139368: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x139368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x13936c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x13936cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x139370: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x139370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x139374: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x139374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x139378: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x139378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x13937c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x13937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x139380: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x139380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x139384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13938c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13938cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139394: 0x3e00008  jr          $ra
    ctx->pc = 0x139394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139394u;
            // 0x139398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13939Cu;
}
