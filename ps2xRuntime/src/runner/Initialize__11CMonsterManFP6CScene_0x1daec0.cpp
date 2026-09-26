#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CMonsterManFP6CScene
// Address: 0x1daec0 - 0x1db12c
void Initialize__11CMonsterManFP6CScene_0x1daec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CMonsterManFP6CScene_0x1daec0");
#endif

    switch (ctx->pc) {
        case 0x1daec0u: goto label_1daec0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daec8u: goto label_1daec8;
        case 0x1daeccu: goto label_1daecc;
        case 0x1daed0u: goto label_1daed0;
        case 0x1daed4u: goto label_1daed4;
        case 0x1daed8u: goto label_1daed8;
        case 0x1daedcu: goto label_1daedc;
        case 0x1daee0u: goto label_1daee0;
        case 0x1daee4u: goto label_1daee4;
        case 0x1daee8u: goto label_1daee8;
        case 0x1daeecu: goto label_1daeec;
        case 0x1daef0u: goto label_1daef0;
        case 0x1daef4u: goto label_1daef4;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daefcu: goto label_1daefc;
        case 0x1daf00u: goto label_1daf00;
        case 0x1daf04u: goto label_1daf04;
        case 0x1daf08u: goto label_1daf08;
        case 0x1daf0cu: goto label_1daf0c;
        case 0x1daf10u: goto label_1daf10;
        case 0x1daf14u: goto label_1daf14;
        case 0x1daf18u: goto label_1daf18;
        case 0x1daf1cu: goto label_1daf1c;
        case 0x1daf20u: goto label_1daf20;
        case 0x1daf24u: goto label_1daf24;
        case 0x1daf28u: goto label_1daf28;
        case 0x1daf2cu: goto label_1daf2c;
        case 0x1daf30u: goto label_1daf30;
        case 0x1daf34u: goto label_1daf34;
        case 0x1daf38u: goto label_1daf38;
        case 0x1daf3cu: goto label_1daf3c;
        case 0x1daf40u: goto label_1daf40;
        case 0x1daf44u: goto label_1daf44;
        case 0x1daf48u: goto label_1daf48;
        case 0x1daf4cu: goto label_1daf4c;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf54u: goto label_1daf54;
        case 0x1daf58u: goto label_1daf58;
        case 0x1daf5cu: goto label_1daf5c;
        case 0x1daf60u: goto label_1daf60;
        case 0x1daf64u: goto label_1daf64;
        case 0x1daf68u: goto label_1daf68;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf70u: goto label_1daf70;
        case 0x1daf74u: goto label_1daf74;
        case 0x1daf78u: goto label_1daf78;
        case 0x1daf7cu: goto label_1daf7c;
        case 0x1daf80u: goto label_1daf80;
        case 0x1daf84u: goto label_1daf84;
        case 0x1daf88u: goto label_1daf88;
        case 0x1daf8cu: goto label_1daf8c;
        case 0x1daf90u: goto label_1daf90;
        case 0x1daf94u: goto label_1daf94;
        case 0x1daf98u: goto label_1daf98;
        case 0x1daf9cu: goto label_1daf9c;
        case 0x1dafa0u: goto label_1dafa0;
        case 0x1dafa4u: goto label_1dafa4;
        case 0x1dafa8u: goto label_1dafa8;
        case 0x1dafacu: goto label_1dafac;
        case 0x1dafb0u: goto label_1dafb0;
        case 0x1dafb4u: goto label_1dafb4;
        case 0x1dafb8u: goto label_1dafb8;
        case 0x1dafbcu: goto label_1dafbc;
        case 0x1dafc0u: goto label_1dafc0;
        case 0x1dafc4u: goto label_1dafc4;
        case 0x1dafc8u: goto label_1dafc8;
        case 0x1dafccu: goto label_1dafcc;
        case 0x1dafd0u: goto label_1dafd0;
        case 0x1dafd4u: goto label_1dafd4;
        case 0x1dafd8u: goto label_1dafd8;
        case 0x1dafdcu: goto label_1dafdc;
        case 0x1dafe0u: goto label_1dafe0;
        case 0x1dafe4u: goto label_1dafe4;
        case 0x1dafe8u: goto label_1dafe8;
        case 0x1dafecu: goto label_1dafec;
        case 0x1daff0u: goto label_1daff0;
        case 0x1daff4u: goto label_1daff4;
        case 0x1daff8u: goto label_1daff8;
        case 0x1daffcu: goto label_1daffc;
        case 0x1db000u: goto label_1db000;
        case 0x1db004u: goto label_1db004;
        case 0x1db008u: goto label_1db008;
        case 0x1db00cu: goto label_1db00c;
        case 0x1db010u: goto label_1db010;
        case 0x1db014u: goto label_1db014;
        case 0x1db018u: goto label_1db018;
        case 0x1db01cu: goto label_1db01c;
        case 0x1db020u: goto label_1db020;
        case 0x1db024u: goto label_1db024;
        case 0x1db028u: goto label_1db028;
        case 0x1db02cu: goto label_1db02c;
        case 0x1db030u: goto label_1db030;
        case 0x1db034u: goto label_1db034;
        case 0x1db038u: goto label_1db038;
        case 0x1db03cu: goto label_1db03c;
        case 0x1db040u: goto label_1db040;
        case 0x1db044u: goto label_1db044;
        case 0x1db048u: goto label_1db048;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db050u: goto label_1db050;
        case 0x1db054u: goto label_1db054;
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0b4u: goto label_1db0b4;
        case 0x1db0b8u: goto label_1db0b8;
        case 0x1db0bcu: goto label_1db0bc;
        case 0x1db0c0u: goto label_1db0c0;
        case 0x1db0c4u: goto label_1db0c4;
        case 0x1db0c8u: goto label_1db0c8;
        case 0x1db0ccu: goto label_1db0cc;
        case 0x1db0d0u: goto label_1db0d0;
        case 0x1db0d4u: goto label_1db0d4;
        case 0x1db0d8u: goto label_1db0d8;
        case 0x1db0dcu: goto label_1db0dc;
        case 0x1db0e0u: goto label_1db0e0;
        case 0x1db0e4u: goto label_1db0e4;
        case 0x1db0e8u: goto label_1db0e8;
        case 0x1db0ecu: goto label_1db0ec;
        case 0x1db0f0u: goto label_1db0f0;
        case 0x1db0f4u: goto label_1db0f4;
        case 0x1db0f8u: goto label_1db0f8;
        case 0x1db0fcu: goto label_1db0fc;
        case 0x1db100u: goto label_1db100;
        case 0x1db104u: goto label_1db104;
        case 0x1db108u: goto label_1db108;
        case 0x1db10cu: goto label_1db10c;
        case 0x1db110u: goto label_1db110;
        case 0x1db114u: goto label_1db114;
        case 0x1db118u: goto label_1db118;
        case 0x1db11cu: goto label_1db11c;
        case 0x1db120u: goto label_1db120;
        case 0x1db124u: goto label_1db124;
        case 0x1db128u: goto label_1db128;
        default: break;
    }

    ctx->pc = 0x1daec0u;

