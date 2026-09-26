#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CPaintEffectFv
// Address: 0x2fb850 - 0x2fbab8
void Draw__12CPaintEffectFv_0x2fb850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CPaintEffectFv_0x2fb850");
#endif

    switch (ctx->pc) {
        case 0x2fb850u: goto label_2fb850;
        case 0x2fb854u: goto label_2fb854;
        case 0x2fb858u: goto label_2fb858;
        case 0x2fb85cu: goto label_2fb85c;
        case 0x2fb860u: goto label_2fb860;
        case 0x2fb864u: goto label_2fb864;
        case 0x2fb868u: goto label_2fb868;
        case 0x2fb86cu: goto label_2fb86c;
        case 0x2fb870u: goto label_2fb870;
        case 0x2fb874u: goto label_2fb874;
        case 0x2fb878u: goto label_2fb878;
        case 0x2fb87cu: goto label_2fb87c;
        case 0x2fb880u: goto label_2fb880;
        case 0x2fb884u: goto label_2fb884;
        case 0x2fb888u: goto label_2fb888;
        case 0x2fb88cu: goto label_2fb88c;
        case 0x2fb890u: goto label_2fb890;
        case 0x2fb894u: goto label_2fb894;
        case 0x2fb898u: goto label_2fb898;
        case 0x2fb89cu: goto label_2fb89c;
        case 0x2fb8a0u: goto label_2fb8a0;
        case 0x2fb8a4u: goto label_2fb8a4;
        case 0x2fb8a8u: goto label_2fb8a8;
        case 0x2fb8acu: goto label_2fb8ac;
        case 0x2fb8b0u: goto label_2fb8b0;
        case 0x2fb8b4u: goto label_2fb8b4;
        case 0x2fb8b8u: goto label_2fb8b8;
        case 0x2fb8bcu: goto label_2fb8bc;
        case 0x2fb8c0u: goto label_2fb8c0;
        case 0x2fb8c4u: goto label_2fb8c4;
        case 0x2fb8c8u: goto label_2fb8c8;
        case 0x2fb8ccu: goto label_2fb8cc;
        case 0x2fb8d0u: goto label_2fb8d0;
        case 0x2fb8d4u: goto label_2fb8d4;
        case 0x2fb8d8u: goto label_2fb8d8;
        case 0x2fb8dcu: goto label_2fb8dc;
        case 0x2fb8e0u: goto label_2fb8e0;
        case 0x2fb8e4u: goto label_2fb8e4;
        case 0x2fb8e8u: goto label_2fb8e8;
        case 0x2fb8ecu: goto label_2fb8ec;
        case 0x2fb8f0u: goto label_2fb8f0;
        case 0x2fb8f4u: goto label_2fb8f4;
        case 0x2fb8f8u: goto label_2fb8f8;
        case 0x2fb8fcu: goto label_2fb8fc;
        case 0x2fb900u: goto label_2fb900;
        case 0x2fb904u: goto label_2fb904;
        case 0x2fb908u: goto label_2fb908;
        case 0x2fb90cu: goto label_2fb90c;
        case 0x2fb910u: goto label_2fb910;
        case 0x2fb914u: goto label_2fb914;
        case 0x2fb918u: goto label_2fb918;
        case 0x2fb91cu: goto label_2fb91c;
        case 0x2fb920u: goto label_2fb920;
        case 0x2fb924u: goto label_2fb924;
        case 0x2fb928u: goto label_2fb928;
        case 0x2fb92cu: goto label_2fb92c;
        case 0x2fb930u: goto label_2fb930;
        case 0x2fb934u: goto label_2fb934;
        case 0x2fb938u: goto label_2fb938;
        case 0x2fb93cu: goto label_2fb93c;
        case 0x2fb940u: goto label_2fb940;
        case 0x2fb944u: goto label_2fb944;
        case 0x2fb948u: goto label_2fb948;
        case 0x2fb94cu: goto label_2fb94c;
        case 0x2fb950u: goto label_2fb950;
        case 0x2fb954u: goto label_2fb954;
        case 0x2fb958u: goto label_2fb958;
        case 0x2fb95cu: goto label_2fb95c;
        case 0x2fb960u: goto label_2fb960;
        case 0x2fb964u: goto label_2fb964;
        case 0x2fb968u: goto label_2fb968;
        case 0x2fb96cu: goto label_2fb96c;
        case 0x2fb970u: goto label_2fb970;
        case 0x2fb974u: goto label_2fb974;
        case 0x2fb978u: goto label_2fb978;
        case 0x2fb97cu: goto label_2fb97c;
        case 0x2fb980u: goto label_2fb980;
        case 0x2fb984u: goto label_2fb984;
        case 0x2fb988u: goto label_2fb988;
        case 0x2fb98cu: goto label_2fb98c;
        case 0x2fb990u: goto label_2fb990;
        case 0x2fb994u: goto label_2fb994;
        case 0x2fb998u: goto label_2fb998;
        case 0x2fb99cu: goto label_2fb99c;
        case 0x2fb9a0u: goto label_2fb9a0;
        case 0x2fb9a4u: goto label_2fb9a4;
        case 0x2fb9a8u: goto label_2fb9a8;
        case 0x2fb9acu: goto label_2fb9ac;
        case 0x2fb9b0u: goto label_2fb9b0;
        case 0x2fb9b4u: goto label_2fb9b4;
        case 0x2fb9b8u: goto label_2fb9b8;
        case 0x2fb9bcu: goto label_2fb9bc;
        case 0x2fb9c0u: goto label_2fb9c0;
        case 0x2fb9c4u: goto label_2fb9c4;
        case 0x2fb9c8u: goto label_2fb9c8;
        case 0x2fb9ccu: goto label_2fb9cc;
        case 0x2fb9d0u: goto label_2fb9d0;
        case 0x2fb9d4u: goto label_2fb9d4;
        case 0x2fb9d8u: goto label_2fb9d8;
        case 0x2fb9dcu: goto label_2fb9dc;
        case 0x2fb9e0u: goto label_2fb9e0;
        case 0x2fb9e4u: goto label_2fb9e4;
        case 0x2fb9e8u: goto label_2fb9e8;
        case 0x2fb9ecu: goto label_2fb9ec;
        case 0x2fb9f0u: goto label_2fb9f0;
        case 0x2fb9f4u: goto label_2fb9f4;
        case 0x2fb9f8u: goto label_2fb9f8;
        case 0x2fb9fcu: goto label_2fb9fc;
        case 0x2fba00u: goto label_2fba00;
        case 0x2fba04u: goto label_2fba04;
        case 0x2fba08u: goto label_2fba08;
        case 0x2fba0cu: goto label_2fba0c;
        case 0x2fba10u: goto label_2fba10;
        case 0x2fba14u: goto label_2fba14;
        case 0x2fba18u: goto label_2fba18;
        case 0x2fba1cu: goto label_2fba1c;
        case 0x2fba20u: goto label_2fba20;
        case 0x2fba24u: goto label_2fba24;
        case 0x2fba28u: goto label_2fba28;
        case 0x2fba2cu: goto label_2fba2c;
        case 0x2fba30u: goto label_2fba30;
        case 0x2fba34u: goto label_2fba34;
        case 0x2fba38u: goto label_2fba38;
        case 0x2fba3cu: goto label_2fba3c;
        case 0x2fba40u: goto label_2fba40;
        case 0x2fba44u: goto label_2fba44;
        case 0x2fba48u: goto label_2fba48;
        case 0x2fba4cu: goto label_2fba4c;
        case 0x2fba50u: goto label_2fba50;
        case 0x2fba54u: goto label_2fba54;
        case 0x2fba58u: goto label_2fba58;
        case 0x2fba5cu: goto label_2fba5c;
        case 0x2fba60u: goto label_2fba60;
        case 0x2fba64u: goto label_2fba64;
        case 0x2fba68u: goto label_2fba68;
        case 0x2fba6cu: goto label_2fba6c;
        case 0x2fba70u: goto label_2fba70;
        case 0x2fba74u: goto label_2fba74;
        case 0x2fba78u: goto label_2fba78;
        case 0x2fba7cu: goto label_2fba7c;
        case 0x2fba80u: goto label_2fba80;
        case 0x2fba84u: goto label_2fba84;
        case 0x2fba88u: goto label_2fba88;
        case 0x2fba8cu: goto label_2fba8c;
        case 0x2fba90u: goto label_2fba90;
        case 0x2fba94u: goto label_2fba94;
        case 0x2fba98u: goto label_2fba98;
        case 0x2fba9cu: goto label_2fba9c;
        case 0x2fbaa0u: goto label_2fbaa0;
        case 0x2fbaa4u: goto label_2fbaa4;
        case 0x2fbaa8u: goto label_2fbaa8;
        case 0x2fbaacu: goto label_2fbaac;
        case 0x2fbab0u: goto label_2fbab0;
        case 0x2fbab4u: goto label_2fbab4;
        default: break;
    }

    ctx->pc = 0x2fb850u;

