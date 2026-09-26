#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleHDDInstallDraw__Fv
// Address: 0x2a48f0 - 0x2a4d00
void TitleHDDInstallDraw__Fv_0x2a48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleHDDInstallDraw__Fv_0x2a48f0");
#endif

    switch (ctx->pc) {
        case 0x2a492cu: goto label_2a492c;
        case 0x2a4944u: goto label_2a4944;
        case 0x2a495cu: goto label_2a495c;
        case 0x2a497cu: goto label_2a497c;
        case 0x2a49a4u: goto label_2a49a4;
        case 0x2a49c8u: goto label_2a49c8;
        case 0x2a49f0u: goto label_2a49f0;
        case 0x2a4a20u: goto label_2a4a20;
        case 0x2a4a98u: goto label_2a4a98;
        case 0x2a4accu: goto label_2a4acc;
        case 0x2a4afcu: goto label_2a4afc;
        case 0x2a4b20u: goto label_2a4b20;
        case 0x2a4b48u: goto label_2a4b48;
        case 0x2a4b6cu: goto label_2a4b6c;
        case 0x2a4b90u: goto label_2a4b90;
        case 0x2a4bc0u: goto label_2a4bc0;
        case 0x2a4bf8u: goto label_2a4bf8;
        case 0x2a4c30u: goto label_2a4c30;
        case 0x2a4c40u: goto label_2a4c40;
        case 0x2a4c48u: goto label_2a4c48;
        case 0x2a4c68u: goto label_2a4c68;
        case 0x2a4c78u: goto label_2a4c78;
        case 0x2a4c8cu: goto label_2a4c8c;
        case 0x2a4ca0u: goto label_2a4ca0;
        case 0x2a4ca8u: goto label_2a4ca8;
        case 0x2a4cd0u: goto label_2a4cd0;
        case 0x2a4cd8u: goto label_2a4cd8;
        case 0x2a4ce0u: goto label_2a4ce0;
        default: break;
    }

    ctx->pc = 0x2a48f0u;

    // 0x2a48f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2a48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2a48f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a48f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a48f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a48fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a4900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a4900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a4904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a4904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a4908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a490c: 0x8f839a30  lw          $v1, -0x65D0($gp)
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941232)));
    // 0x2a4910: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2a4910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2a4914: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A4914u;
    {
        const bool branch_taken_0x2a4914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4914u;
            // 0x2a4918: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4914) {
            ctx->pc = 0x2A497Cu;
            goto label_2a497c;
        }
    }
    ctx->pc = 0x2A491Cu;
    // 0x2a491c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4924: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A4924u;
    SET_GPR_U32(ctx, 31, 0x2A492Cu);
    ctx->pc = 0x2A4928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4924u;
            // 0x2a4928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A492Cu; }
        if (ctx->pc != 0x2A492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A492Cu; }
        if (ctx->pc != 0x2A492Cu) { return; }
    }
    ctx->pc = 0x2A492Cu;
label_2a492c:
    // 0x2a492c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2a492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a4930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4938: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a4938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a493c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A493Cu;
    SET_GPR_U32(ctx, 31, 0x2A4944u);
    ctx->pc = 0x2A4940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A493Cu;
            // 0x2a4940: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4944u; }
        if (ctx->pc != 0x2A4944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4944u; }
        if (ctx->pc != 0x2A4944u) { return; }
    }
    ctx->pc = 0x2A4944u;
label_2a4944:
    // 0x2a4944: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a4944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a4948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a494c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a494cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4950: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a4954: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A4954u;
    SET_GPR_U32(ctx, 31, 0x2A495Cu);
    ctx->pc = 0x2A4958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4954u;
            // 0x2a4958: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A495Cu; }
        if (ctx->pc != 0x2A495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A495Cu; }
        if (ctx->pc != 0x2A495Cu) { return; }
    }
    ctx->pc = 0x2A495Cu;
label_2a495c:
    // 0x2a495c: 0x8f849a30  lw          $a0, -0x65D0($gp)
    ctx->pc = 0x2a495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941232)));
    // 0x2a4960: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a4960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a4964: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2a4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a4968: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2a4968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a496c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a496cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4970: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2a4970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4974: 0xc088004  jal         func_220010
    ctx->pc = 0x2A4974u;
    SET_GPR_U32(ctx, 31, 0x2A497Cu);
    ctx->pc = 0x2A4978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4974u;
            // 0x2a4978: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A497Cu; }
        if (ctx->pc != 0x2A497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A497Cu; }
        if (ctx->pc != 0x2A497Cu) { return; }
    }
    ctx->pc = 0x2A497Cu;
