#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignCharacter__16CEffectScriptManFP11_EFF_SCRIPTi
// Address: 0x2e1fa0 - 0x2e2148
void AssignCharacter__16CEffectScriptManFP11_EFF_SCRIPTi_0x2e1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignCharacter__16CEffectScriptManFP11_EFF_SCRIPTi_0x2e1fa0");
#endif

    switch (ctx->pc) {
        case 0x2e1fa0u: goto label_2e1fa0;
        case 0x2e1fa4u: goto label_2e1fa4;
        case 0x2e1fa8u: goto label_2e1fa8;
        case 0x2e1facu: goto label_2e1fac;
        case 0x2e1fb0u: goto label_2e1fb0;
        case 0x2e1fb4u: goto label_2e1fb4;
        case 0x2e1fb8u: goto label_2e1fb8;
        case 0x2e1fbcu: goto label_2e1fbc;
        case 0x2e1fc0u: goto label_2e1fc0;
        case 0x2e1fc4u: goto label_2e1fc4;
        case 0x2e1fc8u: goto label_2e1fc8;
        case 0x2e1fccu: goto label_2e1fcc;
        case 0x2e1fd0u: goto label_2e1fd0;
        case 0x2e1fd4u: goto label_2e1fd4;
        case 0x2e1fd8u: goto label_2e1fd8;
        case 0x2e1fdcu: goto label_2e1fdc;
        case 0x2e1fe0u: goto label_2e1fe0;
        case 0x2e1fe4u: goto label_2e1fe4;
        case 0x2e1fe8u: goto label_2e1fe8;
        case 0x2e1fecu: goto label_2e1fec;
        case 0x2e1ff0u: goto label_2e1ff0;
        case 0x2e1ff4u: goto label_2e1ff4;
        case 0x2e1ff8u: goto label_2e1ff8;
        case 0x2e1ffcu: goto label_2e1ffc;
        case 0x2e2000u: goto label_2e2000;
        case 0x2e2004u: goto label_2e2004;
        case 0x2e2008u: goto label_2e2008;
        case 0x2e200cu: goto label_2e200c;
        case 0x2e2010u: goto label_2e2010;
        case 0x2e2014u: goto label_2e2014;
        case 0x2e2018u: goto label_2e2018;
        case 0x2e201cu: goto label_2e201c;
        case 0x2e2020u: goto label_2e2020;
        case 0x2e2024u: goto label_2e2024;
        case 0x2e2028u: goto label_2e2028;
        case 0x2e202cu: goto label_2e202c;
        case 0x2e2030u: goto label_2e2030;
        case 0x2e2034u: goto label_2e2034;
        case 0x2e2038u: goto label_2e2038;
        case 0x2e203cu: goto label_2e203c;
        case 0x2e2040u: goto label_2e2040;
        case 0x2e2044u: goto label_2e2044;
        case 0x2e2048u: goto label_2e2048;
        case 0x2e204cu: goto label_2e204c;
        case 0x2e2050u: goto label_2e2050;
        case 0x2e2054u: goto label_2e2054;
        case 0x2e2058u: goto label_2e2058;
        case 0x2e205cu: goto label_2e205c;
        case 0x2e2060u: goto label_2e2060;
        case 0x2e2064u: goto label_2e2064;
        case 0x2e2068u: goto label_2e2068;
        case 0x2e206cu: goto label_2e206c;
        case 0x2e2070u: goto label_2e2070;
        case 0x2e2074u: goto label_2e2074;
        case 0x2e2078u: goto label_2e2078;
        case 0x2e207cu: goto label_2e207c;
        case 0x2e2080u: goto label_2e2080;
        case 0x2e2084u: goto label_2e2084;
        case 0x2e2088u: goto label_2e2088;
        case 0x2e208cu: goto label_2e208c;
        case 0x2e2090u: goto label_2e2090;
        case 0x2e2094u: goto label_2e2094;
        case 0x2e2098u: goto label_2e2098;
        case 0x2e209cu: goto label_2e209c;
        case 0x2e20a0u: goto label_2e20a0;
        case 0x2e20a4u: goto label_2e20a4;
        case 0x2e20a8u: goto label_2e20a8;
        case 0x2e20acu: goto label_2e20ac;
        case 0x2e20b0u: goto label_2e20b0;
        case 0x2e20b4u: goto label_2e20b4;
        case 0x2e20b8u: goto label_2e20b8;
        case 0x2e20bcu: goto label_2e20bc;
        case 0x2e20c0u: goto label_2e20c0;
        case 0x2e20c4u: goto label_2e20c4;
        case 0x2e20c8u: goto label_2e20c8;
        case 0x2e20ccu: goto label_2e20cc;
        case 0x2e20d0u: goto label_2e20d0;
        case 0x2e20d4u: goto label_2e20d4;
        case 0x2e20d8u: goto label_2e20d8;
        case 0x2e20dcu: goto label_2e20dc;
        case 0x2e20e0u: goto label_2e20e0;
        case 0x2e20e4u: goto label_2e20e4;
        case 0x2e20e8u: goto label_2e20e8;
        case 0x2e20ecu: goto label_2e20ec;
        case 0x2e20f0u: goto label_2e20f0;
        case 0x2e20f4u: goto label_2e20f4;
        case 0x2e20f8u: goto label_2e20f8;
        case 0x2e20fcu: goto label_2e20fc;
        case 0x2e2100u: goto label_2e2100;
        case 0x2e2104u: goto label_2e2104;
        case 0x2e2108u: goto label_2e2108;
        case 0x2e210cu: goto label_2e210c;
        case 0x2e2110u: goto label_2e2110;
        case 0x2e2114u: goto label_2e2114;
        case 0x2e2118u: goto label_2e2118;
        case 0x2e211cu: goto label_2e211c;
        case 0x2e2120u: goto label_2e2120;
        case 0x2e2124u: goto label_2e2124;
        case 0x2e2128u: goto label_2e2128;
        case 0x2e212cu: goto label_2e212c;
        case 0x2e2130u: goto label_2e2130;
        case 0x2e2134u: goto label_2e2134;
        case 0x2e2138u: goto label_2e2138;
        case 0x2e213cu: goto label_2e213c;
        case 0x2e2140u: goto label_2e2140;
        case 0x2e2144u: goto label_2e2144;
        default: break;
    }

    ctx->pc = 0x2e1fa0u;