label_2fb850:
    // 0x2fb850: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2fb850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2fb854:
    // 0x2fb854: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fb854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fb858:
    // 0x2fb858: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fb858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fb85c:
    // 0x2fb85c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fb85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fb860:
    // 0x2fb860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fb864:
    // 0x2fb864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fb864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fb868:
    // 0x2fb868: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fb868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fb86c:
    // 0x2fb86c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2fb870:
    if (ctx->pc == 0x2FB870u) {
        ctx->pc = 0x2FB870u;
            // 0x2fb870: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB874u;
        goto label_2fb874;
    }
    ctx->pc = 0x2FB86Cu;
    {
        const bool branch_taken_0x2fb86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB86Cu;
            // 0x2fb870: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb86c) {
            ctx->pc = 0x2FB88Cu;
            goto label_2fb88c;
        }
    }
    ctx->pc = 0x2FB874u;
label_2fb874:
    // 0x2fb874: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fb874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb878:
    // 0x2fb878: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2fb87c:
    if (ctx->pc == 0x2FB87Cu) {
        ctx->pc = 0x2FB87Cu;
            // 0x2fb87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB880u;
        goto label_2fb880;
    }
    ctx->pc = 0x2FB878u;
    {
        const bool branch_taken_0x2fb878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB878u;
            // 0x2fb87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb878) {
            ctx->pc = 0x2FB890u;
            goto label_2fb890;
        }
    }
    ctx->pc = 0x2FB880u;
