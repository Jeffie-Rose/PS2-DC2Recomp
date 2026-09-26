#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HumanGunMoveIF__12CActionCharaFPcPc
// Address: 0x16daa0 - 0x16dd80
void HumanGunMoveIF__12CActionCharaFPcPc_0x16daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HumanGunMoveIF__12CActionCharaFPcPc_0x16daa0");
#endif

    switch (ctx->pc) {
        case 0x16daa0u: goto label_16daa0;
        case 0x16daa4u: goto label_16daa4;
        case 0x16daa8u: goto label_16daa8;
        case 0x16daacu: goto label_16daac;
        case 0x16dab0u: goto label_16dab0;
        case 0x16dab4u: goto label_16dab4;
        case 0x16dab8u: goto label_16dab8;
        case 0x16dabcu: goto label_16dabc;
        case 0x16dac0u: goto label_16dac0;
        case 0x16dac4u: goto label_16dac4;
        case 0x16dac8u: goto label_16dac8;
        case 0x16daccu: goto label_16dacc;
        case 0x16dad0u: goto label_16dad0;
        case 0x16dad4u: goto label_16dad4;
        case 0x16dad8u: goto label_16dad8;
        case 0x16dadcu: goto label_16dadc;
        case 0x16dae0u: goto label_16dae0;
        case 0x16dae4u: goto label_16dae4;
        case 0x16dae8u: goto label_16dae8;
        case 0x16daecu: goto label_16daec;
        case 0x16daf0u: goto label_16daf0;
        case 0x16daf4u: goto label_16daf4;
        case 0x16daf8u: goto label_16daf8;
        case 0x16dafcu: goto label_16dafc;
        case 0x16db00u: goto label_16db00;
        case 0x16db04u: goto label_16db04;
        case 0x16db08u: goto label_16db08;
        case 0x16db0cu: goto label_16db0c;
        case 0x16db10u: goto label_16db10;
        case 0x16db14u: goto label_16db14;
        case 0x16db18u: goto label_16db18;
        case 0x16db1cu: goto label_16db1c;
        case 0x16db20u: goto label_16db20;
        case 0x16db24u: goto label_16db24;
        case 0x16db28u: goto label_16db28;
        case 0x16db2cu: goto label_16db2c;
        case 0x16db30u: goto label_16db30;
        case 0x16db34u: goto label_16db34;
        case 0x16db38u: goto label_16db38;
        case 0x16db3cu: goto label_16db3c;
        case 0x16db40u: goto label_16db40;
        case 0x16db44u: goto label_16db44;
        case 0x16db48u: goto label_16db48;
        case 0x16db4cu: goto label_16db4c;
        case 0x16db50u: goto label_16db50;
        case 0x16db54u: goto label_16db54;
        case 0x16db58u: goto label_16db58;
        case 0x16db5cu: goto label_16db5c;
        case 0x16db60u: goto label_16db60;
        case 0x16db64u: goto label_16db64;
        case 0x16db68u: goto label_16db68;
        case 0x16db6cu: goto label_16db6c;
        case 0x16db70u: goto label_16db70;
        case 0x16db74u: goto label_16db74;
        case 0x16db78u: goto label_16db78;
        case 0x16db7cu: goto label_16db7c;
        case 0x16db80u: goto label_16db80;
        case 0x16db84u: goto label_16db84;
        case 0x16db88u: goto label_16db88;
        case 0x16db8cu: goto label_16db8c;
        case 0x16db90u: goto label_16db90;
        case 0x16db94u: goto label_16db94;
        case 0x16db98u: goto label_16db98;
        case 0x16db9cu: goto label_16db9c;
        case 0x16dba0u: goto label_16dba0;
        case 0x16dba4u: goto label_16dba4;
        case 0x16dba8u: goto label_16dba8;
        case 0x16dbacu: goto label_16dbac;
        case 0x16dbb0u: goto label_16dbb0;
        case 0x16dbb4u: goto label_16dbb4;
        case 0x16dbb8u: goto label_16dbb8;
        case 0x16dbbcu: goto label_16dbbc;
        case 0x16dbc0u: goto label_16dbc0;
        case 0x16dbc4u: goto label_16dbc4;
        case 0x16dbc8u: goto label_16dbc8;
        case 0x16dbccu: goto label_16dbcc;
        case 0x16dbd0u: goto label_16dbd0;
        case 0x16dbd4u: goto label_16dbd4;
        case 0x16dbd8u: goto label_16dbd8;
        case 0x16dbdcu: goto label_16dbdc;
        case 0x16dbe0u: goto label_16dbe0;
        case 0x16dbe4u: goto label_16dbe4;
        case 0x16dbe8u: goto label_16dbe8;
        case 0x16dbecu: goto label_16dbec;
        case 0x16dbf0u: goto label_16dbf0;
        case 0x16dbf4u: goto label_16dbf4;
        case 0x16dbf8u: goto label_16dbf8;
        case 0x16dbfcu: goto label_16dbfc;
        case 0x16dc00u: goto label_16dc00;
        case 0x16dc04u: goto label_16dc04;
        case 0x16dc08u: goto label_16dc08;
        case 0x16dc0cu: goto label_16dc0c;
        case 0x16dc10u: goto label_16dc10;
        case 0x16dc14u: goto label_16dc14;
        case 0x16dc18u: goto label_16dc18;
        case 0x16dc1cu: goto label_16dc1c;
        case 0x16dc20u: goto label_16dc20;
        case 0x16dc24u: goto label_16dc24;
        case 0x16dc28u: goto label_16dc28;
        case 0x16dc2cu: goto label_16dc2c;
        case 0x16dc30u: goto label_16dc30;
        case 0x16dc34u: goto label_16dc34;
        case 0x16dc38u: goto label_16dc38;
        case 0x16dc3cu: goto label_16dc3c;
        case 0x16dc40u: goto label_16dc40;
        case 0x16dc44u: goto label_16dc44;
        case 0x16dc48u: goto label_16dc48;
        case 0x16dc4cu: goto label_16dc4c;
        case 0x16dc50u: goto label_16dc50;
        case 0x16dc54u: goto label_16dc54;
        case 0x16dc58u: goto label_16dc58;
        case 0x16dc5cu: goto label_16dc5c;
        case 0x16dc60u: goto label_16dc60;
        case 0x16dc64u: goto label_16dc64;
        case 0x16dc68u: goto label_16dc68;
        case 0x16dc6cu: goto label_16dc6c;
        case 0x16dc70u: goto label_16dc70;
        case 0x16dc74u: goto label_16dc74;
        case 0x16dc78u: goto label_16dc78;
        case 0x16dc7cu: goto label_16dc7c;
        case 0x16dc80u: goto label_16dc80;
        case 0x16dc84u: goto label_16dc84;
        case 0x16dc88u: goto label_16dc88;
        case 0x16dc8cu: goto label_16dc8c;
        case 0x16dc90u: goto label_16dc90;
        case 0x16dc94u: goto label_16dc94;
        case 0x16dc98u: goto label_16dc98;
        case 0x16dc9cu: goto label_16dc9c;
        case 0x16dca0u: goto label_16dca0;
        case 0x16dca4u: goto label_16dca4;
        case 0x16dca8u: goto label_16dca8;
        case 0x16dcacu: goto label_16dcac;
        case 0x16dcb0u: goto label_16dcb0;
        case 0x16dcb4u: goto label_16dcb4;
        case 0x16dcb8u: goto label_16dcb8;
        case 0x16dcbcu: goto label_16dcbc;
        case 0x16dcc0u: goto label_16dcc0;
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dcc8u: goto label_16dcc8;
        case 0x16dcccu: goto label_16dccc;
        case 0x16dcd0u: goto label_16dcd0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcd8u: goto label_16dcd8;
        case 0x16dcdcu: goto label_16dcdc;
        case 0x16dce0u: goto label_16dce0;
        case 0x16dce4u: goto label_16dce4;
        case 0x16dce8u: goto label_16dce8;
        case 0x16dcecu: goto label_16dcec;
        case 0x16dcf0u: goto label_16dcf0;
        case 0x16dcf4u: goto label_16dcf4;
        case 0x16dcf8u: goto label_16dcf8;
        case 0x16dcfcu: goto label_16dcfc;
        case 0x16dd00u: goto label_16dd00;
        case 0x16dd04u: goto label_16dd04;
        case 0x16dd08u: goto label_16dd08;
        case 0x16dd0cu: goto label_16dd0c;
        case 0x16dd10u: goto label_16dd10;
        case 0x16dd14u: goto label_16dd14;
        case 0x16dd18u: goto label_16dd18;
        case 0x16dd1cu: goto label_16dd1c;
        case 0x16dd20u: goto label_16dd20;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd28u: goto label_16dd28;
        case 0x16dd2cu: goto label_16dd2c;
        case 0x16dd30u: goto label_16dd30;
        case 0x16dd34u: goto label_16dd34;
        case 0x16dd38u: goto label_16dd38;
        case 0x16dd3cu: goto label_16dd3c;
        case 0x16dd40u: goto label_16dd40;
        case 0x16dd44u: goto label_16dd44;
        case 0x16dd48u: goto label_16dd48;
        case 0x16dd4cu: goto label_16dd4c;
        case 0x16dd50u: goto label_16dd50;
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd58u: goto label_16dd58;
        case 0x16dd5cu: goto label_16dd5c;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd64u: goto label_16dd64;
        case 0x16dd68u: goto label_16dd68;
        case 0x16dd6cu: goto label_16dd6c;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd74u: goto label_16dd74;
        case 0x16dd78u: goto label_16dd78;
        case 0x16dd7cu: goto label_16dd7c;
        default: break;
    }

    ctx->pc = 0x16daa0u;

