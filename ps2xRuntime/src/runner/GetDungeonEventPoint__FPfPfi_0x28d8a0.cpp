#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDungeonEventPoint__FPfPfi
// Address: 0x28d8a0 - 0x28db78
void GetDungeonEventPoint__FPfPfi_0x28d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDungeonEventPoint__FPfPfi_0x28d8a0");
#endif

    switch (ctx->pc) {
        case 0x28d8a0u: goto label_28d8a0;
        case 0x28d8a4u: goto label_28d8a4;
        case 0x28d8a8u: goto label_28d8a8;
        case 0x28d8acu: goto label_28d8ac;
        case 0x28d8b0u: goto label_28d8b0;
        case 0x28d8b4u: goto label_28d8b4;
        case 0x28d8b8u: goto label_28d8b8;
        case 0x28d8bcu: goto label_28d8bc;
        case 0x28d8c0u: goto label_28d8c0;
        case 0x28d8c4u: goto label_28d8c4;
        case 0x28d8c8u: goto label_28d8c8;
        case 0x28d8ccu: goto label_28d8cc;
        case 0x28d8d0u: goto label_28d8d0;
        case 0x28d8d4u: goto label_28d8d4;
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d8dcu: goto label_28d8dc;
        case 0x28d8e0u: goto label_28d8e0;
        case 0x28d8e4u: goto label_28d8e4;
        case 0x28d8e8u: goto label_28d8e8;
        case 0x28d8ecu: goto label_28d8ec;
        case 0x28d8f0u: goto label_28d8f0;
        case 0x28d8f4u: goto label_28d8f4;
        case 0x28d8f8u: goto label_28d8f8;
        case 0x28d8fcu: goto label_28d8fc;
        case 0x28d900u: goto label_28d900;
        case 0x28d904u: goto label_28d904;
        case 0x28d908u: goto label_28d908;
        case 0x28d90cu: goto label_28d90c;
        case 0x28d910u: goto label_28d910;
        case 0x28d914u: goto label_28d914;
        case 0x28d918u: goto label_28d918;
        case 0x28d91cu: goto label_28d91c;
        case 0x28d920u: goto label_28d920;
        case 0x28d924u: goto label_28d924;
        case 0x28d928u: goto label_28d928;
        case 0x28d92cu: goto label_28d92c;
        case 0x28d930u: goto label_28d930;
        case 0x28d934u: goto label_28d934;
        case 0x28d938u: goto label_28d938;
        case 0x28d93cu: goto label_28d93c;
        case 0x28d940u: goto label_28d940;
        case 0x28d944u: goto label_28d944;
        case 0x28d948u: goto label_28d948;
        case 0x28d94cu: goto label_28d94c;
        case 0x28d950u: goto label_28d950;
        case 0x28d954u: goto label_28d954;
        case 0x28d958u: goto label_28d958;
        case 0x28d95cu: goto label_28d95c;
        case 0x28d960u: goto label_28d960;
        case 0x28d964u: goto label_28d964;
        case 0x28d968u: goto label_28d968;
        case 0x28d96cu: goto label_28d96c;
        case 0x28d970u: goto label_28d970;
        case 0x28d974u: goto label_28d974;
        case 0x28d978u: goto label_28d978;
        case 0x28d97cu: goto label_28d97c;
        case 0x28d980u: goto label_28d980;
        case 0x28d984u: goto label_28d984;
        case 0x28d988u: goto label_28d988;
        case 0x28d98cu: goto label_28d98c;
        case 0x28d990u: goto label_28d990;
        case 0x28d994u: goto label_28d994;
        case 0x28d998u: goto label_28d998;
        case 0x28d99cu: goto label_28d99c;
        case 0x28d9a0u: goto label_28d9a0;
        case 0x28d9a4u: goto label_28d9a4;
        case 0x28d9a8u: goto label_28d9a8;
        case 0x28d9acu: goto label_28d9ac;
        case 0x28d9b0u: goto label_28d9b0;
        case 0x28d9b4u: goto label_28d9b4;
        case 0x28d9b8u: goto label_28d9b8;
        case 0x28d9bcu: goto label_28d9bc;
        case 0x28d9c0u: goto label_28d9c0;
        case 0x28d9c4u: goto label_28d9c4;
        case 0x28d9c8u: goto label_28d9c8;
        case 0x28d9ccu: goto label_28d9cc;
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9d4u: goto label_28d9d4;
        case 0x28d9d8u: goto label_28d9d8;
        case 0x28d9dcu: goto label_28d9dc;
        case 0x28d9e0u: goto label_28d9e0;
        case 0x28d9e4u: goto label_28d9e4;
        case 0x28d9e8u: goto label_28d9e8;
        case 0x28d9ecu: goto label_28d9ec;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28d9f4u: goto label_28d9f4;
        case 0x28d9f8u: goto label_28d9f8;
        case 0x28d9fcu: goto label_28d9fc;
        case 0x28da00u: goto label_28da00;
        case 0x28da04u: goto label_28da04;
        case 0x28da08u: goto label_28da08;
        case 0x28da0cu: goto label_28da0c;
        case 0x28da10u: goto label_28da10;
        case 0x28da14u: goto label_28da14;
        case 0x28da18u: goto label_28da18;
        case 0x28da1cu: goto label_28da1c;
        case 0x28da20u: goto label_28da20;
        case 0x28da24u: goto label_28da24;
        case 0x28da28u: goto label_28da28;
        case 0x28da2cu: goto label_28da2c;
        case 0x28da30u: goto label_28da30;
        case 0x28da34u: goto label_28da34;
        case 0x28da38u: goto label_28da38;
        case 0x28da3cu: goto label_28da3c;
        case 0x28da40u: goto label_28da40;
        case 0x28da44u: goto label_28da44;
        case 0x28da48u: goto label_28da48;
        case 0x28da4cu: goto label_28da4c;
        case 0x28da50u: goto label_28da50;
        case 0x28da54u: goto label_28da54;
        case 0x28da58u: goto label_28da58;
        case 0x28da5cu: goto label_28da5c;
        case 0x28da60u: goto label_28da60;
        case 0x28da64u: goto label_28da64;
        case 0x28da68u: goto label_28da68;
        case 0x28da6cu: goto label_28da6c;
        case 0x28da70u: goto label_28da70;
        case 0x28da74u: goto label_28da74;
        case 0x28da78u: goto label_28da78;
        case 0x28da7cu: goto label_28da7c;
        case 0x28da80u: goto label_28da80;
        case 0x28da84u: goto label_28da84;
        case 0x28da88u: goto label_28da88;
        case 0x28da8cu: goto label_28da8c;
        case 0x28da90u: goto label_28da90;
        case 0x28da94u: goto label_28da94;
        case 0x28da98u: goto label_28da98;
        case 0x28da9cu: goto label_28da9c;
        case 0x28daa0u: goto label_28daa0;
        case 0x28daa4u: goto label_28daa4;
        case 0x28daa8u: goto label_28daa8;
        case 0x28daacu: goto label_28daac;
        case 0x28dab0u: goto label_28dab0;
        case 0x28dab4u: goto label_28dab4;
        case 0x28dab8u: goto label_28dab8;
        case 0x28dabcu: goto label_28dabc;
        case 0x28dac0u: goto label_28dac0;
        case 0x28dac4u: goto label_28dac4;
        case 0x28dac8u: goto label_28dac8;
        case 0x28daccu: goto label_28dacc;
        case 0x28dad0u: goto label_28dad0;
        case 0x28dad4u: goto label_28dad4;
        case 0x28dad8u: goto label_28dad8;
        case 0x28dadcu: goto label_28dadc;
        case 0x28dae0u: goto label_28dae0;
        case 0x28dae4u: goto label_28dae4;
        case 0x28dae8u: goto label_28dae8;
        case 0x28daecu: goto label_28daec;
        case 0x28daf0u: goto label_28daf0;
        case 0x28daf4u: goto label_28daf4;
        case 0x28daf8u: goto label_28daf8;
        case 0x28dafcu: goto label_28dafc;
        case 0x28db00u: goto label_28db00;
        case 0x28db04u: goto label_28db04;
        case 0x28db08u: goto label_28db08;
        case 0x28db0cu: goto label_28db0c;
        case 0x28db10u: goto label_28db10;
        case 0x28db14u: goto label_28db14;
        case 0x28db18u: goto label_28db18;
        case 0x28db1cu: goto label_28db1c;
        case 0x28db20u: goto label_28db20;
        case 0x28db24u: goto label_28db24;
        case 0x28db28u: goto label_28db28;
        case 0x28db2cu: goto label_28db2c;
        case 0x28db30u: goto label_28db30;
        case 0x28db34u: goto label_28db34;
        case 0x28db38u: goto label_28db38;
        case 0x28db3cu: goto label_28db3c;
        case 0x28db40u: goto label_28db40;
        case 0x28db44u: goto label_28db44;
        case 0x28db48u: goto label_28db48;
        case 0x28db4cu: goto label_28db4c;
        case 0x28db50u: goto label_28db50;
        case 0x28db54u: goto label_28db54;
        case 0x28db58u: goto label_28db58;
        case 0x28db5cu: goto label_28db5c;
        case 0x28db60u: goto label_28db60;
        case 0x28db64u: goto label_28db64;
        case 0x28db68u: goto label_28db68;
        case 0x28db6cu: goto label_28db6c;
        case 0x28db70u: goto label_28db70;
        case 0x28db74u: goto label_28db74;
        default: break;
    }

    ctx->pc = 0x28d8a0u;