label_2fb880:
    // 0x2fb880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb884:
    // 0x2fb884: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2fb888:
    if (ctx->pc == 0x2FB888u) {
        ctx->pc = 0x2FB88Cu;
        goto label_2fb88c;
    }
    ctx->pc = 0x2FB884u;
    {
        const bool branch_taken_0x2fb884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fb884) {
            ctx->pc = 0x2FB898u;
            goto label_2fb898;
        }
    }
    ctx->pc = 0x2FB88Cu;
label_2fb88c:
    // 0x2fb88c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb890:
    // 0x2fb890: 0x10000083  b           . + 4 + (0x83 << 2)
label_2fb894:
    if (ctx->pc == 0x2FB894u) {
        ctx->pc = 0x2FB894u;
            // 0x2fb894: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2FB898u;
        goto label_2fb898;
    }
    ctx->pc = 0x2FB890u;
    {
        const bool branch_taken_0x2fb890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB890u;
            // 0x2fb894: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb890) {
            ctx->pc = 0x2FBAA0u;
            goto label_2fbaa0;
        }
    }
    ctx->pc = 0x2FB898u;
label_2fb898:
    // 0x2fb898: 0x8e7900bc  lw          $t9, 0xBC($s3)
    ctx->pc = 0x2fb898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2fb89c:
    // 0x2fb89c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fb89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fb8a0:
    // 0x2fb8a0: 0x320f809  jalr        $t9
