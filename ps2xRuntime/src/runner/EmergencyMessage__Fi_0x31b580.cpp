#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EmergencyMessage__Fi
// Address: 0x31b580 - 0x31b82c
void EmergencyMessage__Fi_0x31b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EmergencyMessage__Fi_0x31b580");
#endif

    switch (ctx->pc) {
        case 0x31b5c4u: goto label_31b5c4;
        case 0x31b5ccu: goto label_31b5cc;
        case 0x31b5d4u: goto label_31b5d4;
        case 0x31b5ecu: goto label_31b5ec;
        case 0x31b5fcu: goto label_31b5fc;
        case 0x31b610u: goto label_31b610;
        case 0x31b61cu: goto label_31b61c;
        case 0x31b630u: goto label_31b630;
        case 0x31b63cu: goto label_31b63c;
        case 0x31b650u: goto label_31b650;
        case 0x31b65cu: goto label_31b65c;
        case 0x31b670u: goto label_31b670;
        case 0x31b67cu: goto label_31b67c;
        case 0x31b690u: goto label_31b690;
        case 0x31b6a0u: goto label_31b6a0;
        case 0x31b6b8u: goto label_31b6b8;
        case 0x31b6ccu: goto label_31b6cc;
        case 0x31b6e4u: goto label_31b6e4;
        case 0x31b6f8u: goto label_31b6f8;
        case 0x31b70cu: goto label_31b70c;
        case 0x31b714u: goto label_31b714;
        case 0x31b72cu: goto label_31b72c;
        case 0x31b734u: goto label_31b734;
        case 0x31b74cu: goto label_31b74c;
        case 0x31b784u: goto label_31b784;
        case 0x31b79cu: goto label_31b79c;
        case 0x31b7a4u: goto label_31b7a4;
        case 0x31b7b4u: goto label_31b7b4;
        case 0x31b7c8u: goto label_31b7c8;
        case 0x31b7dcu: goto label_31b7dc;
        case 0x31b7e8u: goto label_31b7e8;
        default: break;
    }

    ctx->pc = 0x31b580u;

    // 0x31b580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b58c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B58Cu;
    {
        const bool branch_taken_0x31b58c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31B590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B58Cu;
            // 0x31b590: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b58c) {
            ctx->pc = 0x31B59Cu;
            goto label_31b59c;
        }
    }
    ctx->pc = 0x31B594u;
    // 0x31b594: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x31B594u;
    {
        const bool branch_taken_0x31b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B594u;
            // 0x31b598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b594) {
            ctx->pc = 0x31B814u;
            goto label_31b814;
        }
    }
    ctx->pc = 0x31B59Cu;
label_31b59c:
    // 0x31b59c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x31b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x31b5a0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B5A0u;
    {
        const bool branch_taken_0x31b5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B5A0u;
            // 0x31b5a4: 0x3c02fffe  lui         $v0, 0xFFFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5a0) {
            ctx->pc = 0x31B5BCu;
            goto label_31b5bc;
        }
    }
    ctx->pc = 0x31B5A8u;
    // 0x31b5a8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x31b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x31b5ac: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B5ACu;
    {
        const bool branch_taken_0x31b5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B5ACu;
            // 0x31b5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5ac) {
            ctx->pc = 0x31B5BCu;
            goto label_31b5bc;
        }
    }
    ctx->pc = 0x31B5B4u;
    // 0x31b5b4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x31B5B4u;
    {
        const bool branch_taken_0x31b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b5b4) {
            ctx->pc = 0x31B814u;
            goto label_31b814;
        }
    }
    ctx->pc = 0x31B5BCu;
label_31b5bc:
    // 0x31b5bc: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x31B5BCu;
    SET_GPR_U32(ctx, 31, 0x31B5C4u);
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5C4u; }
        if (ctx->pc != 0x31B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5C4u; }
        if (ctx->pc != 0x31B5C4u) { return; }
    }
    ctx->pc = 0x31B5C4u;
label_31b5c4:
    // 0x31b5c4: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x31B5C4u;
    SET_GPR_U32(ctx, 31, 0x31B5CCu);
    ctx->pc = 0x31B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B5C4u;
            // 0x31b5c8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5CCu; }
        if (ctx->pc != 0x31B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5CCu; }
        if (ctx->pc != 0x31B5CCu) { return; }
    }
    ctx->pc = 0x31B5CCu;