label_16daa0:
    // 0x16daa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16daa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_16daa4:
    // 0x16daa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16daa8:
    // 0x16daa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16daac:
    // 0x16daac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16dab0:
    // 0x16dab0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16dab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16dab4:
    // 0x16dab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16dab8:
    // 0x16dab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dabc:
    // 0x16dabc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16dabcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16dac0:
    // 0x16dac0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x16dac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16dac4:
    // 0x16dac4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16dac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16dac8:
    // 0x16dac8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16dac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16dacc:
    // 0x16dacc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16daccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16dad0:
    // 0x16dad0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16dad4:
    // 0x16dad4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16dad8:
    // 0x16dad8: 0x320f809  jalr        $t9
label_16dadc:
    if (ctx->pc == 0x16DADCu) {
        ctx->pc = 0x16DADCu;
            // 0x16dadc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16DAE0u;
        goto label_16dae0;
    }
    ctx->pc = 0x16DAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DAE0u);
        ctx->pc = 0x16DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAD8u;
            // 0x16dadc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DAE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DAE0u; }
            if (ctx->pc != 0x16DAE0u) { return; }
        }
        }
    }
    ctx->pc = 0x16DAE0u;
label_16dae0:
    // 0x16dae0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16dae4:
    // 0x16dae4: 0xc041c5c  jal         func_107170