label_2fb8a4:
    if (ctx->pc == 0x2FB8A4u) {
        ctx->pc = 0x2FB8A4u;
            // 0x2fb8a4: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2FB8A8u;
        goto label_2fb8a8;
    }
    ctx->pc = 0x2FB8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FB8A8u);
        ctx->pc = 0x2FB8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB8A0u;
            // 0x2fb8a4: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FB8A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8A8u; }
            if (ctx->pc != 0x2FB8A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FB8A8u;
label_2fb8a8:
    // 0x2fb8a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fb8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8ac:
    // 0x2fb8ac: 0xc051150  jal         func_144540
label_2fb8b0:
    if (ctx->pc == 0x2FB8B0u) {
        ctx->pc = 0x2FB8B0u;
            // 0x2fb8b0: 0x267000a0  addiu       $s0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2FB8B4u;
        goto label_2fb8b4;
    }
    ctx->pc = 0x2FB8ACu;
    SET_GPR_U32(ctx, 31, 0x2FB8B4u);
    ctx->pc = 0x2FB8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB8ACu;
            // 0x2fb8b0: 0x267000a0  addiu       $s0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8B4u; }
        if (ctx->pc != 0x2FB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8B4u; }
        if (ctx->pc != 0x2FB8B4u) { return; }
    }
    ctx->pc = 0x2FB8B4u;
label_2fb8b4:
    // 0x2fb8b4: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x2fb8b4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb8b8:
    // 0x2fb8b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fb8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fb8bc:
    // 0x2fb8bc: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2fb8bcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2fb8c0:
    // 0x2fb8c0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2fb8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fb8c4:
    // 0x2fb8c4: 0x27ac0070  addiu       $t4, $sp, 0x70
    ctx->pc = 0x2fb8c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fb8c8:
    // 0x2fb8c8: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x2fb8c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2fb8cc:
    // 0x2fb8cc: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x2fb8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fb8d0:
    // 0x2fb8d0: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2fb8d0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2fb8d4:
    // 0x2fb8d4: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x2fb8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2fb8d8:
    // 0x2fb8d8: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x2fb8d8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2fb8dc:
    // 0x2fb8dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fb8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fb8e0:
    // 0x2fb8e0: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2fb8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
label_2fb8e4:
    // 0x2fb8e4: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2fb8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_2fb8e8:
    // 0x2fb8e8: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x2fb8e8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2fb8ec:
    // 0x2fb8ec: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2fb8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_2fb8f0:
    // 0x2fb8f0: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x2fb8f0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_2fb8f4:
    // 0x2fb8f4: 0xffaa0068  sd          $t2, 0x68($sp)
    ctx->pc = 0x2fb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 10));
label_2fb8f8:
    // 0x2fb8f8: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x2fb8f8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2fb8fc:
    // 0x2fb8fc: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x2fb8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
label_2fb900:
    // 0x2fb900: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x2fb900u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_2fb904:
    // 0x2fb904: 0xffaa0078  sd          $t2, 0x78($sp)
    ctx->pc = 0x2fb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 10));
label_2fb908:
    // 0x2fb908: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x2fb908u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_2fb90c:
    // 0x2fb90c: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x2fb90cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
label_2fb910:
    // 0x2fb910: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2fb910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_2fb914:
    // 0x2fb914: 0xffa20088  sd          $v0, 0x88($sp)
    ctx->pc = 0x2fb914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