label_1daec0:
    // 0x1daec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1daec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1daec4:
    // 0x1daec4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1daec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1daec8:
    // 0x1daec8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1daec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1daecc:
    // 0x1daecc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1daeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1daed0:
    // 0x1daed0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1daed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1daed4:
    // 0x1daed4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1daed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1daed8:
    // 0x1daed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1daed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1daedc:
    // 0x1daedc: 0x26b32f90  addiu       $s3, $s5, 0x2F90
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 12176));
label_1daee0:
    // 0x1daee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1daee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1daee4:
    // 0x1daee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1daee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1daee8:
    // 0x1daee8: 0xc079f10  jal         func_1E7C40
label_1daeec:
    if (ctx->pc == 0x1DAEECu) {
        ctx->pc = 0x1DAEECu;
            // 0x1daeec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEF0u;
        goto label_1daef0;
    }
    ctx->pc = 0x1DAEE8u;
    SET_GPR_U32(ctx, 31, 0x1DAEF0u);
    ctx->pc = 0x1DAEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEE8u;
            // 0x1daeec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7C40u;
    if (runtime->hasFunction(0x1E7C40u)) {
        auto targetFn = runtime->lookupFunction(0x1E7C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEF0u; }
        if (ctx->pc != 0x1DAEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonsterExtendTable__Fv_0x1e7c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEF0u; }
        if (ctx->pc != 0x1DAEF0u) { return; }
    }
    ctx->pc = 0x1DAEF0u;
label_1daef0:
    // 0x1daef0: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1daef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