label_16dae8:
    if (ctx->pc == 0x16DAE8u) {
        ctx->pc = 0x16DAE8u;
            // 0x16dae8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16DAECu;
        goto label_16daec;
    }
    ctx->pc = 0x16DAE4u;
    SET_GPR_U32(ctx, 31, 0x16DAECu);
    ctx->pc = 0x16DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAE4u;
            // 0x16dae8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAECu; }
        if (ctx->pc != 0x16DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAECu; }
        if (ctx->pc != 0x16DAECu) { return; }
    }
    ctx->pc = 0x16DAECu;
label_16daec:
    // 0x16daec: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16daecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16daf0:
    // 0x16daf0: 0xc04c678  jal         func_1319E0
label_16daf4:
    if (ctx->pc == 0x16DAF4u) {
        ctx->pc = 0x16DAF4u;
            // 0x16daf4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16DAF8u;
        goto label_16daf8;
    }
    ctx->pc = 0x16DAF0u;
    SET_GPR_U32(ctx, 31, 0x16DAF8u);
    ctx->pc = 0x16DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAF0u;
            // 0x16daf4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAF8u; }
        if (ctx->pc != 0x16DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAF8u; }
        if (ctx->pc != 0x16DAF8u) { return; }
    }
    ctx->pc = 0x16DAF8u;
label_16daf8:
    // 0x16daf8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16dafc:
    // 0x16dafc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16dafcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16db00:
    // 0x16db00: 0xc052cc0  jal         func_14B300
label_16db04:
    if (ctx->pc == 0x16DB04u) {
        ctx->pc = 0x16DB04u;
            // 0x16db04: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16DB08u;
        goto label_16db08;
    }
    ctx->pc = 0x16DB00u;
    SET_GPR_U32(ctx, 31, 0x16DB08u);
    ctx->pc = 0x16DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB00u;
            // 0x16db04: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB08u; }
        if (ctx->pc != 0x16DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB08u; }
        if (ctx->pc != 0x16DB08u) { return; }
    }
    ctx->pc = 0x16DB08u;
label_16db08:
    // 0x16db08: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16db0c:
    // 0x16db0c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16db0cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16db10:
    // 0x16db10: 0xc052cd0  jal         func_14B340