label_2fb918:
    // 0x2fb918: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2fb918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2fb91c:
    // 0x2fb91c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2fb91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2fb920:
    // 0x2fb920: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2fb920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2fb924:
    // 0x2fb924: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2fb924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2fb928:
    // 0x2fb928: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2fb928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2fb92c:
    // 0x2fb92c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2fb92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2fb930:
    // 0x2fb930: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fb930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2fb934:
    // 0x2fb934: 0xc04e290  jal         func_138A40
label_2fb938:
    if (ctx->pc == 0x2FB938u) {
        ctx->pc = 0x2FB938u;
            // 0x2fb938: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FB93Cu;
        goto label_2fb93c;
    }
    ctx->pc = 0x2FB934u;
    SET_GPR_U32(ctx, 31, 0x2FB93Cu);
    ctx->pc = 0x2FB938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB934u;
            // 0x2fb938: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB93Cu; }
        if (ctx->pc != 0x2FB93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB93Cu; }
        if (ctx->pc != 0x2FB93Cu) { return; }
    }
    ctx->pc = 0x2FB93Cu;
label_2fb93c:
    // 0x2fb93c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fb940:
    // 0x2fb940: 0xc04e25c  jal         func_138970
label_2fb944:
    if (ctx->pc == 0x2FB944u) {
        ctx->pc = 0x2FB944u;
            // 0x2fb944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FB948u;
        goto label_2fb948;
    }
    ctx->pc = 0x2FB940u;
    SET_GPR_U32(ctx, 31, 0x2FB948u);
    ctx->pc = 0x2FB944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB940u;
            // 0x2fb944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB948u; }
        if (ctx->pc != 0x2FB948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB948u; }
        if (ctx->pc != 0x2FB948u) { return; }
    }
    ctx->pc = 0x2FB948u;
label_2fb948:
    // 0x2fb948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb94c:
    // 0x2fb94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb950:
    // 0x2fb950: 0xc04ec68  jal         func_13B1A0
label_2fb954:
    if (ctx->pc == 0x2FB954u) {
        ctx->pc = 0x2FB954u;
            // 0x2fb954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB958u;
        goto label_2fb958;
    }
    ctx->pc = 0x2FB950u;
    SET_GPR_U32(ctx, 31, 0x2FB958u);
    ctx->pc = 0x2FB954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB950u;
            // 0x2fb954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB958u; }
        if (ctx->pc != 0x2FB958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB958u; }
        if (ctx->pc != 0x2FB958u) { return; }
    }
    ctx->pc = 0x2FB958u;
label_2fb958:
    // 0x2fb958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb95c:
    // 0x2fb95c: 0xc04ec80  jal         func_13B200
label_2fb960:
    if (ctx->pc == 0x2FB960u) {
        ctx->pc = 0x2FB960u;
            // 0x2fb960: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FB964u;
        goto label_2fb964;
    }
    ctx->pc = 0x2FB95Cu;
    SET_GPR_U32(ctx, 31, 0x2FB964u);
    ctx->pc = 0x2FB960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB95Cu;
            // 0x2fb960: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB964u; }
        if (ctx->pc != 0x2FB964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB964u; }
        if (ctx->pc != 0x2FB964u) { return; }
    }
    ctx->pc = 0x2FB964u;
label_2fb964:
    // 0x2fb964: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x2fb964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_2fb968:
    // 0x2fb968: 0xc04ecbc  jal         func_13B2F0
label_2fb96c:
    if (ctx->pc == 0x2FB96Cu) {
        ctx->pc = 0x2FB96Cu;
            // 0x2fb96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB970u;
        goto label_2fb970;
    }
    ctx->pc = 0x2FB968u;
    SET_GPR_U32(ctx, 31, 0x2FB970u);
    ctx->pc = 0x2FB96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB968u;
            // 0x2fb96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB970u; }
        if (ctx->pc != 0x2FB970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB970u; }
        if (ctx->pc != 0x2FB970u) { return; }
    }
    ctx->pc = 0x2FB970u;
label_2fb970:
    // 0x2fb970: 0xc04ecd8  jal         func_13B360