label_1daef4:
    // 0x1daef4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1daef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1daef8:
    // 0x1daef8: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x1daef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1daefc:
    // 0x1daefc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1daefcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1daf00:
    // 0x1daf00: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_1daf04:
    // 0x1daf04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1daf08:
    // 0x1daf08: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x1daf08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
label_1daf0c:
    // 0x1daf0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1daf0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daf10:
    // 0x1daf10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1daf10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daf14:
    // 0x1daf14: 0xac23fff0  sw          $v1, -0x10($at)
    ctx->pc = 0x1daf14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967280), GPR_U32(ctx, 3));
label_1daf18:
    // 0x1daf18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1daf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1daf1c:
    // 0x1daf1c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1daf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1daf20:
    // 0x1daf20: 0xa4220080  sh          $v0, 0x80($at)
    ctx->pc = 0x1daf20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 128), (uint16_t)GPR_U32(ctx, 2));
label_1daf24:
    // 0x1daf24: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x1daf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1daf28:
    // 0x1daf28: 0xc0a0ed8  jal         func_283B60
label_1daf2c:
    if (ctx->pc == 0x1DAF2Cu) {
        ctx->pc = 0x1DAF2Cu;
            // 0x1daf2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF30u;
        goto label_1daf30;
    }
    ctx->pc = 0x1DAF28u;
    SET_GPR_U32(ctx, 31, 0x1DAF30u);
    ctx->pc = 0x1DAF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF28u;
            // 0x1daf2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF30u; }
        if (ctx->pc != 0x1DAF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF30u; }
        if (ctx->pc != 0x1DAF30u) { return; }
    }
    ctx->pc = 0x1DAF30u;
label_1daf30:
    // 0x1daf30: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x1daf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1daf34:
    // 0x1daf34: 0xac620484  sw          $v0, 0x484($v1)
    ctx->pc = 0x1daf34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1156), GPR_U32(ctx, 2));
label_1daf38:
    // 0x1daf38: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1daf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1daf3c:
    // 0x1daf3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1daf40:
    // 0x1daf40: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1daf44:
    // 0x1daf44: 0x320f809  jalr        $t9
label_1daf48:
    if (ctx->pc == 0x1DAF48u) {
        ctx->pc = 0x1DAF4Cu;
        goto label_1daf4c;
    }
    ctx->pc = 0x1DAF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DAF4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF4Cu; }
            if (ctx->pc != 0x1DAF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DAF4Cu;
label_1daf4c:
    // 0x1daf4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1daf4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1daf50:
    // 0x1daf50: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x1daf50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
label_1daf54:
    // 0x1daf54: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1daf58:
    if (ctx->pc == 0x1DAF58u) {
        ctx->pc = 0x1DAF58u;
            // 0x1daf58: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x1DAF5Cu;
        goto label_1daf5c;
    }
    ctx->pc = 0x1DAF54u;
    {
        const bool branch_taken_0x1daf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF54u;
            // 0x1daf58: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf54) {
            ctx->pc = 0x1DAF24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1daf24;
        }
    }
    ctx->pc = 0x1DAF5Cu;
label_1daf5c:
    // 0x1daf5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1daf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daf60:
    // 0x1daf60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1daf60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daf64:
    // 0x1daf64: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1daf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1daf68:
    // 0x1daf68: 0xc04b950  jal         func_12E540
label_1daf6c:
    if (ctx->pc == 0x1DAF6Cu) {
        ctx->pc = 0x1DAF6Cu;
            // 0x1daf6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF70u;
        goto label_1daf70;
    }
    ctx->pc = 0x1DAF68u;
    SET_GPR_U32(ctx, 31, 0x1DAF70u);
    ctx->pc = 0x1DAF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF68u;
            // 0x1daf6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF70u; }
        if (ctx->pc != 0x1DAF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF70u; }
        if (ctx->pc != 0x1DAF70u) { return; }
    }
    ctx->pc = 0x1DAF70u;
label_1daf70:
    // 0x1daf70: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1daf74:
    // 0x1daf74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1daf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1daf78:
    // 0x1daf78: 0xac4304f0  sw          $v1, 0x4F0($v0)
    ctx->pc = 0x1daf78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1264), GPR_U32(ctx, 3));
label_1daf7c:
    // 0x1daf7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1daf7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1daf80:
    // 0x1daf80: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x1daf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