label_16db14:
    if (ctx->pc == 0x16DB14u) {
        ctx->pc = 0x16DB14u;
            // 0x16db14: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16DB18u;
        goto label_16db18;
    }
    ctx->pc = 0x16DB10u;
    SET_GPR_U32(ctx, 31, 0x16DB18u);
    ctx->pc = 0x16DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB10u;
            // 0x16db14: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB18u; }
        if (ctx->pc != 0x16DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB18u; }
        if (ctx->pc != 0x16DB18u) { return; }
    }
    ctx->pc = 0x16DB18u;
label_16db18:
    // 0x16db18: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16db18u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16db1c:
    // 0x16db1c: 0xc047964  jal         func_11E590
label_16db20:
    if (ctx->pc == 0x16DB20u) {
        ctx->pc = 0x16DB20u;
            // 0x16db20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DB24u;
        goto label_16db24;
    }
    ctx->pc = 0x16DB1Cu;
    SET_GPR_U32(ctx, 31, 0x16DB24u);
    ctx->pc = 0x16DB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB1Cu;
            // 0x16db20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB24u; }
        if (ctx->pc != 0x16DB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB24u; }
        if (ctx->pc != 0x16DB24u) { return; }
    }
    ctx->pc = 0x16DB24u;
label_16db24:
    // 0x16db24: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16db24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16db28:
    // 0x16db28: 0xc047a42  jal         func_11E908
label_16db2c:
    if (ctx->pc == 0x16DB2Cu) {
        ctx->pc = 0x16DB2Cu;
            // 0x16db2c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DB30u;
        goto label_16db30;
    }
    ctx->pc = 0x16DB28u;
    SET_GPR_U32(ctx, 31, 0x16DB30u);
    ctx->pc = 0x16DB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB28u;
            // 0x16db2c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB30u; }
        if (ctx->pc != 0x16DB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB30u; }
        if (ctx->pc != 0x16DB30u) { return; }
    }
    ctx->pc = 0x16DB30u;
label_16db30:
    // 0x16db30: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16db30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16db34:
    // 0x16db34: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16db34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16db38:
    // 0x16db38: 0xc047a42  jal         func_11E908
label_16db3c:
    if (ctx->pc == 0x16DB3Cu) {
        ctx->pc = 0x16DB3Cu;
            // 0x16db3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DB40u;
        goto label_16db40;
    }
    ctx->pc = 0x16DB38u;
    SET_GPR_U32(ctx, 31, 0x16DB40u);
    ctx->pc = 0x16DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB38u;
            // 0x16db3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB40u; }
        if (ctx->pc != 0x16DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB40u; }
        if (ctx->pc != 0x16DB40u) { return; }
    }
    ctx->pc = 0x16DB40u;
label_16db40:
    // 0x16db40: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16db40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16db44:
    // 0x16db44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16db44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16db48:
    // 0x16db48: 0xc047964  jal         func_11E590
label_16db4c:
    if (ctx->pc == 0x16DB4Cu) {
        ctx->pc = 0x16DB4Cu;
            // 0x16db4c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16DB50u;
        goto label_16db50;
    }
    ctx->pc = 0x16DB48u;
    SET_GPR_U32(ctx, 31, 0x16DB50u);
    ctx->pc = 0x16DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB48u;
            // 0x16db4c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB50u; }
        if (ctx->pc != 0x16DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB50u; }
        if (ctx->pc != 0x16DB50u) { return; }
    }
    ctx->pc = 0x16DB50u;
label_16db50:
    // 0x16db50: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x16db50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16db54:
    // 0x16db54: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x16db54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_16db58:
    // 0x16db58: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x16db58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_16db5c:
    // 0x16db5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16db60:
    // 0x16db60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16db64:
    // 0x16db64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16db68:
    // 0x16db68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16db68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16db6c:
    // 0x16db6c: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x16db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16db70:
    // 0x16db70: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x16db70u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_16db74:
    // 0x16db74: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16db74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16db78:
    // 0x16db78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16db78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16db7c:
    // 0x16db7c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x16db7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_16db80:
    // 0x16db80: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16db80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16db84:
    // 0x16db84: 0x0  nop
    ctx->pc = 0x16db84u;
    // NOP
label_16db88:
    // 0x16db88: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x16db88u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_16db8c:
    // 0x16db8c: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x16db8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_16db90:
    // 0x16db90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16db90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16db94:
    // 0x16db94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x16db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_16db98:
    // 0x16db98: 0x46151802  mul.s       $f0, $f3, $f21
    ctx->pc = 0x16db98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_16db9c:
    // 0x16db9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16db9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16dba0:
    // 0x16dba0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x16dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_16dba4:
    // 0x16dba4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16dba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dba8:
    // 0x16dba8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16dba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16dbac:
    // 0x16dbac: 0x320f809  jalr        $t9