label_2a497c:
    // 0x2a497c: 0x8f849a34  lw          $a0, -0x65CC($gp)
    ctx->pc = 0x2a497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941236)));
    // 0x2a4980: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A4980u;
    {
        const bool branch_taken_0x2a4980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4980) {
            ctx->pc = 0x2A4B20u;
            goto label_2a4b20;
        }
    }
    ctx->pc = 0x2A4988u;
    // 0x2a4988: 0x93839a20  lbu         $v1, -0x65E0($gp)
    ctx->pc = 0x2a4988u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941216)));
    // 0x2a498c: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2A498Cu;
    {
        const bool branch_taken_0x2a498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a498c) {
            ctx->pc = 0x2A4B20u;
            goto label_2a4b20;
        }
    }
    ctx->pc = 0x2A4994u;
    // 0x2a4994: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x2a4994u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a499c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A499Cu;
    SET_GPR_U32(ctx, 31, 0x2A49A4u);
    ctx->pc = 0x2A49A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A499Cu;
            // 0x2a49a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49A4u; }
        if (ctx->pc != 0x2A49A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49A4u; }
        if (ctx->pc != 0x2A49A4u) { return; }
    }
    ctx->pc = 0x2A49A4u;
label_2a49a4:
    // 0x2a49a4: 0xdf828470  ld          $v0, -0x7B90($gp)
    ctx->pc = 0x2a49a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x2a49a8: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x2a49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2a49ac: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a49acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a49b0: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x2a49b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x2a49b4: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x2a49b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2a49b8: 0x240700d2  addiu       $a3, $zero, 0xD2
    ctx->pc = 0x2a49b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2a49bc: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x2a49bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2a49c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A49C0u;
    SET_GPR_U32(ctx, 31, 0x2A49C8u);
    ctx->pc = 0x2A49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A49C0u;
            // 0x2a49c4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49C8u; }
        if (ctx->pc != 0x2A49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49C8u; }
        if (ctx->pc != 0x2A49C8u) { return; }
    }
    ctx->pc = 0x2A49C8u;
label_2a49c8:
    // 0x2a49c8: 0x27b1016c  addiu       $s1, $sp, 0x16C
    ctx->pc = 0x2a49c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x2a49cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a49ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a49d0: 0x8f849a34  lw          $a0, -0x65CC($gp)
    ctx->pc = 0x2a49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941236)));
    // 0x2a49d4: 0xc7ac0168  lwc1        $f12, 0x168($sp)
    ctx->pc = 0x2a49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a49d8: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x2a49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a49dc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2a49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a49e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a49e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49e4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a49e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49e8: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A49E8u;
    SET_GPR_U32(ctx, 31, 0x2A49F0u);
    ctx->pc = 0x2A49ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A49E8u;
            // 0x2a49ec: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49F0u; }
        if (ctx->pc != 0x2A49F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A49F0u; }
        if (ctx->pc != 0x2A49F0u) { return; }
    }
    ctx->pc = 0x2A49F0u;
label_2a49f0:
    // 0x2a49f0: 0x83829a50  lb          $v0, -0x65B0($gp)
    ctx->pc = 0x2a49f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941264)));
    // 0x2a49f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A49F4u;
    {
        const bool branch_taken_0x2a49f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A49F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A49F4u;
            // 0x2a49f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a49f4) {
            ctx->pc = 0x2A4A04u;
            goto label_2a4a04;
        }
    }
    ctx->pc = 0x2A49FCu;
    // 0x2a49fc: 0xaf809a4c  sw          $zero, -0x65B4($gp)
    ctx->pc = 0x2a49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941260), GPR_U32(ctx, 0));
    // 0x2a4a00: 0xa3829a50  sb          $v0, -0x65B0($gp)
    ctx->pc = 0x2a4a00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941264), (uint8_t)GPR_U32(ctx, 2));