label_28d8a0:
    // 0x28d8a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x28d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_28d8a4:
    // 0x28d8a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28d8a8:
    // 0x28d8a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28d8ac:
    // 0x28d8ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28d8b0:
    // 0x28d8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28d8b4:
    // 0x28d8b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28d8b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d8b8:
    // 0x28d8b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28d8bc:
    // 0x28d8bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28d8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d8c0:
    // 0x28d8c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28d8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28d8c4:
    // 0x28d8c4: 0x16200033  bnez        $s1, . + 4 + (0x33 << 2)
label_28d8c8:
    if (ctx->pc == 0x28D8C8u) {
        ctx->pc = 0x28D8C8u;
            // 0x28d8c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x28D8CCu;
        goto label_28d8cc;
    }
    ctx->pc = 0x28D8C4u;
    {
        const bool branch_taken_0x28d8c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8C4u;
            // 0x28d8c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8c4) {
            ctx->pc = 0x28D994u;
            goto label_28d994;
        }
    }
    ctx->pc = 0x28D8CCu;
label_28d8cc:
    // 0x28d8cc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28d8d0:
    // 0x28d8d0: 0xc0a0ed8  jal         func_283B60
label_28d8d4:
    if (ctx->pc == 0x28D8D4u) {
        ctx->pc = 0x28D8D4u;
            // 0x28d8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D8D8u;
        goto label_28d8d8;
    }
    ctx->pc = 0x28D8D0u;
    SET_GPR_U32(ctx, 31, 0x28D8D8u);
    ctx->pc = 0x28D8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8D0u;
            // 0x28d8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8D8u; }
        if (ctx->pc != 0x28D8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8D8u; }
        if (ctx->pc != 0x28D8D8u) { return; }
    }
    ctx->pc = 0x28D8D8u;