label_2e1fa0:
    // 0x2e1fa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e1fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e1fa4:
    // 0x2e1fa4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e1fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e1fa8:
    // 0x2e1fa8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e1fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e1fac:
    // 0x2e1fac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e1fb0:
    // 0x2e1fb0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e1fb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fb4:
    // 0x2e1fb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e1fb8:
    // 0x2e1fb8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e1fb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fbc:
    // 0x2e1fbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e1fc0:
    // 0x2e1fc0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e1fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fc4:
    // 0x2e1fc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e1fc8:
    // 0x2e1fc8: 0x2a810005  slti        $at, $s4, 0x5
    ctx->pc = 0x2e1fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_2e1fcc:
    // 0x2e1fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e1fd0:
    // 0x2e1fd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2e1fd4:
    if (ctx->pc == 0x2E1FD4u) {
        ctx->pc = 0x2E1FD4u;
            // 0x2e1fd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2E1FD8u;
        goto label_2e1fd8;
    }
    ctx->pc = 0x2E1FD0u;
    {
        const bool branch_taken_0x2e1fd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FD0u;
            // 0x2e1fd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fd0) {
            ctx->pc = 0x2E1FE0u;
            goto label_2e1fe0;
        }
    }
    ctx->pc = 0x2E1FD8u;
label_2e1fd8:
    // 0x2e1fd8: 0x10000051  b           . + 4 + (0x51 << 2)
label_2e1fdc:
    if (ctx->pc == 0x2E1FDCu) {
        ctx->pc = 0x2E1FDCu;
            // 0x2e1fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FE0u;
        goto label_2e1fe0;
    }
    ctx->pc = 0x2E1FD8u;
    {
        const bool branch_taken_0x2e1fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FD8u;
            // 0x2e1fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fd8) {
            ctx->pc = 0x2E2120u;
            goto label_2e2120;
        }
    }
    ctx->pc = 0x2E1FE0u;
label_2e1fe0:
    // 0x2e1fe0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2e1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2e1fe4:
    // 0x2e1fe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1fe8:
    // 0x2e1fe8: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x2e1fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_2e1fec:
    // 0x2e1fec: 0x320f809  jalr        $t9