label_16dbb0:
    if (ctx->pc == 0x16DBB0u) {
        ctx->pc = 0x16DBB0u;
            // 0x16dbb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DBB4u;
        goto label_16dbb4;
    }
    ctx->pc = 0x16DBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DBB4u);
        ctx->pc = 0x16DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBACu;
            // 0x16dbb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DBB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DBB4u; }
            if (ctx->pc != 0x16DBB4u) { return; }
        }
        }
    }
    ctx->pc = 0x16DBB4u;
label_16dbb4:
    // 0x16dbb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16dbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16dbb8:
    // 0x16dbb8: 0x0  nop
    ctx->pc = 0x16dbb8u;
    // NOP
label_16dbbc:
    // 0x16dbbc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16dbbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16dbc0:
    // 0x16dbc0: 0x0  nop
    ctx->pc = 0x16dbc0u;
    // NOP
label_16dbc4:
    // 0x16dbc4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16dbc8:
    if (ctx->pc == 0x16DBC8u) {
        ctx->pc = 0x16DBCCu;
        goto label_16dbcc;
    }
    ctx->pc = 0x16DBC4u;
    {
        const bool branch_taken_0x16dbc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dbc4) {
            ctx->pc = 0x16DBDCu;
            goto label_16dbdc;
        }
    }
    ctx->pc = 0x16DBCCu;
label_16dbcc:
    // 0x16dbcc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16dbccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16dbd0:
    // 0x16dbd0: 0x0  nop
    ctx->pc = 0x16dbd0u;
    // NOP
label_16dbd4:
    // 0x16dbd4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16dbd8:
    if (ctx->pc == 0x16DBD8u) {
        ctx->pc = 0x16DBD8u;
            // 0x16dbd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DBDCu;
        goto label_16dbdc;
    }
    ctx->pc = 0x16DBD4u;
    {
        const bool branch_taken_0x16dbd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBD4u;
            // 0x16dbd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbd4) {
            ctx->pc = 0x16DBE4u;
            goto label_16dbe4;
        }
    }
    ctx->pc = 0x16DBDCu;
label_16dbdc:
    // 0x16dbdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_16dbe0:
    if (ctx->pc == 0x16DBE0u) {
        ctx->pc = 0x16DBE0u;
            // 0x16dbe0: 0xa220076d  sb          $zero, 0x76D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16DBE4u;
        goto label_16dbe4;
    }
    ctx->pc = 0x16DBDCu;
    {
        const bool branch_taken_0x16dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBDCu;
            // 0x16dbe0: 0xa220076d  sb          $zero, 0x76D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbdc) {
            ctx->pc = 0x16DBE8u;
            goto label_16dbe8;
        }
    }
    ctx->pc = 0x16DBE4u;
label_16dbe4:
    // 0x16dbe4: 0xa222076d  sb          $v0, 0x76D($s1)
    ctx->pc = 0x16dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 2));
label_16dbe8:
    // 0x16dbe8: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16dbe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16dbec:
    // 0x16dbec: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_16dbf0:
    if (ctx->pc == 0x16DBF0u) {
        ctx->pc = 0x16DBF4u;
        goto label_16dbf4;
    }
    ctx->pc = 0x16DBECu;
    {
        const bool branch_taken_0x16dbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbec) {
            ctx->pc = 0x16DCC0u;
            goto label_16dcc0;
        }
    }
    ctx->pc = 0x16DBF4u;
label_16dbf4:
    // 0x16dbf4: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16dbf8:
    // 0x16dbf8: 0xc0a0ed8  jal         func_283B60
label_16dbfc:
    if (ctx->pc == 0x16DBFCu) {
        ctx->pc = 0x16DBFCu;
            // 0x16dbfc: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16DC00u;
        goto label_16dc00;
    }
    ctx->pc = 0x16DBF8u;
    SET_GPR_U32(ctx, 31, 0x16DC00u);
    ctx->pc = 0x16DBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBF8u;
            // 0x16dbfc: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC00u; }
        if (ctx->pc != 0x16DC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC00u; }
        if (ctx->pc != 0x16DC00u) { return; }
    }
    ctx->pc = 0x16DC00u;