label_28d8d8:
    // 0x28d8d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28d8dc:
    if (ctx->pc == 0x28D8DCu) {
        ctx->pc = 0x28D8E0u;
        goto label_28d8e0;
    }
    ctx->pc = 0x28D8D8u;
    {
        const bool branch_taken_0x28d8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d8d8) {
            ctx->pc = 0x28D8E8u;
            goto label_28d8e8;
        }
    }
    ctx->pc = 0x28D8E0u;
label_28d8e0:
    // 0x28d8e0: 0x1000009d  b           . + 4 + (0x9D << 2)
label_28d8e4:
    if (ctx->pc == 0x28D8E4u) {
        ctx->pc = 0x28D8E4u;
            // 0x28d8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D8E8u;
        goto label_28d8e8;
    }
    ctx->pc = 0x28D8E0u;
    {
        const bool branch_taken_0x28d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8E0u;
            // 0x28d8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8e0) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28D8E8u;
label_28d8e8:
    // 0x28d8e8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x28d8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28d8ec:
    // 0x28d8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d8f0:
    // 0x28d8f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28d8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28d8f4:
    // 0x28d8f4: 0x320f809  jalr        $t9
label_28d8f8:
    if (ctx->pc == 0x28D8F8u) {
        ctx->pc = 0x28D8F8u;
            // 0x28d8f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D8FCu;
        goto label_28d8fc;
    }
    ctx->pc = 0x28D8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28D8FCu);
        ctx->pc = 0x28D8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D8F4u;
            // 0x28d8f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28D8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28D8FCu; }
            if (ctx->pc != 0x28D8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x28D8FCu;
label_28d8fc:
    // 0x28d8fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x28d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d900:
    // 0x28d900: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28d904:
    // 0x28d904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d908:
    // 0x28d908: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x28d908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_28d90c:
    // 0x28d90c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28d90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28d910:
    // 0x28d910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28d914:
    // 0x28d914: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x28d914u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_28d918:
    // 0x28d918: 0x0  nop
    ctx->pc = 0x28d918u;
    // NOP
label_28d91c:
    // 0x28d91c: 0x0  nop
    ctx->pc = 0x28d91cu;
    // NOP
label_28d920:
    // 0x28d920: 0xc0a248c  jal         func_289230
label_28d924:
    if (ctx->pc == 0x28D924u) {
        ctx->pc = 0x28D928u;
        goto label_28d928;
    }
    ctx->pc = 0x28D920u;
    SET_GPR_U32(ctx, 31, 0x28D928u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D928u; }
        if (ctx->pc != 0x28D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D928u; }
        if (ctx->pc != 0x28D928u) { return; }
    }
    ctx->pc = 0x28D928u;