label_2e1ff0:
    if (ctx->pc == 0x2E1FF0u) {
        ctx->pc = 0x2E1FF4u;
        goto label_2e1ff4;
    }
    ctx->pc = 0x2E1FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1FF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FF4u; }
            if (ctx->pc != 0x2E1FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1FF4u;
label_2e1ff4:
    // 0x2e1ff4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2e1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2e1ff8:
    // 0x2e1ff8: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2e1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e1ffc:
    // 0x2e1ffc: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x2e1ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2e2000:
    // 0x2e2000: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e2000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e2004:
    // 0x2e2004: 0xc04e6a8  jal         func_139AA0
label_2e2008:
    if (ctx->pc == 0x2E2008u) {
        ctx->pc = 0x2E2008u;
            // 0x2e2008: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E200Cu;
        goto label_2e200c;
    }
    ctx->pc = 0x2E2004u;
    SET_GPR_U32(ctx, 31, 0x2E200Cu);
    ctx->pc = 0x2E2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2004u;
            // 0x2e2008: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (runtime->hasFunction(0x139AA0u)) {
        auto targetFn = runtime->lookupFunction(0x139AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E200Cu; }
        if (ctx->pc != 0x2E200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartStackMode__9mgCMemoryFii_0x139aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E200Cu; }
        if (ctx->pc != 0x2E200Cu) { return; }
    }
    ctx->pc = 0x2E200Cu;
label_2e200c:
    // 0x2e200c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2010:
    // 0x2e2010: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_2e2014:
    if (ctx->pc == 0x2E2014u) {
        ctx->pc = 0x2E2014u;
            // 0x2e2014: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->pc = 0x2E2018u;
        goto label_2e2018;
    }
    ctx->pc = 0x2E2010u;
    {
        const bool branch_taken_0x2e2010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2010u;
            // 0x2e2014: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2010) {
            ctx->pc = 0x2E2030u;
            goto label_2e2030;
        }
    }
    ctx->pc = 0x2E2018u;
label_2e2018:
    // 0x2e2018: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e2018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e201c:
    // 0x2e201c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e2020:
    // 0x2e2020: 0xc04a0d2  jal         func_128348
label_2e2024:
    if (ctx->pc == 0x2E2024u) {
        ctx->pc = 0x2E2024u;
            // 0x2e2024: 0x248412a0  addiu       $a0, $a0, 0x12A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
        ctx->pc = 0x2E2028u;
        goto label_2e2028;
    }
    ctx->pc = 0x2E2020u;
    SET_GPR_U32(ctx, 31, 0x2E2028u);
    ctx->pc = 0x2E2024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2020u;
            // 0x2e2024: 0x248412a0  addiu       $a0, $a0, 0x12A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2028u; }
        if (ctx->pc != 0x2E2028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2028u; }
        if (ctx->pc != 0x2E2028u) { return; }
    }
    ctx->pc = 0x2E2028u;
label_2e2028:
    // 0x2e2028: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2e202c:
    if (ctx->pc == 0x2E202Cu) {
        ctx->pc = 0x2E202Cu;
            // 0x2e202c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2030u;
        goto label_2e2030;
    }
    ctx->pc = 0x2E2028u;
    {
        const bool branch_taken_0x2e2028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2028u;
            // 0x2e202c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2028) {
            ctx->pc = 0x2E2120u;
            goto label_2e2120;
        }
    }
    ctx->pc = 0x2E2030u;
label_2e2030:
    // 0x2e2030: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_2e2034:
    if (ctx->pc == 0x2E2034u) {
        ctx->pc = 0x2E2034u;
            // 0x2e2034: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2038u;
        goto label_2e2038;
    }
    ctx->pc = 0x2E2030u;
    {
        const bool branch_taken_0x2e2030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2030u;
            // 0x2e2034: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2030) {
            ctx->pc = 0x2E2108u;
            goto label_2e2108;
        }
    }
    ctx->pc = 0x2E2038u;
label_2e2038:
    // 0x2e2038: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e2038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e203c:
    // 0x2e203c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2e203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e2040:
    // 0x2e2040: 0xc04e748  jal         func_139D20
label_2e2044:
    if (ctx->pc == 0x2E2044u) {
        ctx->pc = 0x2E2044u;
            // 0x2e2044: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2E2048u;
        goto label_2e2048;
    }
    ctx->pc = 0x2E2040u;
    SET_GPR_U32(ctx, 31, 0x2E2048u);
    ctx->pc = 0x2E2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2040u;
            // 0x2e2044: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2048u; }
        if (ctx->pc != 0x2E2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2048u; }
        if (ctx->pc != 0x2E2048u) { return; }
    }
    ctx->pc = 0x2E2048u;