label_2fb974:
    if (ctx->pc == 0x2FB974u) {
        ctx->pc = 0x2FB974u;
            // 0x2fb974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB978u;
        goto label_2fb978;
    }
    ctx->pc = 0x2FB970u;
    SET_GPR_U32(ctx, 31, 0x2FB978u);
    ctx->pc = 0x2FB974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB970u;
            // 0x2fb974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB978u; }
        if (ctx->pc != 0x2FB978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB978u; }
        if (ctx->pc != 0x2FB978u) { return; }
    }
    ctx->pc = 0x2FB978u;
label_2fb978:
    // 0x2fb978: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fb978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2fb97c:
    // 0x2fb97c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x2fb97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_2fb980:
    // 0x2fb980: 0x2442d210  addiu       $v0, $v0, -0x2DF0
    ctx->pc = 0x2fb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955536));
label_2fb984:
    // 0x2fb984: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fb988:
    // 0x2fb988: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2fb988u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb98c:
    // 0x2fb98c: 0x24c6d230  addiu       $a2, $a2, -0x2DD0
    ctx->pc = 0x2fb98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955568));
label_2fb990:
    // 0x2fb990: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2fb990u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2fb994:
    // 0x2fb994: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fb994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2fb998:
    // 0x2fb998: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2fb99c:
    // 0x2fb99c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fb99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb9a0:
    // 0x2fb9a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fb9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb9a4:
    // 0x2fb9a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2fb9a8:
    // 0x2fb9a8: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2fb9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_2fb9ac:
    // 0x2fb9ac: 0x7d040010  sq          $a0, 0x10($t0)
    ctx->pc = 0x2fb9acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 4));
label_2fb9b0:
    // 0x2fb9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fb9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fb9b4:
    // 0x2fb9b4: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fb9b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb9b8:
    // 0x2fb9b8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2fb9b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_2fb9bc:
    // 0x2fb9bc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fb9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2fb9c0:
    // 0x2fb9c0: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2fb9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_2fb9c4:
    // 0x2fb9c4: 0x7a620080  lq          $v0, 0x80($s3)
    ctx->pc = 0x2fb9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 128)));
label_2fb9c8:
    // 0x2fb9c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2fb9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2fb9cc:
    // 0x2fb9cc: 0xc66000f0  lwc1        $f0, 0xF0($s3)
    ctx->pc = 0x2fb9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb9d0:
    // 0x2fb9d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fb9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fb9d4:
    // 0x2fb9d4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2fb9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2fb9d8:
    // 0x2fb9d8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2fb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2fb9dc:
    // 0x2fb9dc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2fb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2fb9e0:
    // 0x2fb9e0: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x2fb9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb9e4:
    // 0x2fb9e4: 0x78490100  lq          $t1, 0x100($v0)
    ctx->pc = 0x2fb9e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 256)));
label_2fb9e8:
    // 0x2fb9e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2fb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fb9ec:
    // 0x2fb9ec: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2fb9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2fb9f0:
    // 0x2fb9f0: 0x246396c0  addiu       $v1, $v1, -0x6940
    ctx->pc = 0x2fb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940352));
label_2fb9f4:
    // 0x2fb9f4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2fb9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2fb9f8:
    // 0x2fb9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb9fc:
    // 0x2fb9fc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2fb9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2fba00:
    // 0x2fba00: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2fba04:
    // 0x2fba04: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x2fba04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
label_2fba08:
    // 0x2fba08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fba0c:
    // 0x2fba0c: 0xafa800ec  sw          $t0, 0xEC($sp)
    ctx->pc = 0x2fba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 8));