label_2a4a04:
    // 0x2a4a04: 0xc7819a4c  lwc1        $f1, -0x65B4($gp)
    ctx->pc = 0x2a4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4a08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a10: 0x0  nop
    ctx->pc = 0x2a4a10u;
    // NOP
    // 0x2a4a14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a4a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4a18: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A4A18u;
    SET_GPR_U32(ctx, 31, 0x2A4A20u);
    ctx->pc = 0x2A4A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A18u;
            // 0x2a4a1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4A20u; }
        if (ctx->pc != 0x2A4A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4A20u; }
        if (ctx->pc != 0x2A4A20u) { return; }
    }
    ctx->pc = 0x2A4A20u;
label_2a4a20:
    // 0x2a4a20: 0xaf829a4c  sw          $v0, -0x65B4($gp)
    ctx->pc = 0x2a4a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941260), GPR_U32(ctx, 2));
    // 0x2a4a24: 0xc7809a4c  lwc1        $f0, -0x65B4($gp)
    ctx->pc = 0x2a4a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4a28: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2a4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2a4a2c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x2a4a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x2a4a30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a4a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a34: 0x0  nop
    ctx->pc = 0x2a4a34u;
    // NOP
    // 0x2a4a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a4a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a4a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4a40: 0x0  nop
    ctx->pc = 0x2a4a40u;
    // NOP
    // 0x2a4a44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4A44u;
    {
        const bool branch_taken_0x2a4a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4a44) {
            ctx->pc = 0x2A4A50u;
            goto label_2a4a50;
        }
    }
    ctx->pc = 0x2A4A4Cu;
    // 0x2a4a4c: 0xaf809a4c  sw          $zero, -0x65B4($gp)
    ctx->pc = 0x2a4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941260), GPR_U32(ctx, 0));
label_2a4a50:
    // 0x2a4a50: 0xc7a30168  lwc1        $f3, 0x168($sp)
    ctx->pc = 0x2a4a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a4a54: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2a4a58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a4a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4a5c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2a4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2a4a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a64: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2a4a64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2a4a68: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a4a6c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a4a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a4a70: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x2a4a70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2a4a74: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2a4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4a78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a4a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a7c: 0x0  nop
    ctx->pc = 0x2a4a7cu;
    // NOP
    // 0x2a4a80: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2a4a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a4a84: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a4a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2a4a88: 0xc7809a4c  lwc1        $f0, -0x65B4($gp)
    ctx->pc = 0x2a4a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a4a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a4a90: 0xc047964  jal         func_11E590
    ctx->pc = 0x2A4A90u;
    SET_GPR_U32(ctx, 31, 0x2A4A98u);
    ctx->pc = 0x2A4A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4A90u;
            // 0x2a4a94: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4A98u; }
        if (ctx->pc != 0x2A4A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4A98u; }
        if (ctx->pc != 0x2A4A98u) { return; }
    }
    ctx->pc = 0x2A4A98u;
label_2a4a98:
    // 0x2a4a98: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2a4a9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a4a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a4aa0: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x2a4aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4aa4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a4aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a4aa8: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2a4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2a4aac: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a4aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a4ab0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2a4ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a4ab4: 0xc7819a4c  lwc1        $f1, -0x65B4($gp)
    ctx->pc = 0x2a4ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4ab8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2a4ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2a4abc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a4abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4ac0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x2a4ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a4ac4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2A4AC4u;
    SET_GPR_U32(ctx, 31, 0x2A4ACCu);
    ctx->pc = 0x2A4AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4AC4u;
            // 0x2a4ac8: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4ACCu; }
        if (ctx->pc != 0x2A4ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4ACCu; }
        if (ctx->pc != 0x2A4ACCu) { return; }
    }
    ctx->pc = 0x2A4ACCu;
label_2a4acc:
    // 0x2a4acc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2a4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2a4ad0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2a4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a4ad4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a4ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4ad8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a4ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a4adc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2a4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ae4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a4ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a4ae8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a4ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4aec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2a4aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a4af0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a4af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4af4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A4AF4u;
    SET_GPR_U32(ctx, 31, 0x2A4AFCu);
    ctx->pc = 0x2A4AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4AF4u;
            // 0x2a4af8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AFCu; }
        if (ctx->pc != 0x2A4AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AFCu; }
        if (ctx->pc != 0x2A4AFCu) { return; }
    }
    ctx->pc = 0x2A4AFCu;