label_2e2048:
    // 0x2e2048: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2e2048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2e204c:
    // 0x2e204c: 0xc04e638  jal         func_1398E0
label_2e2050:
    if (ctx->pc == 0x2E2050u) {
        ctx->pc = 0x2E2050u;
            // 0x2e2050: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2054u;
        goto label_2e2054;
    }
    ctx->pc = 0x2E204Cu;
    SET_GPR_U32(ctx, 31, 0x2E2054u);
    ctx->pc = 0x2E2050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E204Cu;
            // 0x2e2050: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2054u; }
        if (ctx->pc != 0x2E2054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2054u; }
        if (ctx->pc != 0x2E2054u) { return; }
    }
    ctx->pc = 0x2E2054u;
label_2e2054:
    // 0x2e2054: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2e2058:
    if (ctx->pc == 0x2E2058u) {
        ctx->pc = 0x2E2058u;
            // 0x2e2058: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E205Cu;
        goto label_2e205c;
    }
    ctx->pc = 0x2E2054u;
    {
        const bool branch_taken_0x2e2054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2054u;
            // 0x2e2058: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2054) {
            ctx->pc = 0x2E20D8u;
            goto label_2e20d8;
        }
    }
    ctx->pc = 0x2E205Cu;
label_2e205c:
    // 0x2e205c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2060:
    // 0x2e2060: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e2060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e2064:
    // 0x2e2064: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e2064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e2068:
    // 0x2e2068: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e2068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e206c:
    // 0x2e206c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e206cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2070:
    // 0x2e2070: 0x320f809  jalr        $t9
label_2e2074:
    if (ctx->pc == 0x2E2074u) {
        ctx->pc = 0x2E2074u;
            // 0x2e2074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2078u;
        goto label_2e2078;
    }
    ctx->pc = 0x2E2070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2078u);
        ctx->pc = 0x2E2074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2070u;
            // 0x2e2074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2078u; }
            if (ctx->pc != 0x2E2078u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2078u;
label_2e2078:
    // 0x2e2078: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e207c:
    // 0x2e207c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e2080:
    // 0x2e2080: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e2080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e2084:
    // 0x2e2084: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e2084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2088:
    // 0x2e2088: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e208c:
    // 0x2e208c: 0x320f809  jalr        $t9
label_2e2090:
    if (ctx->pc == 0x2E2090u) {
        ctx->pc = 0x2E2090u;
            // 0x2e2090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2094u;
        goto label_2e2094;
    }
    ctx->pc = 0x2E208Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2094u);
        ctx->pc = 0x2E2090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E208Cu;
            // 0x2e2090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2094u; }
            if (ctx->pc != 0x2E2094u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2094u;
label_2e2094:
    // 0x2e2094: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2098:
    // 0x2e2098: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e209c:
    // 0x2e209c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e209cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e20a0:
    // 0x2e20a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e20a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e20a4:
    // 0x2e20a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e20a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e20a8:
    // 0x2e20a8: 0x320f809  jalr        $t9
label_2e20ac:
    if (ctx->pc == 0x2E20ACu) {
        ctx->pc = 0x2E20ACu;
            // 0x2e20ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E20B0u;
        goto label_2e20b0;
    }
    ctx->pc = 0x2E20A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E20B0u);
        ctx->pc = 0x2E20ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E20A8u;
            // 0x2e20ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E20B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E20B0u; }
            if (ctx->pc != 0x2E20B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E20B0u;
label_2e20b0:
    // 0x2e20b0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e20b4:
    // 0x2e20b4: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2e20b8:
    // 0x2e20b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e20b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e20bc:
    // 0x2e20bc: 0xae40035c  sw          $zero, 0x35C($s2)
    ctx->pc = 0x2e20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 0));
label_2e20c0:
    // 0x2e20c0: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x2e20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_2e20c4:
    // 0x2e20c4: 0xae400360  sw          $zero, 0x360($s2)
    ctx->pc = 0x2e20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 864), GPR_U32(ctx, 0));
label_2e20c8:
    // 0x2e20c8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e20c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e20cc:
    // 0x2e20cc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e20ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e20d0:
    // 0x2e20d0: 0x320f809  jalr        $t9