label_2fba10:
    // 0x2fba10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fba10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fba14:
    // 0x2fba14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fba14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2fba18:
    // 0x2fba18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2fba18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_2fba1c:
    // 0x2fba1c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2fba20:
    // 0x2fba20: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2fba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2fba24:
    // 0x2fba24: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x2fba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_2fba28:
    // 0x2fba28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fba28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2fba2c:
    // 0x2fba2c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2fba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2fba30:
    // 0x2fba30: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x2fba30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_2fba34:
    // 0x2fba34: 0xc04ed64  jal         func_13B590
label_2fba38:
    if (ctx->pc == 0x2FBA38u) {
        ctx->pc = 0x2FBA38u;
            // 0x2fba38: 0x244900b0  addiu       $t1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->pc = 0x2FBA3Cu;
        goto label_2fba3c;
    }
    ctx->pc = 0x2FBA34u;
    SET_GPR_U32(ctx, 31, 0x2FBA3Cu);
    ctx->pc = 0x2FBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA34u;
            // 0x2fba38: 0x244900b0  addiu       $t1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA3Cu; }
        if (ctx->pc != 0x2FBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA3Cu; }
        if (ctx->pc != 0x2FBA3Cu) { return; }
    }
    ctx->pc = 0x2FBA3Cu;
label_2fba3c:
    // 0x2fba3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fba3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2fba40:
    // 0x2fba40: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x2fba40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_2fba44:
    // 0x2fba44: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_2fba48:
    if (ctx->pc == 0x2FBA48u) {
        ctx->pc = 0x2FBA48u;
            // 0x2fba48: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2FBA4Cu;
        goto label_2fba4c;
    }
    ctx->pc = 0x2FBA44u;
    {
        const bool branch_taken_0x2fba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA44u;
            // 0x2fba48: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba44) {
            ctx->pc = 0x2FB9D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb9d8;
        }
    }
    ctx->pc = 0x2FBA4Cu;
label_2fba4c:
    // 0x2fba4c: 0xc04edb0  jal         func_13B6C0
label_2fba50:
    if (ctx->pc == 0x2FBA50u) {
        ctx->pc = 0x2FBA50u;
            // 0x2fba50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA54u;
        goto label_2fba54;
    }
    ctx->pc = 0x2FBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2FBA54u);
    ctx->pc = 0x2FBA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA4Cu;
            // 0x2fba50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA54u; }
        if (ctx->pc != 0x2FBA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA54u; }
        if (ctx->pc != 0x2FBA54u) { return; }
    }
    ctx->pc = 0x2FBA54u;
label_2fba54:
    // 0x2fba54: 0xc04edfc  jal         func_13B7F0
label_2fba58:
    if (ctx->pc == 0x2FBA58u) {
        ctx->pc = 0x2FBA58u;
            // 0x2fba58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA5Cu;
        goto label_2fba5c;
    }
    ctx->pc = 0x2FBA54u;
    SET_GPR_U32(ctx, 31, 0x2FBA5Cu);
    ctx->pc = 0x2FBA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA54u;
            // 0x2fba58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA5Cu; }
        if (ctx->pc != 0x2FBA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA5Cu; }
        if (ctx->pc != 0x2FBA5Cu) { return; }
    }
    ctx->pc = 0x2FBA5Cu;
label_2fba5c:
    // 0x2fba5c: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x2fba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fba60:
    // 0x2fba60: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2fba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2fba64:
    // 0x2fba64: 0xc04c154  jal         func_130550
label_2fba68:
    if (ctx->pc == 0x2FBA68u) {
        ctx->pc = 0x2FBA68u;
            // 0x2fba68: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2FBA6Cu;
        goto label_2fba6c;
    }
    ctx->pc = 0x2FBA64u;
    SET_GPR_U32(ctx, 31, 0x2FBA6Cu);
    ctx->pc = 0x2FBA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA64u;
            // 0x2fba68: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA6Cu; }
        if (ctx->pc != 0x2FBA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA6Cu; }
        if (ctx->pc != 0x2FBA6Cu) { return; }
    }
    ctx->pc = 0x2FBA6Cu;