label_28d928:
    // 0x28d928: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x28d928u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d92c:
    // 0x28d92c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x28d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_28d930:
    // 0x28d930: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x28d930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28d934:
    // 0x28d934: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x28d934u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_28d938:
    // 0x28d938: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x28d938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_28d93c:
    // 0x28d93c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28d93cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d940:
    // 0x28d940: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28d940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d944:
    // 0x28d944: 0x0  nop
    ctx->pc = 0x28d944u;
    // NOP
label_28d948:
    // 0x28d948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28d948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28d94c:
    // 0x28d94c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x28d94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_28d950:
    // 0x28d950: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x28d950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_28d954:
    // 0x28d954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d958:
    // 0x28d958: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x28d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28d95c:
    // 0x28d95c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28d95cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_28d960:
    // 0x28d960: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x28d960u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_28d964:
    // 0x28d964: 0x0  nop
    ctx->pc = 0x28d964u;
    // NOP
label_28d968:
    // 0x28d968: 0x0  nop
    ctx->pc = 0x28d968u;
    // NOP
label_28d96c:
    // 0x28d96c: 0xc0a248c  jal         func_289230
label_28d970:
    if (ctx->pc == 0x28D970u) {
        ctx->pc = 0x28D974u;
        goto label_28d974;
    }
    ctx->pc = 0x28D96Cu;
    SET_GPR_U32(ctx, 31, 0x28D974u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D974u; }
        if (ctx->pc != 0x28D974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D974u; }
        if (ctx->pc != 0x28D974u) { return; }
    }
    ctx->pc = 0x28D974u;
label_28d974:
    // 0x28d974: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28d974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d978:
    // 0x28d978: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28d97c:
    // 0x28d97c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_28d980:
    // 0x28d980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d984:
    // 0x28d984: 0x0  nop
    ctx->pc = 0x28d984u;
    // NOP
label_28d988:
    // 0x28d988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28d988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28d98c:
    // 0x28d98c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x28d98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_28d990:
    // 0x28d990: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28d990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_28d994:
    // 0x28d994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28d998:
    // 0x28d998: 0x16220025  bne         $s1, $v0, . + 4 + (0x25 << 2)
label_28d99c:
    if (ctx->pc == 0x28D99Cu) {
        ctx->pc = 0x28D99Cu;
            // 0x28d99c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28D9A0u;
        goto label_28d9a0;
    }
    ctx->pc = 0x28D998u;
    {
        const bool branch_taken_0x28d998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D998u;
            // 0x28d99c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d998) {
            ctx->pc = 0x28DA30u;
            goto label_28da30;
        }
    }
    ctx->pc = 0x28D9A0u;
label_28d9a0:
    // 0x28d9a0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28d9a4:
    // 0x28d9a4: 0xc0a0f58  jal         func_283D60
label_28d9a8:
    if (ctx->pc == 0x28D9A8u) {
        ctx->pc = 0x28D9A8u;
            // 0x28d9a8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x28D9ACu;
        goto label_28d9ac;
    }
    ctx->pc = 0x28D9A4u;
    SET_GPR_U32(ctx, 31, 0x28D9ACu);
    ctx->pc = 0x28D9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9A4u;
            // 0x28d9a8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9ACu; }
        if (ctx->pc != 0x28D9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9ACu; }
        if (ctx->pc != 0x28D9ACu) { return; }
    }
    ctx->pc = 0x28D9ACu;
label_28d9ac:
    // 0x28d9ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28d9acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d9b0:
    // 0x28d9b0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_28d9b4:
    if (ctx->pc == 0x28D9B4u) {
        ctx->pc = 0x28D9B4u;
            // 0x28d9b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D9B8u;
        goto label_28d9b8;
    }
    ctx->pc = 0x28D9B0u;
    {
        const bool branch_taken_0x28d9b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9B0u;
            // 0x28d9b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9b0) {
            ctx->pc = 0x28D9C0u;
            goto label_28d9c0;
        }
    }
    ctx->pc = 0x28D9B8u;