label_2a4afc:
    // 0x2a4afc: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x2a4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a4b00: 0x8f849a34  lw          $a0, -0x65CC($gp)
    ctx->pc = 0x2a4b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941236)));
    // 0x2a4b04: 0xc7ac0168  lwc1        $f12, 0x168($sp)
    ctx->pc = 0x2a4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4b08: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a4b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a4b0c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2a4b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a4b10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a4b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b14: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a4b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b18: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A4B18u;
    SET_GPR_U32(ctx, 31, 0x2A4B20u);
    ctx->pc = 0x2A4B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B18u;
            // 0x2a4b1c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4B20u; }
        if (ctx->pc != 0x2A4B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4B20u; }
        if (ctx->pc != 0x2A4B20u) { return; }
    }
    ctx->pc = 0x2A4B20u;
label_2a4b20:
    // 0x2a4b20: 0x87849a14  lh          $a0, -0x65EC($gp)
    ctx->pc = 0x2a4b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941204)));
    // 0x2a4b24: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2a4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2a4b28: 0x24636270  addiu       $v1, $v1, 0x6270
    ctx->pc = 0x2a4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
    // 0x2a4b2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a4b30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a4b34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4b38: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A4B38u;
    {
        const bool branch_taken_0x2a4b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B38u;
            // 0x2a4b3c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b38) {
            ctx->pc = 0x2A4BD0u;
            goto label_2a4bd0;
        }
    }
    ctx->pc = 0x2A4B40u;
    // 0x2a4b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a4b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a4b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4b48:
    // 0x2a4b48: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2a4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2a4b4c: 0x24426270  addiu       $v0, $v0, 0x6270
    ctx->pc = 0x2a4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25200));
    // 0x2a4b50: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x2a4b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a4b54: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a4b58: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2a4b58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4b5c: 0x12250006  beq         $s1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4B5Cu;
    {
        const bool branch_taken_0x2a4b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A4B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B5Cu;
            // 0x2a4b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b5c) {
            ctx->pc = 0x2A4B78u;
            goto label_2a4b78;
        }
    }
    ctx->pc = 0x2A4B64u;
    // 0x2a4b64: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A4B64u;
    SET_GPR_U32(ctx, 31, 0x2A4B6Cu);
    ctx->pc = 0x2A4B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B64u;
            // 0x2a4b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4B6Cu; }
        if (ctx->pc != 0x2A4B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4B6Cu; }
        if (ctx->pc != 0x2A4B6Cu) { return; }
    }
    ctx->pc = 0x2A4B6Cu;
label_2a4b6c:
    // 0x2a4b6c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a4b70: 0x84510000  lh          $s1, 0x0($v0)
    ctx->pc = 0x2a4b70u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4b74: 0x0  nop
    ctx->pc = 0x2a4b74u;
    // NOP
label_2a4b78:
    // 0x2a4b78: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2a4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2a4b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b84: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a4b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a4b88: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A4B88u;
    SET_GPR_U32(ctx, 31, 0x2A4B90u);
    ctx->pc = 0x2A4B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B88u;
            // 0x2a4b8c: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4B90u; }
        if (ctx->pc != 0x2A4B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4B90u; }
        if (ctx->pc != 0x2A4B90u) { return; }
    }
    ctx->pc = 0x2A4B90u;
label_2a4b90:
    // 0x2a4b90: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2a4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2a4b94: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a4b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a4b98: 0x244262a0  addiu       $v0, $v0, 0x62A0
    ctx->pc = 0x2a4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25248));
    // 0x2a4b9c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2a4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a4ba0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a4ba4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2a4ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2a4ba8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2a4ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4bac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a4bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4bb0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a4bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bb4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2a4bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bb8: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A4BB8u;
    SET_GPR_U32(ctx, 31, 0x2A4BC0u);
    ctx->pc = 0x2A4BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4BB8u;
            // 0x2a4bbc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4BC0u; }
        if (ctx->pc != 0x2A4BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4BC0u; }
        if (ctx->pc != 0x2A4BC0u) { return; }
    }
    ctx->pc = 0x2A4BC0u;
label_2a4bc0:
    // 0x2a4bc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a4bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a4bc4: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x2a4bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a4bc8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2A4BC8u;
    {
        const bool branch_taken_0x2a4bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4BC8u;
            // 0x2a4bcc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4bc8) {
            ctx->pc = 0x2A4B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4b48;
        }
    }
    ctx->pc = 0x2A4BD0u;