label_1daf84:
    // 0x1daf84: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1daf88:
    if (ctx->pc == 0x1DAF88u) {
        ctx->pc = 0x1DAF88u;
            // 0x1daf88: 0x269414c0  addiu       $s4, $s4, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 5312));
        ctx->pc = 0x1DAF8Cu;
        goto label_1daf8c;
    }
    ctx->pc = 0x1DAF84u;
    {
        const bool branch_taken_0x1daf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF84u;
            // 0x1daf88: 0x269414c0  addiu       $s4, $s4, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 5312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf84) {
            ctx->pc = 0x1DAF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1daf64;
        }
    }
    ctx->pc = 0x1DAF8Cu;
label_1daf8c:
    // 0x1daf8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1daf8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daf90:
    // 0x1daf90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1daf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daf94:
    // 0x1daf94: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x1daf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1daf98:
    // 0x1daf98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1daf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1daf9c:
    // 0x1daf9c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1daf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dafa0:
    // 0x1dafa0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1dafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1dafa4:
    // 0x1dafa4: 0xac20fdf0  sw          $zero, -0x210($at)
    ctx->pc = 0x1dafa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966768), GPR_U32(ctx, 0));
label_1dafa8:
    // 0x1dafa8: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1dafa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dafac:
    // 0x1dafac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dafacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dafb0:
    // 0x1dafb0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dafb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1dafb4:
    // 0x1dafb4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1dafb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dafb8:
    // 0x1dafb8: 0xac20fdf4  sw          $zero, -0x20C($at)
    ctx->pc = 0x1dafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966772), GPR_U32(ctx, 0));
label_1dafbc:
    // 0x1dafbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dafc0:
    // 0x1dafc0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1dafc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dafc4:
    // 0x1dafc4: 0xac20fdf8  sw          $zero, -0x208($at)
    ctx->pc = 0x1dafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966776), GPR_U32(ctx, 0));
label_1dafc8:
    // 0x1dafc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dafc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dafcc:
    // 0x1dafcc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1dafccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dafd0:
    // 0x1dafd0: 0xac20fdfc  sw          $zero, -0x204($at)
    ctx->pc = 0x1dafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966780), GPR_U32(ctx, 0));
label_1dafd4:
    // 0x1dafd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dafd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dafd8:
    // 0x1dafd8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1dafd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dafdc:
    // 0x1dafdc: 0xac20fe00  sw          $zero, -0x200($at)
    ctx->pc = 0x1dafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966784), GPR_U32(ctx, 0));
label_1dafe0:
    // 0x1dafe0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dafe4:
    // 0x1dafe4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dafe8:
    // 0x1dafe8: 0xac20fe04  sw          $zero, -0x1FC($at)
    ctx->pc = 0x1dafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966788), GPR_U32(ctx, 0));
label_1dafec:
    // 0x1dafec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dafecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1daff0:
    // 0x1daff0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1daff4:
    // 0x1daff4: 0xac20fe08  sw          $zero, -0x1F8($at)
    ctx->pc = 0x1daff4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966792), GPR_U32(ctx, 0));
label_1daff8:
    // 0x1daff8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1daffc:
    // 0x1daffc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1daffcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1db000:
    // 0x1db000: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_1db004:
    if (ctx->pc == 0x1DB004u) {
        ctx->pc = 0x1DB004u;
            // 0x1db004: 0xac20fe0c  sw          $zero, -0x1F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966796), GPR_U32(ctx, 0));
        ctx->pc = 0x1DB008u;
        goto label_1db008;
    }
    ctx->pc = 0x1DB000u;
    {
        const bool branch_taken_0x1db000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB000u;
            // 0x1db004: 0xac20fe0c  sw          $zero, -0x1F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db000) {
            ctx->pc = 0x1DAF94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1daf94;
        }
    }
    ctx->pc = 0x1DB008u;
label_1db008:
    // 0x1db008: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1db008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1db00c:
    // 0x1db00c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1db00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1db010:
    // 0x1db010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db014:
    // 0x1db014: 0xc0b8054  jal         func_2E0150
label_1db018:
    if (ctx->pc == 0x1DB018u) {
        ctx->pc = 0x1DB018u;
            // 0x1db018: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DB01Cu;
        goto label_1db01c;
    }
    ctx->pc = 0x1DB014u;
    SET_GPR_U32(ctx, 31, 0x1DB01Cu);
    ctx->pc = 0x1DB018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB014u;
            // 0x1db018: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0150u;
    if (runtime->hasFunction(0x2E0150u)) {
        auto targetFn = runtime->lookupFunction(0x2E0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB01Cu; }
        if (ctx->pc != 0x1DB01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB01Cu; }
        if (ctx->pc != 0x1DB01Cu) { return; }
    }
    ctx->pc = 0x1DB01Cu;