label_28d9b8:
    // 0x28d9b8: 0x10000067  b           . + 4 + (0x67 << 2)
label_28d9bc:
    if (ctx->pc == 0x28D9BCu) {
        ctx->pc = 0x28D9BCu;
            // 0x28d9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D9C0u;
        goto label_28d9c0;
    }
    ctx->pc = 0x28D9B8u;
    {
        const bool branch_taken_0x28d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9B8u;
            // 0x28d9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9b8) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28D9C0u;
label_28d9c0:
    // 0x28d9c0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x28d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28d9c4:
    // 0x28d9c4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x28d9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_28d9c8:
    // 0x28d9c8: 0xc0a34d0  jal         func_28D340
label_28d9cc:
    if (ctx->pc == 0x28D9CCu) {
        ctx->pc = 0x28D9CCu;
            // 0x28d9cc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x28D9D0u;
        goto label_28d9d0;
    }
    ctx->pc = 0x28D9C8u;
    SET_GPR_U32(ctx, 31, 0x28D9D0u);
    ctx->pc = 0x28D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9C8u;
            // 0x28d9cc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D340u;
    if (runtime->hasFunction(0x28D340u)) {
        auto targetFn = runtime->lookupFunction(0x28D340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9D0u; }
        if (ctx->pc != 0x28D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapEventParts__FiPP9CMapPartsPfi_0x28d340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9D0u; }
        if (ctx->pc != 0x28D9D0u) { return; }
    }
    ctx->pc = 0x28D9D0u;
label_28d9d0:
    // 0x28d9d0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_28d9d4:
    if (ctx->pc == 0x28D9D4u) {
        ctx->pc = 0x28D9D4u;
            // 0x28d9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D9D8u;
        goto label_28d9d8;
    }
    ctx->pc = 0x28D9D0u;
    {
        const bool branch_taken_0x28d9d0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28D9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9D0u;
            // 0x28d9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9d0) {
            ctx->pc = 0x28D9E0u;
            goto label_28d9e0;
        }
    }
    ctx->pc = 0x28D9D8u;
label_28d9d8:
    // 0x28d9d8: 0x10000060  b           . + 4 + (0x60 << 2)
label_28d9dc:
    if (ctx->pc == 0x28D9DCu) {
        ctx->pc = 0x28D9DCu;
            // 0x28d9dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x28D9E0u;
        goto label_28d9e0;
    }
    ctx->pc = 0x28D9D8u;
    {
        const bool branch_taken_0x28d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9D8u;
            // 0x28d9dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9d8) {
            ctx->pc = 0x28DB5Cu;
            goto label_28db5c;
        }
    }
    ctx->pc = 0x28D9E0u;
label_28d9e0:
    // 0x28d9e0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_28d9e4:
    // 0x28d9e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28d9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28d9e8:
    // 0x28d9e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28d9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28d9ec:
    // 0x28d9ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28d9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28d9f0:
    // 0x28d9f0: 0x320f809  jalr        $t9
label_28d9f4:
    if (ctx->pc == 0x28D9F4u) {
        ctx->pc = 0x28D9F4u;
            // 0x28d9f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D9F8u;
        goto label_28d9f8;
    }
    ctx->pc = 0x28D9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28D9F8u);
        ctx->pc = 0x28D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D9F0u;
            // 0x28d9f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28D9F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28D9F8u; }
            if (ctx->pc != 0x28D9F8u) { return; }
        }
        }
    }
    ctx->pc = 0x28D9F8u;
label_28d9f8:
    // 0x28d9f8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x28d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d9fc:
    // 0x28d9fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28da00:
    // 0x28da00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28da00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28da04:
    // 0x28da04: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28da04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_28da08:
    // 0x28da08: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28da0c:
    // 0x28da0c: 0xc057544  jal         func_15D510
label_28da10:
    if (ctx->pc == 0x28DA10u) {
        ctx->pc = 0x28DA10u;
            // 0x28da10: 0x24542e90  addiu       $s4, $v0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
        ctx->pc = 0x28DA14u;
        goto label_28da14;
    }
    ctx->pc = 0x28DA0Cu;
    SET_GPR_U32(ctx, 31, 0x28DA14u);
    ctx->pc = 0x28DA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA0Cu;
            // 0x28da10: 0x24542e90  addiu       $s4, $v0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D510u;
    if (runtime->hasFunction(0x15D510u)) {
        auto targetFn = runtime->lookupFunction(0x15D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA14u; }
        if (ctx->pc != 0x28DA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertParts__4CMapFP9CMapParts_0x15d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA14u; }
        if (ctx->pc != 0x28DA14u) { return; }
    }
    ctx->pc = 0x28DA14u;