label_2fba6c:
    // 0x2fba6c: 0xc050e3c  jal         func_1438F0
label_2fba70:
    if (ctx->pc == 0x2FBA70u) {
        ctx->pc = 0x2FBA74u;
        goto label_2fba74;
    }
    ctx->pc = 0x2FBA6Cu;
    SET_GPR_U32(ctx, 31, 0x2FBA74u);
    ctx->pc = 0x1438F0u;
    if (runtime->hasFunction(0x1438F0u)) {
        auto targetFn = runtime->lookupFunction(0x1438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA74u; }
        if (ctx->pc != 0x2FBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFogEnable__Fv_0x1438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA74u; }
        if (ctx->pc != 0x2FBA74u) { return; }
    }
    ctx->pc = 0x2FBA74u;
label_2fba74:
    // 0x2fba74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fba74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fba78:
    // 0x2fba78: 0xc050e38  jal         func_1438E0
label_2fba7c:
    if (ctx->pc == 0x2FBA7Cu) {
        ctx->pc = 0x2FBA7Cu;
            // 0x2fba7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA80u;
        goto label_2fba80;
    }
    ctx->pc = 0x2FBA78u;
    SET_GPR_U32(ctx, 31, 0x2FBA80u);
    ctx->pc = 0x2FBA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA78u;
            // 0x2fba7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA80u; }
        if (ctx->pc != 0x2FBA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA80u; }
        if (ctx->pc != 0x2FBA80u) { return; }
    }
    ctx->pc = 0x2FBA80u;
label_2fba80:
    // 0x2fba80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fba84:
    // 0x2fba84: 0xc050c10  jal         func_143040
label_2fba88:
    if (ctx->pc == 0x2FBA88u) {
        ctx->pc = 0x2FBA88u;
            // 0x2fba88: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2FBA8Cu;
        goto label_2fba8c;
    }
    ctx->pc = 0x2FBA84u;
    SET_GPR_U32(ctx, 31, 0x2FBA8Cu);
    ctx->pc = 0x2FBA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA84u;
            // 0x2fba88: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143040u;
    if (runtime->hasFunction(0x143040u)) {
        auto targetFn = runtime->lookupFunction(0x143040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA8Cu; }
        if (ctx->pc != 0x2FBA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP9mgCVisualPA4_f_0x143040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA8Cu; }
        if (ctx->pc != 0x2FBA8Cu) { return; }
    }
    ctx->pc = 0x2FBA8Cu;
label_2fba8c:
    // 0x2fba8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fba8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fba90:
    // 0x2fba90: 0xc050e38  jal         func_1438E0
label_2fba94:
    if (ctx->pc == 0x2FBA94u) {
        ctx->pc = 0x2FBA94u;
            // 0x2fba94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA98u;
        goto label_2fba98;
    }
    ctx->pc = 0x2FBA90u;
    SET_GPR_U32(ctx, 31, 0x2FBA98u);
    ctx->pc = 0x2FBA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA90u;
            // 0x2fba94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA98u; }
        if (ctx->pc != 0x2FBA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA98u; }
        if (ctx->pc != 0x2FBA98u) { return; }
    }
    ctx->pc = 0x2FBA98u;
label_2fba98:
    // 0x2fba98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fba98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fba9c:
    // 0x2fba9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fbaa0:
    // 0x2fbaa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fbaa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbaa4:
    // 0x2fbaa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fbaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbaa8:
    // 0x2fbaa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbaa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbaac:
    // 0x2fbaac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbab0:
    // 0x2fbab0: 0x3e00008  jr          $ra
label_2fbab4:
    if (ctx->pc == 0x2FBAB4u) {
        ctx->pc = 0x2FBAB4u;
            // 0x2fbab4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2FBAB8u;
        goto label_fallthrough_0x2fbab0;
    }
    ctx->pc = 0x2FBAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAB0u;
            // 0x2fbab4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fbab0:
    ctx->pc = 0x2FBAB8u;
}