label_2a4bd0:
    // 0x2a4bd0: 0x93839a18  lbu         $v1, -0x65E8($gp)
    ctx->pc = 0x2a4bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941208)));
    // 0x2a4bd4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A4BD4u;
    {
        const bool branch_taken_0x2a4bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4bd4) {
            ctx->pc = 0x2A4CA8u;
            goto label_2a4ca8;
        }
    }
    ctx->pc = 0x2A4BDCu;
    // 0x2a4bdc: 0x8f839a1c  lw          $v1, -0x65E4($gp)
    ctx->pc = 0x2a4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941212)));
    // 0x2a4be0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A4BE0u;
    {
        const bool branch_taken_0x2a4be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4be0) {
            ctx->pc = 0x2A4CA8u;
            goto label_2a4ca8;
        }
    }
    ctx->pc = 0x2A4BE8u;
    // 0x2a4be8: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2a4be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bf0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A4BF0u;
    SET_GPR_U32(ctx, 31, 0x2A4BF8u);
    ctx->pc = 0x2A4BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4BF0u;
            // 0x2a4bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4BF8u; }
        if (ctx->pc != 0x2A4BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4BF8u; }
        if (ctx->pc != 0x2A4BF8u) { return; }
    }
    ctx->pc = 0x2A4BF8u;
label_2a4bf8:
    // 0x2a4bf8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4bfc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a4c00: 0xc42162ec  lwc1        $f1, 0x62EC($at)
    ctx->pc = 0x2a4c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4c04: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x2a4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2a4c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4c0c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x2a4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2a4c10: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x2a4c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a4c14: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a4c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a4c18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a4c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4c1c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2a4c1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a4c20: 0x0  nop
    ctx->pc = 0x2a4c20u;
    // NOP
    // 0x2a4c24: 0x0  nop
    ctx->pc = 0x2a4c24u;
    // NOP
    // 0x2a4c28: 0xc0a9188  jal         func_2A4620
    ctx->pc = 0x2A4C28u;
    SET_GPR_U32(ctx, 31, 0x2A4C30u);
    ctx->pc = 0x2A4620u;
    if (runtime->hasFunction(0x2A4620u)) {
        auto targetFn = runtime->lookupFunction(0x2A4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C30u; }
        if (ctx->pc != 0x2A4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuDl__Fiiiif_0x2a4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C30u; }
        if (ctx->pc != 0x2A4C30u) { return; }
    }
    ctx->pc = 0x2A4C30u;
label_2a4c30:
    // 0x2a4c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c34: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2a4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2a4c38: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A4C38u;
    SET_GPR_U32(ctx, 31, 0x2A4C40u);
    ctx->pc = 0x2A4C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C38u;
            // 0x2a4c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C40u; }
        if (ctx->pc != 0x2A4C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C40u; }
        if (ctx->pc != 0x2A4C40u) { return; }
    }
    ctx->pc = 0x2A4C40u;
label_2a4c40:
    // 0x2a4c40: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2A4C40u;
    SET_GPR_U32(ctx, 31, 0x2A4C48u);
    ctx->pc = 0x2A4C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C40u;
            // 0x2a4c44: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C48u; }
        if (ctx->pc != 0x2A4C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C48u; }
        if (ctx->pc != 0x2A4C48u) { return; }
    }
    ctx->pc = 0x2A4C48u;
label_2a4c48:
    // 0x2a4c48: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2a4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2a4c4c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2a4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2a4c50: 0x244243a0  addiu       $v0, $v0, 0x43A0
    ctx->pc = 0x2a4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17312));
    // 0x2a4c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4c5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4c60: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2A4C60u;
    SET_GPR_U32(ctx, 31, 0x2A4C68u);
    ctx->pc = 0x2A4C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C60u;
            // 0x2a4c64: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C68u; }
        if (ctx->pc != 0x2A4C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C68u; }
        if (ctx->pc != 0x2A4C68u) { return; }
    }
    ctx->pc = 0x2A4C68u;
label_2a4c68:
    // 0x2a4c68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4c6c: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x2a4c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2a4c70: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2A4C70u;
    SET_GPR_U32(ctx, 31, 0x2A4C78u);
    ctx->pc = 0x2A4C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C70u;
            // 0x2a4c74: 0x240600ae  addiu       $a2, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C78u; }
        if (ctx->pc != 0x2A4C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C78u; }
        if (ctx->pc != 0x2A4C78u) { return; }
    }
    ctx->pc = 0x2A4C78u;