label_28da14:
    // 0x28da14: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x28da14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_28da18:
    // 0x28da18: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x28da18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_28da1c:
    // 0x28da1c: 0xac30e61c  sw          $s0, -0x19E4($at)
    ctx->pc = 0x28da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960668), GPR_U32(ctx, 16));
label_28da20:
    // 0x28da20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28da24:
    // 0x28da24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x28da24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_28da28:
    // 0x28da28: 0xac22e620  sw          $v0, -0x19E0($at)
    ctx->pc = 0x28da28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960672), GPR_U32(ctx, 2));
label_28da2c:
    // 0x28da2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28da30:
    // 0x28da30: 0x16220025  bne         $s1, $v0, . + 4 + (0x25 << 2)
label_28da34:
    if (ctx->pc == 0x28DA34u) {
        ctx->pc = 0x28DA34u;
            // 0x28da34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28DA38u;
        goto label_28da38;
    }
    ctx->pc = 0x28DA30u;
    {
        const bool branch_taken_0x28da30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA30u;
            // 0x28da34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da30) {
            ctx->pc = 0x28DAC8u;
            goto label_28dac8;
        }
    }
    ctx->pc = 0x28DA38u;
label_28da38:
    // 0x28da38: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28da3c:
    // 0x28da3c: 0xc0a0f58  jal         func_283D60
label_28da40:
    if (ctx->pc == 0x28DA40u) {
        ctx->pc = 0x28DA40u;
            // 0x28da40: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x28DA44u;
        goto label_28da44;
    }
    ctx->pc = 0x28DA3Cu;
    SET_GPR_U32(ctx, 31, 0x28DA44u);
    ctx->pc = 0x28DA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA3Cu;
            // 0x28da40: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA44u; }
        if (ctx->pc != 0x28DA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA44u; }
        if (ctx->pc != 0x28DA44u) { return; }
    }
    ctx->pc = 0x28DA44u;
label_28da44:
    // 0x28da44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28da44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da48:
    // 0x28da48: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_28da4c:
    if (ctx->pc == 0x28DA4Cu) {
        ctx->pc = 0x28DA4Cu;
            // 0x28da4c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x28DA50u;
        goto label_28da50;
    }
    ctx->pc = 0x28DA48u;
    {
        const bool branch_taken_0x28da48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA48u;
            // 0x28da4c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da48) {
            ctx->pc = 0x28DA58u;
            goto label_28da58;
        }
    }
    ctx->pc = 0x28DA50u;
label_28da50:
    // 0x28da50: 0x10000041  b           . + 4 + (0x41 << 2)
label_28da54:
    if (ctx->pc == 0x28DA54u) {
        ctx->pc = 0x28DA54u;
            // 0x28da54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DA58u;
        goto label_28da58;
    }
    ctx->pc = 0x28DA50u;
    {
        const bool branch_taken_0x28da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA50u;
            // 0x28da54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da50) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DA58u;
label_28da58:
    // 0x28da58: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x28da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_28da5c:
    // 0x28da5c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x28da5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28da60:
    // 0x28da60: 0xc0a34d0  jal         func_28D340
label_28da64:
    if (ctx->pc == 0x28DA64u) {
        ctx->pc = 0x28DA64u;
            // 0x28da64: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x28DA68u;
        goto label_28da68;
    }
    ctx->pc = 0x28DA60u;
    SET_GPR_U32(ctx, 31, 0x28DA68u);
    ctx->pc = 0x28DA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA60u;
            // 0x28da64: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D340u;
    if (runtime->hasFunction(0x28D340u)) {
        auto targetFn = runtime->lookupFunction(0x28D340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA68u; }
        if (ctx->pc != 0x28DA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapEventParts__FiPP9CMapPartsPfi_0x28d340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA68u; }
        if (ctx->pc != 0x28DA68u) { return; }
    }
    ctx->pc = 0x28DA68u;
label_28da68:
    // 0x28da68: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_28da6c:
    if (ctx->pc == 0x28DA6Cu) {
        ctx->pc = 0x28DA6Cu;
            // 0x28da6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DA70u;
        goto label_28da70;
    }
    ctx->pc = 0x28DA68u;
    {
        const bool branch_taken_0x28da68 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA68u;
            // 0x28da6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da68) {
            ctx->pc = 0x28DA78u;
            goto label_28da78;
        }
    }
    ctx->pc = 0x28DA70u;