label_2e20d4:
    if (ctx->pc == 0x2E20D4u) {
        ctx->pc = 0x2E20D4u;
            // 0x2e20d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E20D8u;
        goto label_2e20d8;
    }
    ctx->pc = 0x2E20D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E20D8u);
        ctx->pc = 0x2E20D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E20D0u;
            // 0x2e20d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E20D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E20D8u; }
            if (ctx->pc != 0x2E20D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E20D8u;
label_2e20d8:
    // 0x2e20d8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2e20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2e20dc:
    // 0x2e20dc: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2e20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_2e20e0:
    // 0x2e20e0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2e20e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2e20e4:
    // 0x2e20e4: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2e20e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e20e8:
    // 0x2e20e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e20e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e20ec:
    // 0x2e20ec: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2e20ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2e20f0:
    // 0x2e20f0: 0x320f809  jalr        $t9
label_2e20f4:
    if (ctx->pc == 0x2E20F4u) {
        ctx->pc = 0x2E20F4u;
            // 0x2e20f4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x2E20F8u;
        goto label_2e20f8;
    }
    ctx->pc = 0x2E20F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E20F8u);
        ctx->pc = 0x2E20F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E20F0u;
            // 0x2e20f4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E20F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E20F8u; }
            if (ctx->pc != 0x2E20F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E20F8u;
label_2e20f8:
    // 0x2e20f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e20f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e20fc:
    // 0x2e20fc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2e20fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2e2100:
    // 0x2e2100: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2e2104:
    if (ctx->pc == 0x2E2104u) {
        ctx->pc = 0x2E2104u;
            // 0x2e2104: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2E2108u;
        goto label_2e2108;
    }
    ctx->pc = 0x2E2100u;
    {
        const bool branch_taken_0x2e2100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2100u;
            // 0x2e2104: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2100) {
            ctx->pc = 0x2E203Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e203c;
        }
    }
    ctx->pc = 0x2E2108u;
label_2e2108:
    // 0x2e2108: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x2e2108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_2e210c:
    // 0x2e210c: 0xc04e764  jal         func_139D90
label_2e2110:
    if (ctx->pc == 0x2E2110u) {
        ctx->pc = 0x2E2110u;
            // 0x2e2110: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x2E2114u;
        goto label_2e2114;
    }
    ctx->pc = 0x2E210Cu;
    SET_GPR_U32(ctx, 31, 0x2E2114u);
    ctx->pc = 0x2E2110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E210Cu;
            // 0x2e2110: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D90u;
    if (runtime->hasFunction(0x139D90u)) {
        auto targetFn = runtime->lookupFunction(0x139D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2114u; }
        if (ctx->pc != 0x2E2114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlign64__9mgCMemoryFv_0x139d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2114u; }
        if (ctx->pc != 0x2E2114u) { return; }
    }
    ctx->pc = 0x2E2114u;
label_2e2114:
    // 0x2e2114: 0xc04e6f4  jal         func_139BD0
label_2e2118:
    if (ctx->pc == 0x2E2118u) {
        ctx->pc = 0x2E2118u;
            // 0x2e2118: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x2E211Cu;
        goto label_2e211c;
    }
    ctx->pc = 0x2E2114u;
    SET_GPR_U32(ctx, 31, 0x2E211Cu);
    ctx->pc = 0x2E2118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2114u;
            // 0x2e2118: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139BD0u;
    if (runtime->hasFunction(0x139BD0u)) {
        auto targetFn = runtime->lookupFunction(0x139BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E211Cu; }
        if (ctx->pc != 0x2E211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndStackMode__9mgCMemoryFv_0x139bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E211Cu; }
        if (ctx->pc != 0x2E211Cu) { return; }
    }
    ctx->pc = 0x2E211Cu;
label_2e211c:
    // 0x2e211c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2120:
    // 0x2e2120: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e2120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e2124:
    // 0x2e2124: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e2124u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e2128:
    // 0x2e2128: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e2128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e212c:
    // 0x2e212c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e212cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e2130:
    // 0x2e2130: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e2130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e2134:
    // 0x2e2134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2138:
    // 0x2e2138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e213c:
    // 0x2e213c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e213cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2140:
    // 0x2e2140: 0x3e00008  jr          $ra
label_2e2144:
    if (ctx->pc == 0x2E2144u) {
        ctx->pc = 0x2E2144u;
            // 0x2e2144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E2148u;
        goto label_fallthrough_0x2e2140;
    }
    ctx->pc = 0x2E2140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2140u;
            // 0x2e2144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e2140:
    ctx->pc = 0x2E2148u;
}