label_1db01c:
    // 0x1db01c: 0x8e7200a0  lw          $s2, 0xA0($s3)
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_1db020:
    // 0x1db020: 0x2a4100aa  slti        $at, $s2, 0xAA
    ctx->pc = 0x1db020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)170) ? 1 : 0);
label_1db024:
    // 0x1db024: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1db028:
    if (ctx->pc == 0x1DB028u) {
        ctx->pc = 0x1DB02Cu;
        goto label_1db02c;
    }
    ctx->pc = 0x1DB024u;
    {
        const bool branch_taken_0x1db024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db024) {
            ctx->pc = 0x1DB04Cu;
            goto label_1db04c;
        }
    }
    ctx->pc = 0x1DB02Cu;
label_1db02c:
    // 0x1db02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db030:
    // 0x1db030: 0xc04b950  jal         func_12E540
label_1db034:
    if (ctx->pc == 0x1DB034u) {
        ctx->pc = 0x1DB034u;
            // 0x1db034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB038u;
        goto label_1db038;
    }
    ctx->pc = 0x1DB030u;
    SET_GPR_U32(ctx, 31, 0x1DB038u);
    ctx->pc = 0x1DB034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB030u;
            // 0x1db034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB038u; }
        if (ctx->pc != 0x1DB038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB038u; }
        if (ctx->pc != 0x1DB038u) { return; }
    }
    ctx->pc = 0x1DB038u;
label_1db038:
    // 0x1db038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1db03c:
    // 0x1db03c: 0x2a4200aa  slti        $v0, $s2, 0xAA
    ctx->pc = 0x1db03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)170) ? 1 : 0);
label_1db040:
    // 0x1db040: 0x0  nop
    ctx->pc = 0x1db040u;
    // NOP
label_1db044:
    // 0x1db044: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1db048:
    if (ctx->pc == 0x1DB048u) {
        ctx->pc = 0x1DB04Cu;
        goto label_1db04c;
    }
    ctx->pc = 0x1DB044u;
    {
        const bool branch_taken_0x1db044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db044) {
            ctx->pc = 0x1DB02Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db02c;
        }
    }
    ctx->pc = 0x1DB04Cu;
label_1db04c:
    // 0x1db04c: 0x0  nop
    ctx->pc = 0x1db04cu;
    // NOP
label_1db050:
    // 0x1db050: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db054:
    // 0x1db054: 0x34210090  ori         $at, $at, 0x90
    ctx->pc = 0x1db054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)144);
label_1db058:
    // 0x1db058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db05c:
    // 0x1db05c: 0xc072a58  jal         func_1CA960
label_1db060:
    if (ctx->pc == 0x1DB060u) {
        ctx->pc = 0x1DB060u;
            // 0x1db060: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->pc = 0x1DB064u;
        goto label_1db064;
    }
    ctx->pc = 0x1DB05Cu;
    SET_GPR_U32(ctx, 31, 0x1DB064u);
    ctx->pc = 0x1DB060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB05Cu;
            // 0x1db060: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA960u;
    if (runtime->hasFunction(0x1CA960u)) {
        auto targetFn = runtime->lookupFunction(0x1CA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB064u; }
        if (ctx->pc != 0x1DB064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEnemyLifeGageFi_0x1ca960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB064u; }
        if (ctx->pc != 0x1DB064u) { return; }
    }
    ctx->pc = 0x1DB064u;
label_1db064:
    // 0x1db064: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db068:
    // 0x1db068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db06c:
    // 0x1db06c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1db070:
    // 0x1db070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db074:
    // 0x1db074: 0xac2000e0  sw          $zero, 0xE0($at)
    ctx->pc = 0x1db074u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 224), GPR_U32(ctx, 0));
label_1db078:
    // 0x1db078: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db07c:
    // 0x1db07c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1db080:
    // 0x1db080: 0xac20fff4  sw          $zero, -0xC($at)
    ctx->pc = 0x1db080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967284), GPR_U32(ctx, 0));