label_28da70:
    // 0x28da70: 0x10000039  b           . + 4 + (0x39 << 2)
label_28da74:
    if (ctx->pc == 0x28DA74u) {
        ctx->pc = 0x28DA78u;
        goto label_28da78;
    }
    ctx->pc = 0x28DA70u;
    {
        const bool branch_taken_0x28da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da70) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DA78u;
label_28da78:
    // 0x28da78: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28da7c:
    // 0x28da7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28da7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28da80:
    // 0x28da80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28da80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28da84:
    // 0x28da84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28da84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28da88:
    // 0x28da88: 0x320f809  jalr        $t9
label_28da8c:
    if (ctx->pc == 0x28DA8Cu) {
        ctx->pc = 0x28DA8Cu;
            // 0x28da8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DA90u;
        goto label_28da90;
    }
    ctx->pc = 0x28DA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28DA90u);
        ctx->pc = 0x28DA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DA88u;
            // 0x28da8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28DA90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28DA90u; }
            if (ctx->pc != 0x28DA90u) { return; }
        }
        }
    }
    ctx->pc = 0x28DA90u;
label_28da90:
    // 0x28da90: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x28da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28da94:
    // 0x28da94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28da98:
    // 0x28da98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28da98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28da9c:
    // 0x28da9c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_28daa0:
    // 0x28daa0: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28daa4:
    // 0x28daa4: 0xc057544  jal         func_15D510
label_28daa8:
    if (ctx->pc == 0x28DAA8u) {
        ctx->pc = 0x28DAA8u;
            // 0x28daa8: 0x24542e90  addiu       $s4, $v0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
        ctx->pc = 0x28DAACu;
        goto label_28daac;
    }
    ctx->pc = 0x28DAA4u;
    SET_GPR_U32(ctx, 31, 0x28DAACu);
    ctx->pc = 0x28DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAA4u;
            // 0x28daa8: 0x24542e90  addiu       $s4, $v0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D510u;
    if (runtime->hasFunction(0x15D510u)) {
        auto targetFn = runtime->lookupFunction(0x15D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAACu; }
        if (ctx->pc != 0x28DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertParts__4CMapFP9CMapParts_0x15d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAACu; }
        if (ctx->pc != 0x28DAACu) { return; }
    }
    ctx->pc = 0x28DAACu;
label_28daac:
    // 0x28daac: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x28daacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_28dab0:
    // 0x28dab0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x28dab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_28dab4:
    // 0x28dab4: 0xac30e61c  sw          $s0, -0x19E4($at)
    ctx->pc = 0x28dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960668), GPR_U32(ctx, 16));
label_28dab8:
    // 0x28dab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dabc:
    // 0x28dabc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x28dabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_28dac0:
    // 0x28dac0: 0xac22e620  sw          $v0, -0x19E0($at)
    ctx->pc = 0x28dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960672), GPR_U32(ctx, 2));
label_28dac4:
    // 0x28dac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dac8:
    // 0x28dac8: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
label_28dacc:
    if (ctx->pc == 0x28DACCu) {
        ctx->pc = 0x28DACCu;
            // 0x28dacc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28DAD0u;
        goto label_28dad0;
    }
    ctx->pc = 0x28DAC8u;
    {
        const bool branch_taken_0x28dac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28DACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAC8u;
            // 0x28dacc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac8) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DAD0u;
label_28dad0:
    // 0x28dad0: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28dad4:
    // 0x28dad4: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_28dad8:
    // 0x28dad8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28dadc:
    if (ctx->pc == 0x28DADCu) {
        ctx->pc = 0x28DAE0u;
        goto label_28dae0;
    }
    ctx->pc = 0x28DAD8u;
    {
        const bool branch_taken_0x28dad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dad8) {
            ctx->pc = 0x28DAE8u;
            goto label_28dae8;
        }
    }
    ctx->pc = 0x28DAE0u;