label_31b5cc:
    // 0x31b5cc: 0xc06423c  jal         func_1908F0
    ctx->pc = 0x31B5CCu;
    SET_GPR_U32(ctx, 31, 0x31B5D4u);
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5D4u; }
        if (ctx->pc != 0x31B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5D4u; }
        if (ctx->pc != 0x31B5D4u) { return; }
    }
    ctx->pc = 0x31B5D4u;
label_31b5d4:
    // 0x31b5d4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x31b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x31b5d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5dc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x31b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x31b5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e4: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B5E4u;
    SET_GPR_U32(ctx, 31, 0x31B5ECu);
    ctx->pc = 0x31B5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B5E4u;
            // 0x31b5e8: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5ECu; }
        if (ctx->pc != 0x31B5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5ECu; }
        if (ctx->pc != 0x31B5ECu) { return; }
    }
    ctx->pc = 0x31B5ECu;
label_31b5ec:
    // 0x31b5ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31b5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5f4: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B5F4u;
    SET_GPR_U32(ctx, 31, 0x31B5FCu);
    ctx->pc = 0x31B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B5F4u;
            // 0x31b5f8: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5FCu; }
        if (ctx->pc != 0x31B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B5FCu; }
        if (ctx->pc != 0x31B5FCu) { return; }
    }
    ctx->pc = 0x31B5FCu;
label_31b5fc:
    // 0x31b5fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b604: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x31b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x31b608: 0xc050784  jal         func_141E10
    ctx->pc = 0x31B608u;
    SET_GPR_U32(ctx, 31, 0x31B610u);
    ctx->pc = 0x31B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B608u;
            // 0x31b60c: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B610u; }
        if (ctx->pc != 0x31B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B610u; }
        if (ctx->pc != 0x31B610u) { return; }
    }
    ctx->pc = 0x31B610u;
label_31b610:
    // 0x31b610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b614: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B614u;
    SET_GPR_U32(ctx, 31, 0x31B61Cu);
    ctx->pc = 0x31B618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B614u;
            // 0x31b618: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B61Cu; }
        if (ctx->pc != 0x31B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B61Cu; }
        if (ctx->pc != 0x31B61Cu) { return; }
    }
    ctx->pc = 0x31B61Cu;
label_31b61c:
    // 0x31b61c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b624: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x31b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x31b628: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x31B628u;
    SET_GPR_U32(ctx, 31, 0x31B630u);
    ctx->pc = 0x31B62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B628u;
            // 0x31b62c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B630u; }
        if (ctx->pc != 0x31B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B630u; }
        if (ctx->pc != 0x31B630u) { return; }
    }
    ctx->pc = 0x31B630u;
label_31b630:
    // 0x31b630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b634: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B634u;
    SET_GPR_U32(ctx, 31, 0x31B63Cu);
    ctx->pc = 0x31B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B634u;
            // 0x31b638: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B63Cu; }
        if (ctx->pc != 0x31B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B63Cu; }
        if (ctx->pc != 0x31B63Cu) { return; }
    }
    ctx->pc = 0x31B63Cu;
label_31b63c:
    // 0x31b63c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b644: 0x24844800  addiu       $a0, $a0, 0x4800
    ctx->pc = 0x31b644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18432));
    // 0x31b648: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x31B648u;
    SET_GPR_U32(ctx, 31, 0x31B650u);
    ctx->pc = 0x31B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B648u;
            // 0x31b64c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B650u; }
        if (ctx->pc != 0x31B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B650u; }
        if (ctx->pc != 0x31B650u) { return; }
    }
    ctx->pc = 0x31B650u;
label_31b650:
    // 0x31b650: 0x3405c350  ori         $a1, $zero, 0xC350
    ctx->pc = 0x31b650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x31b654: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B654u;
    SET_GPR_U32(ctx, 31, 0x31B65Cu);
    ctx->pc = 0x31B658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B654u;
            // 0x31b658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B65Cu; }
        if (ctx->pc != 0x31B65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B65Cu; }
        if (ctx->pc != 0x31B65Cu) { return; }
    }
    ctx->pc = 0x31B65Cu;
label_31b65c:
    // 0x31b65c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b664: 0x24844830  addiu       $a0, $a0, 0x4830
    ctx->pc = 0x31b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
    // 0x31b668: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x31B668u;
    SET_GPR_U32(ctx, 31, 0x31B670u);
    ctx->pc = 0x31B66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B668u;
            // 0x31b66c: 0x3406c350  ori         $a2, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B670u; }
        if (ctx->pc != 0x31B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B670u; }
        if (ctx->pc != 0x31B670u) { return; }
    }
    ctx->pc = 0x31B670u;