label_1db084:
    // 0x1db084: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db088:
    // 0x1db088: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1db088u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1db08c:
    // 0x1db08c: 0xac20fff8  sw          $zero, -0x8($at)
    ctx->pc = 0x1db08cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967288), GPR_U32(ctx, 0));
label_1db090:
    // 0x1db090: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db094:
    // 0x1db094: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1db098:
    // 0x1db098: 0xac20fffc  sw          $zero, -0x4($at)
    ctx->pc = 0x1db098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967292), GPR_U32(ctx, 0));
label_1db09c:
    // 0x1db09c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db0a0:
    // 0x1db0a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db0a4:
    // 0x1db0a4: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1db0a8:
    // 0x1db0a8: 0x34210040  ori         $at, $at, 0x40
    ctx->pc = 0x1db0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64);
label_1db0ac:
    // 0x1db0ac: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1db0b0:
    // 0x1db0b0: 0x613821  addu        $a3, $v1, $at
    ctx->pc = 0x1db0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1db0b4:
    // 0x1db0b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1db0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1db0b8:
    // 0x1db0b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1db0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1db0bc:
    // 0x1db0bc: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1db0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_1db0c0:
    // 0x1db0c0: 0x614021  addu        $t0, $v1, $at
    ctx->pc = 0x1db0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1db0c4:
    // 0x1db0c4: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x1db0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_1db0c8:
    // 0x1db0c8: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1db0c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1db0cc:
    // 0x1db0cc: 0xa4e40002  sh          $a0, 0x2($a3)
    ctx->pc = 0x1db0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
label_1db0d0:
    // 0x1db0d0: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x1db0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
label_1db0d4:
    // 0x1db0d4: 0xa4e40004  sh          $a0, 0x4($a3)
    ctx->pc = 0x1db0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 4));
label_1db0d8:
    // 0x1db0d8: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1db0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
label_1db0dc:
    // 0x1db0dc: 0xa4e40006  sh          $a0, 0x6($a3)
    ctx->pc = 0x1db0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 4));
label_1db0e0:
    // 0x1db0e0: 0xa5040006  sh          $a0, 0x6($t0)
    ctx->pc = 0x1db0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 4));
label_1db0e4:
    // 0x1db0e4: 0xa4e40008  sh          $a0, 0x8($a3)
    ctx->pc = 0x1db0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 4));
label_1db0e8:
    // 0x1db0e8: 0xa5040008  sh          $a0, 0x8($t0)
    ctx->pc = 0x1db0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 4));
label_1db0ec:
    // 0x1db0ec: 0xa4e4000a  sh          $a0, 0xA($a3)
    ctx->pc = 0x1db0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 4));
label_1db0f0:
    // 0x1db0f0: 0xa504000a  sh          $a0, 0xA($t0)
    ctx->pc = 0x1db0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 4));
label_1db0f4:
    // 0x1db0f4: 0xa4e4000c  sh          $a0, 0xC($a3)
    ctx->pc = 0x1db0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 4));
label_1db0f8:
    // 0x1db0f8: 0xa504000c  sh          $a0, 0xC($t0)
    ctx->pc = 0x1db0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 4));
label_1db0fc:
    // 0x1db0fc: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x1db0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_1db100:
    // 0x1db100: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_1db104:
    if (ctx->pc == 0x1DB104u) {
        ctx->pc = 0x1DB104u;
            // 0x1db104: 0xa504000e  sh          $a0, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1DB108u;
        goto label_1db108;
    }
    ctx->pc = 0x1DB100u;
    {
        const bool branch_taken_0x1db100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB100u;
            // 0x1db104: 0xa504000e  sh          $a0, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db100) {
            ctx->pc = 0x1DB0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db0a0;
        }
    }
    ctx->pc = 0x1DB108u;
label_1db108:
    // 0x1db108: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1db108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1db10c:
    // 0x1db10c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1db10cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1db110:
    // 0x1db110: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1db110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db114:
    // 0x1db114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db118:
    // 0x1db118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db11c:
    // 0x1db11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db120:
    // 0x1db120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db124:
    // 0x1db124: 0x3e00008  jr          $ra
label_1db128:
    if (ctx->pc == 0x1DB128u) {
        ctx->pc = 0x1DB128u;
            // 0x1db128: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DB12Cu;
        goto label_fallthrough_0x1db124;
    }
    ctx->pc = 0x1DB124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB124u;
            // 0x1db128: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1db124:
    ctx->pc = 0x1DB12Cu;
}