label_28dae0:
    // 0x28dae0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_28dae4:
    if (ctx->pc == 0x28DAE4u) {
        ctx->pc = 0x28DAE4u;
            // 0x28dae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DAE8u;
        goto label_28dae8;
    }
    ctx->pc = 0x28DAE0u;
    {
        const bool branch_taken_0x28dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAE0u;
            // 0x28dae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dae0) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DAE8u;
label_28dae8:
    // 0x28dae8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_28daec:
    // 0x28daec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_28daf0:
    if (ctx->pc == 0x28DAF0u) {
        ctx->pc = 0x28DAF0u;
            // 0x28daf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DAF4u;
        goto label_28daf4;
    }
    ctx->pc = 0x28DAECu;
    {
        const bool branch_taken_0x28daec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DAECu;
            // 0x28daf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daec) {
            ctx->pc = 0x28DAFCu;
            goto label_28dafc;
        }
    }
    ctx->pc = 0x28DAF4u;
label_28daf4:
    // 0x28daf4: 0x10000018  b           . + 4 + (0x18 << 2)
label_28daf8:
    if (ctx->pc == 0x28DAF8u) {
        ctx->pc = 0x28DAFCu;
        goto label_28dafc;
    }
    ctx->pc = 0x28DAF4u;
    {
        const bool branch_taken_0x28daf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28daf4) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DAFCu;
label_28dafc:
    // 0x28dafc: 0x8c640a9c  lw          $a0, 0xA9C($v1)
    ctx->pc = 0x28dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
label_28db00:
    // 0x28db00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x28db00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_28db04:
    // 0x28db04: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x28db04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28db08:
    // 0x28db08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28db0c:
    // 0x28db0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28db10:
    // 0x28db10: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28db14:
    // 0x28db14: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28db18:
    if (ctx->pc == 0x28DB18u) {
        ctx->pc = 0x28DB18u;
            // 0x28db18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DB1Cu;
        goto label_28db1c;
    }
    ctx->pc = 0x28DB14u;
    {
        const bool branch_taken_0x28db14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB14u;
            // 0x28db18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db14) {
            ctx->pc = 0x28DB24u;
            goto label_28db24;
        }
    }
    ctx->pc = 0x28DB1Cu;
label_28db1c:
    // 0x28db1c: 0x1000000e  b           . + 4 + (0xE << 2)
label_28db20:
    if (ctx->pc == 0x28DB20u) {
        ctx->pc = 0x28DB24u;
        goto label_28db24;
    }
    ctx->pc = 0x28DB1Cu;
    {
        const bool branch_taken_0x28db1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db1c) {
            ctx->pc = 0x28DB58u;
            goto label_28db58;
        }
    }
    ctx->pc = 0x28DB24u;
label_28db24:
    // 0x28db24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28db24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28db28:
    // 0x28db28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28db2c:
    // 0x28db2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28db2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28db30:
    // 0x28db30: 0x320f809  jalr        $t9
label_28db34:
    if (ctx->pc == 0x28DB34u) {
        ctx->pc = 0x28DB34u;
            // 0x28db34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DB38u;
        goto label_28db38;
    }
    ctx->pc = 0x28DB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28DB38u);
        ctx->pc = 0x28DB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB30u;
            // 0x28db34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28DB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28DB38u; }
            if (ctx->pc != 0x28DB38u) { return; }
        }
        }
    }
    ctx->pc = 0x28DB38u;
label_28db38:
    // 0x28db38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28db38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28db3c:
    // 0x28db3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28db40:
    // 0x28db40: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28db40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_28db44:
    // 0x28db44: 0x320f809  jalr        $t9
label_28db48:
    if (ctx->pc == 0x28DB48u) {
        ctx->pc = 0x28DB48u;
            // 0x28db48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28DB4Cu;
        goto label_28db4c;
    }
    ctx->pc = 0x28DB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28DB4Cu);
        ctx->pc = 0x28DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB44u;
            // 0x28db48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28DB4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28DB4Cu; }
            if (ctx->pc != 0x28DB4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28DB4Cu;
label_28db4c:
    // 0x28db4c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x28db4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28db50:
    // 0x28db50: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28db50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_28db54:
    // 0x28db54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28db58:
    // 0x28db58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28db58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28db5c:
    // 0x28db5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28db5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28db60:
    // 0x28db60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28db60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28db64:
    // 0x28db64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28db64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28db68:
    // 0x28db68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28db68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28db6c:
    // 0x28db6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28db6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28db70:
    // 0x28db70: 0x3e00008  jr          $ra
label_28db74:
    if (ctx->pc == 0x28DB74u) {
        ctx->pc = 0x28DB74u;
            // 0x28db74: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x28DB78u;
        goto label_fallthrough_0x28db70;
    }
    ctx->pc = 0x28DB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DB70u;
            // 0x28db74: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28db70:
    ctx->pc = 0x28DB78u;
}
