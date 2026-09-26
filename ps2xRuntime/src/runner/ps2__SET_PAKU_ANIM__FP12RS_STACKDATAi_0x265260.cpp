#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PAKU_ANIM__FP12RS_STACKDATAi
// Address: 0x265260 - 0x265308
void ps2__SET_PAKU_ANIM__FP12RS_STACKDATAi_0x265260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PAKU_ANIM__FP12RS_STACKDATAi_0x265260");
#endif

    switch (ctx->pc) {
        case 0x265280u: goto label_265280;
        case 0x265290u: goto label_265290;
        case 0x2652a8u: goto label_2652a8;
        case 0x2652bcu: goto label_2652bc;
        case 0x2652d4u: goto label_2652d4;
        case 0x2652ecu: goto label_2652ec;
        default: break;
    }

    ctx->pc = 0x265260u;

    // 0x265260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x265264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x265268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26526c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265270: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x265270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x265274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x265274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265278: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265278u;
    SET_GPR_U32(ctx, 31, 0x265280u);
    ctx->pc = 0x26527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265278u;
            // 0x26527c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265280u; }
        if (ctx->pc != 0x265280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265280u; }
        if (ctx->pc != 0x265280u) { return; }
    }
    ctx->pc = 0x265280u;
label_265280:
    // 0x265280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x265280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x265284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265288: 0xc097e48  jal         func_25F920
    ctx->pc = 0x265288u;
    SET_GPR_U32(ctx, 31, 0x265290u);
    ctx->pc = 0x26528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265288u;
            // 0x26528c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265290u; }
        if (ctx->pc != 0x265290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265290u; }
        if (ctx->pc != 0x265290u) { return; }
    }
    ctx->pc = 0x265290u;
label_265290:
    // 0x265290: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x265290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x265294: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x265294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265298: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x265298u;
    {
        const bool branch_taken_0x265298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265298u;
            // 0x26529c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265298) {
            ctx->pc = 0x2652ACu;
            goto label_2652ac;
        }
    }
    ctx->pc = 0x2652A0u;
    // 0x2652a0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2652A0u;
    SET_GPR_U32(ctx, 31, 0x2652A8u);
    ctx->pc = 0x2652A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2652A0u;
            // 0x2652a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652A8u; }
        if (ctx->pc != 0x2652A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652A8u; }
        if (ctx->pc != 0x2652A8u) { return; }
    }
    ctx->pc = 0x2652A8u;
label_2652a8:
    // 0x2652a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2652a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2652ac:
    // 0x2652ac: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2652acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2652b0: 0xaf8397f8  sw          $v1, -0x6808($gp)
    ctx->pc = 0x2652b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940664), GPR_U32(ctx, 3));
    // 0x2652b4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2652B4u;
    SET_GPR_U32(ctx, 31, 0x2652BCu);
    ctx->pc = 0x2652B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2652B4u;
            // 0x2652b8: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652BCu; }
        if (ctx->pc != 0x2652BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652BCu; }
        if (ctx->pc != 0x2652BCu) { return; }
    }
    ctx->pc = 0x2652BCu;
label_2652bc:
    // 0x2652bc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2652BCu;
    {
        const bool branch_taken_0x2652bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2652BCu;
            // 0x2652c0: 0x3c0401ee  lui         $a0, 0x1EE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652bc) {
            ctx->pc = 0x2652DCu;
            goto label_2652dc;
        }
    }
    ctx->pc = 0x2652C4u;
    // 0x2652c4: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2652c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2652c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2652CCu;
    SET_GPR_U32(ctx, 31, 0x2652D4u);
    ctx->pc = 0x2652D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2652CCu;
            // 0x2652d0: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652D4u; }
        if (ctx->pc != 0x2652D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652D4u; }
        if (ctx->pc != 0x2652D4u) { return; }
    }
    ctx->pc = 0x2652D4u;
label_2652d4:
    // 0x2652d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2652D4u;
    {
        const bool branch_taken_0x2652d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2652D4u;
            // 0x2652d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652d4) {
            ctx->pc = 0x2652F0u;
            goto label_2652f0;
        }
    }
    ctx->pc = 0x2652DCu;
label_2652dc:
    // 0x2652dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2652e0: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x2652e4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2652E4u;
    SET_GPR_U32(ctx, 31, 0x2652ECu);
    ctx->pc = 0x2652E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2652E4u;
            // 0x2652e8: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652ECu; }
        if (ctx->pc != 0x2652ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2652ECu; }
        if (ctx->pc != 0x2652ECu) { return; }
    }
    ctx->pc = 0x2652ECu;
label_2652ec:
    // 0x2652ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2652ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2652f0:
    // 0x2652f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2652f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2652f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2652f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2652f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2652f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2652fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2652fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265300: 0x3e00008  jr          $ra
    ctx->pc = 0x265300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265300u;
            // 0x265304: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265308u;
}