label_31b670:
    // 0x31b670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b674: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B674u;
    SET_GPR_U32(ctx, 31, 0x31B67Cu);
    ctx->pc = 0x31B678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B674u;
            // 0x31b678: 0x3405c350  ori         $a1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B67Cu; }
        if (ctx->pc != 0x31B67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B67Cu; }
        if (ctx->pc != 0x31B67Cu) { return; }
    }
    ctx->pc = 0x31B67Cu;
label_31b67c:
    // 0x31b67c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b684: 0x24844860  addiu       $a0, $a0, 0x4860
    ctx->pc = 0x31b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18528));
    // 0x31b688: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x31B688u;
    SET_GPR_U32(ctx, 31, 0x31B690u);
    ctx->pc = 0x31B68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B688u;
            // 0x31b68c: 0x3406c350  ori         $a2, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B690u; }
        if (ctx->pc != 0x31B690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B690u; }
        if (ctx->pc != 0x31B690u) { return; }
    }
    ctx->pc = 0x31B690u;
label_31b690:
    // 0x31b690: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x31b690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x31b694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b698: 0xc04e704  jal         func_139C10
    ctx->pc = 0x31B698u;
    SET_GPR_U32(ctx, 31, 0x31B6A0u);
    ctx->pc = 0x31B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B698u;
            // 0x31b69c: 0x3445a120  ori         $a1, $v0, 0xA120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6A0u; }
        if (ctx->pc != 0x31B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6A0u; }
        if (ctx->pc != 0x31B6A0u) { return; }
    }
    ctx->pc = 0x31B6A0u;
label_31b6a0:
    // 0x31b6a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6a4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b6a8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x31b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x31b6ac: 0x24844890  addiu       $a0, $a0, 0x4890
    ctx->pc = 0x31b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x31b6b0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x31B6B0u;
    SET_GPR_U32(ctx, 31, 0x31B6B8u);
    ctx->pc = 0x31B6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6B0u;
            // 0x31b6b4: 0x3446a120  ori         $a2, $v0, 0xA120 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6B8u; }
        if (ctx->pc != 0x31B6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6B8u; }
        if (ctx->pc != 0x31B6B8u) { return; }
    }
    ctx->pc = 0x31B6B8u;
label_31b6b8:
    // 0x31b6b8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b6bc: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x31b6c0: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x31b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x31b6c4: 0xc0507bc  jal         func_141EF0
    ctx->pc = 0x31B6C4u;
    SET_GPR_U32(ctx, 31, 0x31B6CCu);
    ctx->pc = 0x31B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6C4u;
            // 0x31b6c8: 0x24a54800  addiu       $a1, $a1, 0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6CCu; }
        if (ctx->pc != 0x31B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6CCu; }
        if (ctx->pc != 0x31B6CCu) { return; }
    }
    ctx->pc = 0x31B6CCu;
label_31b6cc:
    // 0x31b6cc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31b6d0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x31b6d4: 0x24844830  addiu       $a0, $a0, 0x4830
    ctx->pc = 0x31b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
    // 0x31b6d8: 0x24a54860  addiu       $a1, $a1, 0x4860
    ctx->pc = 0x31b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18528));
    // 0x31b6dc: 0xc050810  jal         func_142040
    ctx->pc = 0x31B6DCu;
    SET_GPR_U32(ctx, 31, 0x31B6E4u);
    ctx->pc = 0x31B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6DCu;
            // 0x31b6e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6E4u; }
        if (ctx->pc != 0x31B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6E4u; }
        if (ctx->pc != 0x31B6E4u) { return; }
    }
    ctx->pc = 0x31B6E4u;
label_31b6e4:
    // 0x31b6e4: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x31b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x31b6e8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x31b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x31b6ec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x31b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31b6f0: 0xc064278  jal         func_1909E0
    ctx->pc = 0x31B6F0u;
    SET_GPR_U32(ctx, 31, 0x31B6F8u);
    ctx->pc = 0x31B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B6F0u;
            // 0x31b6f4: 0x24c64890  addiu       $a2, $a2, 0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909E0u;
    if (runtime->hasFunction(0x1909E0u)) {
        auto targetFn = runtime->lookupFunction(0x1909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6F8u; }
        if (ctx->pc != 0x31B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTextureTable__FiiP9mgCMemory_0x1909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B6F8u; }
        if (ctx->pc != 0x31B6F8u) { return; }
    }
    ctx->pc = 0x31B6F8u;