label_16dc00:
    // 0x16dc00: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_16dc04:
    if (ctx->pc == 0x16DC04u) {
        ctx->pc = 0x16DC04u;
            // 0x16dc04: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16DC08u;
        goto label_16dc08;
    }
    ctx->pc = 0x16DC00u;
    {
        const bool branch_taken_0x16dc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC00u;
            // 0x16dc04: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc00) {
            ctx->pc = 0x16DD44u;
            goto label_16dd44;
        }
    }
    ctx->pc = 0x16DC08u;
label_16dc08:
    // 0x16dc08: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16dc08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16dc0c:
    // 0x16dc0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16dc10:
    // 0x16dc10: 0x1483004b  bne         $a0, $v1, . + 4 + (0x4B << 2)
label_16dc14:
    if (ctx->pc == 0x16DC14u) {
        ctx->pc = 0x16DC14u;
            // 0x16dc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DC18u;
        goto label_16dc18;
    }
    ctx->pc = 0x16DC10u;
    {
        const bool branch_taken_0x16dc10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC10u;
            // 0x16dc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc10) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DC18u;
label_16dc18:
    // 0x16dc18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16dc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dc1c:
    // 0x16dc1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dc20:
    // 0x16dc20: 0xc05d420  jal         func_175080
label_16dc24:
    if (ctx->pc == 0x16DC24u) {
        ctx->pc = 0x16DC24u;
            // 0x16dc24: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16DC28u;
        goto label_16dc28;
    }
    ctx->pc = 0x16DC20u;
    SET_GPR_U32(ctx, 31, 0x16DC28u);
    ctx->pc = 0x16DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC20u;
            // 0x16dc24: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC28u; }
        if (ctx->pc != 0x16DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC28u; }
        if (ctx->pc != 0x16DC28u) { return; }
    }
    ctx->pc = 0x16DC28u;
label_16dc28:
    // 0x16dc28: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x16dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16dc2c:
    // 0x16dc2c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x16dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16dc30:
    // 0x16dc30: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16dc34:
    // 0x16dc34: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16dc38:
    // 0x16dc38: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16dc38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16dc3c:
    // 0x16dc3c: 0xc047c76  jal         func_11F1D8
label_16dc40:
    if (ctx->pc == 0x16DC40u) {
        ctx->pc = 0x16DC40u;
            // 0x16dc40: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16DC44u;
        goto label_16dc44;
    }
    ctx->pc = 0x16DC3Cu;
    SET_GPR_U32(ctx, 31, 0x16DC44u);
    ctx->pc = 0x16DC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC3Cu;
            // 0x16dc40: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC44u; }
        if (ctx->pc != 0x16DC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC44u; }
        if (ctx->pc != 0x16DC44u) { return; }
    }
    ctx->pc = 0x16DC44u;
label_16dc44:
    // 0x16dc44: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16dc48:
    // 0x16dc48: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16dc4c:
    // 0x16dc4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16dc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16dc50:
    // 0x16dc50: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x16dc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_16dc54:
    // 0x16dc54: 0xc072408  jal         func_1C9020
label_16dc58:
    if (ctx->pc == 0x16DC58u) {
        ctx->pc = 0x16DC58u;
            // 0x16dc58: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16DC5Cu;
        goto label_16dc5c;
    }
    ctx->pc = 0x16DC54u;
    SET_GPR_U32(ctx, 31, 0x16DC5Cu);
    ctx->pc = 0x16DC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC54u;
            // 0x16dc58: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC5Cu; }
        if (ctx->pc != 0x16DC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC5Cu; }
        if (ctx->pc != 0x16DC5Cu) { return; }
    }
    ctx->pc = 0x16DC5Cu;
label_16dc5c:
    // 0x16dc5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dc60:
    // 0x16dc60: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x16dc60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_16dc64:
    // 0x16dc64: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16dc64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16dc68:
    // 0x16dc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dc6c:
    // 0x16dc6c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16dc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16dc70:
    // 0x16dc70: 0x320f809  jalr        $t9
label_16dc74:
    if (ctx->pc == 0x16DC74u) {
        ctx->pc = 0x16DC74u;
            // 0x16dc74: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16DC78u;
        goto label_16dc78;
    }
    ctx->pc = 0x16DC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DC78u);
        ctx->pc = 0x16DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC70u;
            // 0x16dc74: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DC78u; }
            if (ctx->pc != 0x16DC78u) { return; }
        }
        }
    }
    ctx->pc = 0x16DC78u;
label_16dc78:
    // 0x16dc78: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x16dc78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_16dc7c:
    // 0x16dc7c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16dc7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16dc80:
    // 0x16dc80: 0x0  nop
    ctx->pc = 0x16dc80u;
    // NOP