label_2a4c78:
    // 0x2a4c78: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x2a4c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2a4c7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4c80: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2a4c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2a4c84: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2A4C84u;
    SET_GPR_U32(ctx, 31, 0x2A4C8Cu);
    ctx->pc = 0x2A4C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C84u;
            // 0x2a4c88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C8Cu; }
        if (ctx->pc != 0x2A4C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C8Cu; }
        if (ctx->pc != 0x2A4C8Cu) { return; }
    }
    ctx->pc = 0x2A4C8Cu;
label_2a4c8c:
    // 0x2a4c8c: 0x8f849a2c  lw          $a0, -0x65D4($gp)
    ctx->pc = 0x2a4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
    // 0x2a4c90: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4C90u;
    {
        const bool branch_taken_0x2a4c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4c90) {
            ctx->pc = 0x2A4CA8u;
            goto label_2a4ca8;
        }
    }
    ctx->pc = 0x2A4C98u;
    // 0x2a4c98: 0xc087898  jal         func_21E260
    ctx->pc = 0x2A4C98u;
    SET_GPR_U32(ctx, 31, 0x2A4CA0u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CA0u; }
        if (ctx->pc != 0x2A4CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CA0u; }
        if (ctx->pc != 0x2A4CA0u) { return; }
    }
    ctx->pc = 0x2A4CA0u;
label_2a4ca0:
    // 0x2a4ca0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2A4CA0u;
    SET_GPR_U32(ctx, 31, 0x2A4CA8u);
    ctx->pc = 0x2A4CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4CA0u;
            // 0x2a4ca4: 0x8f849a2c  lw          $a0, -0x65D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CA8u; }
        if (ctx->pc != 0x2A4CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CA8u; }
        if (ctx->pc != 0x2A4CA8u) { return; }
    }
    ctx->pc = 0x2A4CA8u;
label_2a4ca8:
    // 0x2a4ca8: 0x93839a20  lbu         $v1, -0x65E0($gp)
    ctx->pc = 0x2a4ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941216)));
    // 0x2a4cac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4CACu;
    {
        const bool branch_taken_0x2a4cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cac) {
            ctx->pc = 0x2A4CE0u;
            goto label_2a4ce0;
        }
    }
    ctx->pc = 0x2A4CB4u;
    // 0x2a4cb4: 0x8f839a28  lw          $v1, -0x65D8($gp)
    ctx->pc = 0x2a4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4cb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4CB8u;
    {
        const bool branch_taken_0x2a4cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cb8) {
            ctx->pc = 0x2A4CE0u;
            goto label_2a4ce0;
        }
    }
    ctx->pc = 0x2A4CC0u;
    // 0x2a4cc0: 0x8c651b2c  lw          $a1, 0x1B2C($v1)
    ctx->pc = 0x2a4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6956)));
    // 0x2a4cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cc8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A4CC8u;
    SET_GPR_U32(ctx, 31, 0x2A4CD0u);
    ctx->pc = 0x2A4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4CC8u;
            // 0x2a4ccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CD0u; }
        if (ctx->pc != 0x2A4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CD0u; }
        if (ctx->pc != 0x2A4CD0u) { return; }
    }
    ctx->pc = 0x2A4CD0u;
label_2a4cd0:
    // 0x2a4cd0: 0xc087898  jal         func_21E260
    ctx->pc = 0x2A4CD0u;
    SET_GPR_U32(ctx, 31, 0x2A4CD8u);
    ctx->pc = 0x2A4CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4CD0u;
            // 0x2a4cd4: 0x8f849a28  lw          $a0, -0x65D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CD8u; }
        if (ctx->pc != 0x2A4CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CD8u; }
        if (ctx->pc != 0x2A4CD8u) { return; }
    }
    ctx->pc = 0x2A4CD8u;
label_2a4cd8:
    // 0x2a4cd8: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2A4CD8u;
    SET_GPR_U32(ctx, 31, 0x2A4CE0u);
    ctx->pc = 0x2A4CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4CD8u;
            // 0x2a4cdc: 0x8f849a28  lw          $a0, -0x65D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CE0u; }
        if (ctx->pc != 0x2A4CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4CE0u; }
        if (ctx->pc != 0x2A4CE0u) { return; }
    }
    ctx->pc = 0x2A4CE0u;
label_2a4ce0:
    // 0x2a4ce0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a4ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4ce4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a4ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4ce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a4ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4cec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4CF8u;
            // 0x2a4cfc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4D00u;
}