label_31b6f8:
    // 0x31b6f8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x31b6fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b700: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x31b700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x31b704: 0xc04b950  jal         func_12E540
    ctx->pc = 0x31B704u;
    SET_GPR_U32(ctx, 31, 0x31B70Cu);
    ctx->pc = 0x31B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B704u;
            // 0x31b708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B70Cu; }
        if (ctx->pc != 0x31B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B70Cu; }
        if (ctx->pc != 0x31B70Cu) { return; }
    }
    ctx->pc = 0x31B70Cu;
label_31b70c:
    // 0x31b70c: 0xc0b61d8  jal         func_2D8760
    ctx->pc = 0x31B70Cu;
    SET_GPR_U32(ctx, 31, 0x31B714u);
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B714u; }
        if (ctx->pc != 0x31B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B714u; }
        if (ctx->pc != 0x31B714u) { return; }
    }
    ctx->pc = 0x31B714u;
label_31b714:
    // 0x31b714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b724: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x31B724u;
    SET_GPR_U32(ctx, 31, 0x31B72Cu);
    ctx->pc = 0x31B728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B724u;
            // 0x31b728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B72Cu; }
        if (ctx->pc != 0x31B72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B72Cu; }
        if (ctx->pc != 0x31B72Cu) { return; }
    }
    ctx->pc = 0x31B72Cu;
label_31b72c:
    // 0x31b72c: 0xc0b61f8  jal         func_2D87E0
    ctx->pc = 0x31B72Cu;
    SET_GPR_U32(ctx, 31, 0x31B734u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B734u; }
        if (ctx->pc != 0x31B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B734u; }
        if (ctx->pc != 0x31B734u) { return; }
    }
    ctx->pc = 0x31B734u;
label_31b734:
    // 0x31b734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b73c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b744: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x31B744u;
    SET_GPR_U32(ctx, 31, 0x31B74Cu);
    ctx->pc = 0x31B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B744u;
            // 0x31b748: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B74Cu; }
        if (ctx->pc != 0x31B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B74Cu; }
        if (ctx->pc != 0x31B74Cu) { return; }
    }
    ctx->pc = 0x31B74Cu;
label_31b74c:
    // 0x31b74c: 0x8382a3bc  lb          $v0, -0x5C44($gp)
    ctx->pc = 0x31b74cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943676)));
    // 0x31b750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B750u;
    {
        const bool branch_taken_0x31b750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B750u;
            // 0x31b754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b750) {
            ctx->pc = 0x31B760u;
            goto label_31b760;
        }
    }
    ctx->pc = 0x31B758u;
    // 0x31b758: 0xaf80a3b8  sw          $zero, -0x5C48($gp)
    ctx->pc = 0x31b758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943672), GPR_U32(ctx, 0));
    // 0x31b75c: 0xa382a3bc  sb          $v0, -0x5C44($gp)
    ctx->pc = 0x31b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943676), (uint8_t)GPR_U32(ctx, 2));
label_31b760:
    // 0x31b760: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x31b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x31b764: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B764u;
    {
        const bool branch_taken_0x31b764 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B764u;
            // 0x31b768: 0x28410002  slti        $at, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b764) {
            ctx->pc = 0x31B784u;
            goto label_31b784;
        }
    }
    ctx->pc = 0x31B76Cu;
    // 0x31b76c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B76Cu;
    {
        const bool branch_taken_0x31b76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B76Cu;
            // 0x31b770: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b76c) {
            ctx->pc = 0x31B784u;
            goto label_31b784;
        }
    }
    ctx->pc = 0x31B774u;
    // 0x31b774: 0x27828678  addiu       $v0, $gp, -0x7988
    ctx->pc = 0x31b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936184));
    // 0x31b778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b77c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31b780: 0xaf82a3c0  sw          $v0, -0x5C40($gp)
    ctx->pc = 0x31b780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943680), GPR_U32(ctx, 2));
label_31b784:
    // 0x31b784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31b784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b788: 0x0  nop
    ctx->pc = 0x31b788u;
    // NOP
    // 0x31b78c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31b78cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x31b790: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x31b790u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x31b794: 0xc050da0  jal         func_143680
    ctx->pc = 0x31B794u;
    SET_GPR_U32(ctx, 31, 0x31B79Cu);
    ctx->pc = 0x31B798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B794u;
            // 0x31b798: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B79Cu; }
        if (ctx->pc != 0x31B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B79Cu; }
        if (ctx->pc != 0x31B79Cu) { return; }
    }
    ctx->pc = 0x31B79Cu;