label_16dc84:
    // 0x16dc84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16dc88:
    if (ctx->pc == 0x16DC88u) {
        ctx->pc = 0x16DC8Cu;
        goto label_16dc8c;
    }
    ctx->pc = 0x16DC84u;
    {
        const bool branch_taken_0x16dc84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dc84) {
            ctx->pc = 0x16DC9Cu;
            goto label_16dc9c;
        }
    }
    ctx->pc = 0x16DC8Cu;
label_16dc8c:
    // 0x16dc8c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16dc8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16dc90:
    // 0x16dc90: 0x0  nop
    ctx->pc = 0x16dc90u;
    // NOP
label_16dc94:
    // 0x16dc94: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
label_16dc98:
    if (ctx->pc == 0x16DC98u) {
        ctx->pc = 0x16DC9Cu;
        goto label_16dc9c;
    }
    ctx->pc = 0x16DC94u;
    {
        const bool branch_taken_0x16dc94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dc94) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DC9Cu;
label_16dc9c:
    // 0x16dc9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16dc9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dca0:
    // 0x16dca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16dca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dca4:
    // 0x16dca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dca8:
    // 0x16dca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dcac:
    // 0x16dcac: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16dcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16dcb0:
    // 0x16dcb0: 0x320f809  jalr        $t9
label_16dcb4:
    if (ctx->pc == 0x16DCB4u) {
        ctx->pc = 0x16DCB4u;
            // 0x16dcb4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DCB8u;
        goto label_16dcb8;
    }
    ctx->pc = 0x16DCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DCB8u);
        ctx->pc = 0x16DCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCB0u;
            // 0x16dcb4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DCB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DCB8u; }
            if (ctx->pc != 0x16DCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x16DCB8u;
label_16dcb8:
    // 0x16dcb8: 0x10000021  b           . + 4 + (0x21 << 2)
label_16dcbc:
    if (ctx->pc == 0x16DCBCu) {
        ctx->pc = 0x16DCC0u;
        goto label_16dcc0;
    }
    ctx->pc = 0x16DCB8u;
    {
        const bool branch_taken_0x16dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dcb8) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DCC0u;
label_16dcc0:
    // 0x16dcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16dcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16dcc4:
    // 0x16dcc4: 0x0  nop
    ctx->pc = 0x16dcc4u;
    // NOP
label_16dcc8:
    // 0x16dcc8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16dcc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16dccc:
    // 0x16dccc: 0x0  nop
    ctx->pc = 0x16dcccu;
    // NOP
label_16dcd0:
    // 0x16dcd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16dcd4:
    if (ctx->pc == 0x16DCD4u) {
        ctx->pc = 0x16DCD4u;
            // 0x16dcd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16DCD8u;
        goto label_16dcd8;
    }
    ctx->pc = 0x16DCD0u;
    {
        const bool branch_taken_0x16dcd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCD0u;
            // 0x16dcd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcd0) {
            ctx->pc = 0x16DCE8u;
            goto label_16dce8;
        }
    }
    ctx->pc = 0x16DCD8u;
label_16dcd8:
    // 0x16dcd8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16dcd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16dcdc:
    // 0x16dcdc: 0x0  nop
    ctx->pc = 0x16dcdcu;
    // NOP
label_16dce0:
    // 0x16dce0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_16dce4:
    if (ctx->pc == 0x16DCE4u) {
        ctx->pc = 0x16DCE8u;
        goto label_16dce8;
    }
    ctx->pc = 0x16DCE0u;
    {
        const bool branch_taken_0x16dce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dce0) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DCE8u;
label_16dce8:
    // 0x16dce8: 0xc047c76  jal         func_11F1D8
label_16dcec:
    if (ctx->pc == 0x16DCECu) {
        ctx->pc = 0x16DCECu;
            // 0x16dcec: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DCF0u;
        goto label_16dcf0;
    }
    ctx->pc = 0x16DCE8u;
    SET_GPR_U32(ctx, 31, 0x16DCF0u);
    ctx->pc = 0x16DCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCE8u;
            // 0x16dcec: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCF0u; }
        if (ctx->pc != 0x16DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCF0u; }
        if (ctx->pc != 0x16DCF0u) { return; }
    }
    ctx->pc = 0x16DCF0u;
label_16dcf0:
    // 0x16dcf0: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16dcf4:
    // 0x16dcf4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16dcf8:
    // 0x16dcf8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16dcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16dcfc:
    // 0x16dcfc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16dcfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16dd00:
    // 0x16dd00: 0xc072408  jal         func_1C9020
label_16dd04:
    if (ctx->pc == 0x16DD04u) {
        ctx->pc = 0x16DD04u;
            // 0x16dd04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16DD08u;
        goto label_16dd08;
    }
    ctx->pc = 0x16DD00u;
    SET_GPR_U32(ctx, 31, 0x16DD08u);
    ctx->pc = 0x16DD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD00u;
            // 0x16dd04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD08u; }
        if (ctx->pc != 0x16DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD08u; }
        if (ctx->pc != 0x16DD08u) { return; }
    }
    ctx->pc = 0x16DD08u;
label_16dd08:
    // 0x16dd08: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16dd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dd0c:
    // 0x16dd0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16dd0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16dd10:
    // 0x16dd10: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16dd10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16dd14:
    // 0x16dd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dd18:
    // 0x16dd18: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16dd1c:
    // 0x16dd1c: 0x320f809  jalr        $t9
label_16dd20:
    if (ctx->pc == 0x16DD20u) {
        ctx->pc = 0x16DD20u;
            // 0x16dd20: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16DD24u;
        goto label_16dd24;
    }
    ctx->pc = 0x16DD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DD24u);
        ctx->pc = 0x16DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD1Cu;
            // 0x16dd20: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DD24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DD24u; }
            if (ctx->pc != 0x16DD24u) { return; }
        }
        }
    }
    ctx->pc = 0x16DD24u;
label_16dd24:
    // 0x16dd24: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dd28:
    // 0x16dd28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16dd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dd2c:
    // 0x16dd2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dd30:
    // 0x16dd30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dd34:
    // 0x16dd34: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16dd38:
    // 0x16dd38: 0x320f809  jalr        $t9
label_16dd3c:
    if (ctx->pc == 0x16DD3Cu) {
        ctx->pc = 0x16DD3Cu;
            // 0x16dd3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DD40u;
        goto label_16dd40;
    }
    ctx->pc = 0x16DD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DD40u);
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD38u;
            // 0x16dd3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DD40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DD40u; }
            if (ctx->pc != 0x16DD40u) { return; }
        }
        }
    }
    ctx->pc = 0x16DD40u;
label_16dd40:
    // 0x16dd40: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_16dd44:
    // 0x16dd44: 0xc041c5c  jal         func_107170
label_16dd48:
    if (ctx->pc == 0x16DD48u) {
        ctx->pc = 0x16DD48u;
            // 0x16dd48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16DD4Cu;
        goto label_16dd4c;
    }
    ctx->pc = 0x16DD44u;
    SET_GPR_U32(ctx, 31, 0x16DD4Cu);
    ctx->pc = 0x16DD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD44u;
            // 0x16dd48: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD4Cu; }
        if (ctx->pc != 0x16DD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD4Cu; }
        if (ctx->pc != 0x16DD4Cu) { return; }
    }
    ctx->pc = 0x16DD4Cu;
label_16dd4c:
    // 0x16dd4c: 0xc05b1e8  jal         func_16C7A0
label_16dd50:
    if (ctx->pc == 0x16DD50u) {
        ctx->pc = 0x16DD50u;
            // 0x16dd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DD54u;
        goto label_16dd54;
    }
    ctx->pc = 0x16DD4Cu;
    SET_GPR_U32(ctx, 31, 0x16DD54u);
    ctx->pc = 0x16DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD4Cu;
            // 0x16dd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD54u; }
        if (ctx->pc != 0x16DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD54u; }
        if (ctx->pc != 0x16DD54u) { return; }
    }
    ctx->pc = 0x16DD54u;
label_16dd54:
    // 0x16dd54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16dd58:
    // 0x16dd58: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16dd5c:
    // 0x16dd5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16dd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16dd60:
    // 0x16dd60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16dd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16dd64:
    // 0x16dd64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16dd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16dd68:
    // 0x16dd68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16dd6c:
    // 0x16dd6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16dd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16dd70:
    // 0x16dd70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16dd74:
    // 0x16dd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dd78:
    // 0x16dd78: 0x3e00008  jr          $ra
label_16dd7c:
    if (ctx->pc == 0x16DD7Cu) {
        ctx->pc = 0x16DD7Cu;
            // 0x16dd7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16DD80u;
        goto label_fallthrough_0x16dd78;
    }
    ctx->pc = 0x16DD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD78u;
            // 0x16dd7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16dd78:
    ctx->pc = 0x16DD80u;
}