label_31b79c:
    // 0x31b79c: 0xc050878  jal         func_1421E0
    ctx->pc = 0x31B79Cu;
    SET_GPR_U32(ctx, 31, 0x31B7A4u);
    ctx->pc = 0x31B7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B79Cu;
            // 0x31b7a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7A4u; }
        if (ctx->pc != 0x31B7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7A4u; }
        if (ctx->pc != 0x31B7A4u) { return; }
    }
    ctx->pc = 0x31B7A4u;
label_31b7a4:
    // 0x31b7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b7ac: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x31B7ACu;
    SET_GPR_U32(ctx, 31, 0x31B7B4u);
    ctx->pc = 0x31B7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7ACu;
            // 0x31b7b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7B4u; }
        if (ctx->pc != 0x31B7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7B4u; }
        if (ctx->pc != 0x31B7B4u) { return; }
    }
    ctx->pc = 0x31B7B4u;
label_31b7b4:
    // 0x31b7b4: 0x8f91a3c0  lw          $s1, -0x5C40($gp)
    ctx->pc = 0x31b7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943680)));
    // 0x31b7b8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B7B8u;
    {
        const bool branch_taken_0x31b7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b7b8) {
            ctx->pc = 0x31B7DCu;
            goto label_31b7dc;
        }
    }
    ctx->pc = 0x31B7C0u;
    // 0x31b7c0: 0xc064210  jal         func_190840
    ctx->pc = 0x31B7C0u;
    SET_GPR_U32(ctx, 31, 0x31B7C8u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7C8u; }
        if (ctx->pc != 0x31B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7C8u; }
        if (ctx->pc != 0x31B7C8u) { return; }
    }
    ctx->pc = 0x31B7C8u;
label_31b7c8:
    // 0x31b7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7d0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x31b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31b7d4: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x31B7D4u;
    SET_GPR_U32(ctx, 31, 0x31B7DCu);
    ctx->pc = 0x31B7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7D4u;
            // 0x31b7d8: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7DCu; }
        if (ctx->pc != 0x31B7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7DCu; }
        if (ctx->pc != 0x31B7DCu) { return; }
    }
    ctx->pc = 0x31B7DCu;
label_31b7dc:
    // 0x31b7dc: 0x0  nop
    ctx->pc = 0x31b7dcu;
    // NOP
    // 0x31b7e0: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x31B7E0u;
    SET_GPR_U32(ctx, 31, 0x31B7E8u);
    ctx->pc = 0x31B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B7E0u;
            // 0x31b7e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7E8u; }
        if (ctx->pc != 0x31B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B7E8u; }
        if (ctx->pc != 0x31B7E8u) { return; }
    }
    ctx->pc = 0x31B7E8u;
label_31b7e8:
    // 0x31b7e8: 0x8f83a3b8  lw          $v1, -0x5C48($gp)
    ctx->pc = 0x31b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943672)));
    // 0x31b7ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x31b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x31b7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31b7f4: 0xaf83a3b8  sw          $v1, -0x5C48($gp)
    ctx->pc = 0x31b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943672), GPR_U32(ctx, 3));
    // 0x31b7f8: 0x8f83a3b8  lw          $v1, -0x5C48($gp)
    ctx->pc = 0x31b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943672)));
    // 0x31b7fc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31b7fcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31b800: 0x0  nop
    ctx->pc = 0x31b800u;
    // NOP
    // 0x31b804: 0x0  nop
    ctx->pc = 0x31b804u;
    // NOP
    // 0x31b808: 0x1010  mfhi        $v0
    ctx->pc = 0x31b808u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31b80c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x31B80Cu;
    {
        const bool branch_taken_0x31b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B80Cu;
            // 0x31b810: 0xaf82a3b8  sw          $v0, -0x5C48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b80c) {
            ctx->pc = 0x31B784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31b784;
        }
    }
    ctx->pc = 0x31B814u;
label_31b814:
    // 0x31b814: 0x0  nop
    ctx->pc = 0x31b814u;
    // NOP
    // 0x31b818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b81c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b824: 0x3e00008  jr          $ra
    ctx->pc = 0x31B824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B824u;
            // 0x31b828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B82Cu;
}
