#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRoboUnitStatusBord__Ff
// Address: 0x1bd6c0 - 0x1bdf44
void DrawRoboUnitStatusBord__Ff_0x1bd6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRoboUnitStatusBord__Ff_0x1bd6c0");
#endif

    switch (ctx->pc) {
        case 0x1bd724u: goto label_1bd724;
        case 0x1bd72cu: goto label_1bd72c;
        case 0x1bd738u: goto label_1bd738;
        case 0x1bd744u: goto label_1bd744;
        case 0x1bd758u: goto label_1bd758;
        case 0x1bd7ecu: goto label_1bd7ec;
        case 0x1bd834u: goto label_1bd834;
        case 0x1bd860u: goto label_1bd860;
        case 0x1bd894u: goto label_1bd894;
        case 0x1bd89cu: goto label_1bd89c;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8b4u: goto label_1bd8b4;
        case 0x1bd8c0u: goto label_1bd8c0;
        case 0x1bd8ccu: goto label_1bd8cc;
        case 0x1bd8d8u: goto label_1bd8d8;
        case 0x1bd8f0u: goto label_1bd8f0;
        case 0x1bd910u: goto label_1bd910;
        case 0x1bd930u: goto label_1bd930;
        case 0x1bd950u: goto label_1bd950;
        case 0x1bd968u: goto label_1bd968;
        case 0x1bd988u: goto label_1bd988;
        case 0x1bd9a0u: goto label_1bd9a0;
        case 0x1bd9c0u: goto label_1bd9c0;
        case 0x1bd9d8u: goto label_1bd9d8;
        case 0x1bd9f8u: goto label_1bd9f8;
        case 0x1bda04u: goto label_1bda04;
        case 0x1bda1cu: goto label_1bda1c;
        case 0x1bda44u: goto label_1bda44;
        case 0x1bda5cu: goto label_1bda5c;
        case 0x1bda84u: goto label_1bda84;
        case 0x1bda90u: goto label_1bda90;
        case 0x1bda98u: goto label_1bda98;
        case 0x1bdaa8u: goto label_1bdaa8;
        case 0x1bdab0u: goto label_1bdab0;
        case 0x1bdabcu: goto label_1bdabc;
        case 0x1bdac8u: goto label_1bdac8;
        case 0x1bdae0u: goto label_1bdae0;
        case 0x1bdaf0u: goto label_1bdaf0;
        case 0x1bdb18u: goto label_1bdb18;
        case 0x1bdb2cu: goto label_1bdb2c;
        case 0x1bdb3cu: goto label_1bdb3c;
        case 0x1bdb50u: goto label_1bdb50;
        case 0x1bdb60u: goto label_1bdb60;
        case 0x1bdb74u: goto label_1bdb74;
        case 0x1bdb84u: goto label_1bdb84;
        case 0x1bdb98u: goto label_1bdb98;
        case 0x1bdba0u: goto label_1bdba0;
        case 0x1bdbb0u: goto label_1bdbb0;
        case 0x1bdbb8u: goto label_1bdbb8;
        case 0x1bdbc4u: goto label_1bdbc4;
        case 0x1bdbd0u: goto label_1bdbd0;
        case 0x1bdbe8u: goto label_1bdbe8;
        case 0x1bdc18u: goto label_1bdc18;
        case 0x1bdc2cu: goto label_1bdc2c;
        case 0x1bdc40u: goto label_1bdc40;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdc64u: goto label_1bdc64;
        case 0x1bdc74u: goto label_1bdc74;
        case 0x1bdc88u: goto label_1bdc88;
        case 0x1bdc98u: goto label_1bdc98;
        case 0x1bdcacu: goto label_1bdcac;
        case 0x1bdcb4u: goto label_1bdcb4;
        case 0x1bdce4u: goto label_1bdce4;
        case 0x1bdd10u: goto label_1bdd10;
        case 0x1bdd28u: goto label_1bdd28;
        case 0x1bdd58u: goto label_1bdd58;
        case 0x1bdd84u: goto label_1bdd84;
        case 0x1bddb0u: goto label_1bddb0;
        case 0x1bddc8u: goto label_1bddc8;
        case 0x1bddf4u: goto label_1bddf4;
        case 0x1bde04u: goto label_1bde04;
        case 0x1bde14u: goto label_1bde14;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde2cu: goto label_1bde2c;
        case 0x1bde38u: goto label_1bde38;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bde5cu: goto label_1bde5c;
        case 0x1bde80u: goto label_1bde80;
        case 0x1bde88u: goto label_1bde88;
        default: break;
    }

    ctx->pc = 0x1bd6c0u;

    // 0x1bd6c0: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
    // 0x1bd6c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd6c8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1bd6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1bd6cc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1bd6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1bd6d0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1bd6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1bd6d4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1bd6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1bd6d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bd6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1bd6dc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1bd6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1bd6e0: 0x27b500dc  addiu       $s5, $sp, 0xDC
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1bd6e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1bd6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1bd6e8: 0x27b400d8  addiu       $s4, $sp, 0xD8
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1bd6ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bd6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bd6f0: 0x27b300d4  addiu       $s3, $sp, 0xD4
    ctx->pc = 0x1bd6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1bd6f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bd6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bd6f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bd6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bd6fc: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1bd6fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1bd700: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1bd700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1bd704: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bd704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bd708: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bd708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bd70c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bd710: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1bd710u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1bd714: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1bd718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd71c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD71Cu;
    SET_GPR_U32(ctx, 31, 0x1BD724u);
    ctx->pc = 0x1BD720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD71Cu;
            // 0x1bd720: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD724u; }
        if (ctx->pc != 0x1BD724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD724u; }
        if (ctx->pc != 0x1BD724u) { return; }
    }
    ctx->pc = 0x1BD724u;
label_1bd724:
    // 0x1bd724: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1BD724u;
    SET_GPR_U32(ctx, 31, 0x1BD72Cu);
    ctx->pc = 0x1BD728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD724u;
            // 0x1bd728: 0x2452ffb8  addiu       $s2, $v0, -0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD72Cu; }
        if (ctx->pc != 0x1BD72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD72Cu; }
        if (ctx->pc != 0x1BD72Cu) { return; }
    }
    ctx->pc = 0x1BD72Cu;
label_1bd72c:
    // 0x1bd72c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd730: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x1BD730u;
    SET_GPR_U32(ctx, 31, 0x1BD738u);
    ctx->pc = 0x1BD734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD730u;
            // 0x1bd734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD738u; }
        if (ctx->pc != 0x1BD738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD738u; }
        if (ctx->pc != 0x1BD738u) { return; }
    }
    ctx->pc = 0x1BD738u;
label_1bd738:
    // 0x1bd738: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bd738u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd73c: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1BD73Cu;
    SET_GPR_U32(ctx, 31, 0x1BD744u);
    ctx->pc = 0x1BD740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD73Cu;
            // 0x1bd740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD744u; }
        if (ctx->pc != 0x1BD744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD744u; }
        if (ctx->pc != 0x1BD744u) { return; }
    }
    ctx->pc = 0x1BD744u;
label_1bd744:
    // 0x1bd744: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bd744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd74c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd750: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x1BD750u;
    SET_GPR_U32(ctx, 31, 0x1BD758u);
    ctx->pc = 0x1BD754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD750u;
            // 0x1bd754: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD758u; }
        if (ctx->pc != 0x1BD758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD758u; }
        if (ctx->pc != 0x1BD758u) { return; }
    }
    ctx->pc = 0x1BD758u;
label_1bd758:
    // 0x1bd758: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1bd758u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd75c: 0x27a20364  addiu       $v0, $sp, 0x364
    ctx->pc = 0x1bd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 868));
    // 0x1bd760: 0xc7a10360  lwc1        $f1, 0x360($sp)
    ctx->pc = 0x1bd760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd764: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bd764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bd768: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1bd768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd76c: 0x44971000  mtc1        $s7, $f2
    ctx->pc = 0x1bd76cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd770: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bd770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bd774: 0x83828d6c  lb          $v0, -0x7294($gp)
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x1bd778: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd77c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bd77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bd780: 0x46021d43  div.s       $f21, $f3, $f2
    ctx->pc = 0x1bd780u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1bd784: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1bd784u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bd788: 0x0  nop
    ctx->pc = 0x1bd788u;
    // NOP
    // 0x1bd78c: 0x0  nop
    ctx->pc = 0x1bd78cu;
    // NOP
    // 0x1bd790: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD790u;
    {
        const bool branch_taken_0x1bd790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd790) {
            ctx->pc = 0x1BD7A4u;
            goto label_1bd7a4;
        }
    }
    ctx->pc = 0x1BD798u;
    // 0x1bd798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd79c: 0xaf808d68  sw          $zero, -0x7298($gp)
    ctx->pc = 0x1bd79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 0));
    // 0x1bd7a0: 0xa3828d6c  sb          $v0, -0x7294($gp)
    ctx->pc = 0x1bd7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937964), (uint8_t)GPR_U32(ctx, 2));
label_1bd7a4:
    // 0x1bd7a4: 0xc7818d68  lwc1        $f1, -0x7298($gp)
    ctx->pc = 0x1bd7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd7a8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1bd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1bd7ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bd7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd7b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1bd7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd7b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bd7b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bd7bc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1bd7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd7c0: 0x0  nop
    ctx->pc = 0x1bd7c0u;
    // NOP
    // 0x1bd7c4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD7C4u;
    {
        const bool branch_taken_0x1bd7c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7C4u;
            // 0x1bd7c8: 0xe7818d68  swc1        $f1, -0x7298($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7c4) {
            ctx->pc = 0x1BD7E4u;
            goto label_1bd7e4;
        }
    }
    ctx->pc = 0x1BD7CCu;
    // 0x1bd7cc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bd7d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bd7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd7d8: 0x0  nop
    ctx->pc = 0x1bd7d8u;
    // NOP
    // 0x1bd7dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bd7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bd7e0: 0xe7808d68  swc1        $f0, -0x7298($gp)
    ctx->pc = 0x1bd7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), bits); }
label_1bd7e4:
    // 0x1bd7e4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BD7E4u;
    SET_GPR_U32(ctx, 31, 0x1BD7ECu);
    ctx->pc = 0x1BD7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7E4u;
            // 0x1bd7e8: 0xc78c8d68  lwc1        $f12, -0x7298($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7ECu; }
        if (ctx->pc != 0x1BD7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7ECu; }
        if (ctx->pc != 0x1BD7ECu) { return; }
    }
    ctx->pc = 0x1BD7ECu;
label_1bd7ec:
    // 0x1bd7ec: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd7f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bd7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bd7f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd7f8: 0x0  nop
    ctx->pc = 0x1bd7f8u;
    // NOP
    // 0x1bd7fc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1bd7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd800: 0x0  nop
    ctx->pc = 0x1bd800u;
    // NOP
    // 0x1bd804: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1BD804u;
    {
        const bool branch_taken_0x1bd804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD804u;
            // 0x1bd808: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd804) {
            ctx->pc = 0x1BD87Cu;
            goto label_1bd87c;
        }
    }
    ctx->pc = 0x1BD80Cu;
    // 0x1bd80c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bd80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd810: 0x0  nop
    ctx->pc = 0x1bd810u;
    // NOP
    // 0x1bd814: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1bd814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd818: 0x0  nop
    ctx->pc = 0x1bd818u;
    // NOP
    // 0x1bd81c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1BD81Cu;
    {
        const bool branch_taken_0x1bd81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD81Cu;
            // 0x1bd820: 0x3c02c280  lui         $v0, 0xC280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd81c) {
            ctx->pc = 0x1BD854u;
            goto label_1bd854;
        }
    }
    ctx->pc = 0x1BD824u;
    // 0x1bd824: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1bd824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x1bd828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd82c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD82Cu;
    SET_GPR_U32(ctx, 31, 0x1BD834u);
    ctx->pc = 0x1BD830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD82Cu;
            // 0x1bd830: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD834u; }
        if (ctx->pc != 0x1BD834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD834u; }
        if (ctx->pc != 0x1BD834u) { return; }
    }
    ctx->pc = 0x1BD834u;
label_1bd834:
    // 0x1bd834: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1bd838: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd83c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1bd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1bd840: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd844: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bd844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bd848: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bd848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bd84c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BD84Cu;
    {
        const bool branch_taken_0x1bd84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD84Cu;
            // 0x1bd850: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd84c) {
            ctx->pc = 0x1BD88Cu;
            goto label_1bd88c;
        }
    }
    ctx->pc = 0x1BD854u;
label_1bd854:
    // 0x1bd854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd858: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD858u;
    SET_GPR_U32(ctx, 31, 0x1BD860u);
    ctx->pc = 0x1BD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD858u;
            // 0x1bd85c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD860u; }
        if (ctx->pc != 0x1BD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD860u; }
        if (ctx->pc != 0x1BD860u) { return; }
    }
    ctx->pc = 0x1BD860u;
label_1bd860:
    // 0x1bd860: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd864: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd868: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bd868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bd86c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bd870: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bd870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bd874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD874u;
    {
        const bool branch_taken_0x1bd874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD874u;
            // 0x1bd878: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd874) {
            ctx->pc = 0x1BD88Cu;
            goto label_1bd88c;
        }
    }
    ctx->pc = 0x1BD87Cu;
label_1bd87c:
    // 0x1bd87c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bd880: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bd880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bd884: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bd884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bd888: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1bd888u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1bd88c:
    // 0x1bd88c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BD88Cu;
    SET_GPR_U32(ctx, 31, 0x1BD894u);
    ctx->pc = 0x1BD890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD88Cu;
            // 0x1bd890: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD894u; }
        if (ctx->pc != 0x1BD894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD894u; }
        if (ctx->pc != 0x1BD894u) { return; }
    }
    ctx->pc = 0x1BD894u;
label_1bd894:
    // 0x1bd894: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BD894u;
    SET_GPR_U32(ctx, 31, 0x1BD89Cu);
    ctx->pc = 0x1BD898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD894u;
            // 0x1bd898: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD89Cu; }
        if (ctx->pc != 0x1BD89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD89Cu; }
        if (ctx->pc != 0x1BD89Cu) { return; }
    }
    ctx->pc = 0x1BD89Cu;
label_1bd89c:
    // 0x1bd89c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8a4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BD8A4u;
    SET_GPR_U32(ctx, 31, 0x1BD8ACu);
    ctx->pc = 0x1BD8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8A4u;
            // 0x1bd8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8ACu; }
        if (ctx->pc != 0x1BD8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8ACu; }
        if (ctx->pc != 0x1BD8ACu) { return; }
    }
    ctx->pc = 0x1BD8ACu;
label_1bd8ac:
    // 0x1bd8ac: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BD8ACu;
    SET_GPR_U32(ctx, 31, 0x1BD8B4u);
    ctx->pc = 0x1BD8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8ACu;
            // 0x1bd8b0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8B4u; }
        if (ctx->pc != 0x1BD8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8B4u; }
        if (ctx->pc != 0x1BD8B4u) { return; }
    }
    ctx->pc = 0x1BD8B4u;
label_1bd8b4:
    // 0x1bd8b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd8b8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BD8B8u;
    SET_GPR_U32(ctx, 31, 0x1BD8C0u);
    ctx->pc = 0x1BD8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8B8u;
            // 0x1bd8bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8C0u; }
        if (ctx->pc != 0x1BD8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8C0u; }
        if (ctx->pc != 0x1BD8C0u) { return; }
    }
    ctx->pc = 0x1BD8C0u;
label_1bd8c0:
    // 0x1bd8c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd8c4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BD8C4u;
    SET_GPR_U32(ctx, 31, 0x1BD8CCu);
    ctx->pc = 0x1BD8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8C4u;
            // 0x1bd8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8CCu; }
        if (ctx->pc != 0x1BD8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8CCu; }
        if (ctx->pc != 0x1BD8CCu) { return; }
    }
    ctx->pc = 0x1BD8CCu;
label_1bd8cc:
    // 0x1bd8cc: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bd8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bd8d0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BD8D0u;
    SET_GPR_U32(ctx, 31, 0x1BD8D8u);
    ctx->pc = 0x1BD8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8D0u;
            // 0x1bd8d4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8D8u; }
        if (ctx->pc != 0x1BD8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8D8u; }
        if (ctx->pc != 0x1BD8D8u) { return; }
    }
    ctx->pc = 0x1BD8D8u;
label_1bd8d8:
    // 0x1bd8d8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bd8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd8dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd8e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bd8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bd8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8e8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BD8E8u;
    SET_GPR_U32(ctx, 31, 0x1BD8F0u);
    ctx->pc = 0x1BD8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8E8u;
            // 0x1bd8ec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8F0u; }
        if (ctx->pc != 0x1BD8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8F0u; }
        if (ctx->pc != 0x1BD8F0u) { return; }
    }
    ctx->pc = 0x1BD8F0u;
label_1bd8f0:
    // 0x1bd8f0: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x1bd8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1bd8f4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd8f8: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1bd8fc: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x1bd8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1bd900: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1bd900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1bd904: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x1bd904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bd908: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD908u;
    SET_GPR_U32(ctx, 31, 0x1BD910u);
    ctx->pc = 0x1BD90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD908u;
            // 0x1bd90c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD910u; }
        if (ctx->pc != 0x1BD910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD910u; }
        if (ctx->pc != 0x1BD910u) { return; }
    }
    ctx->pc = 0x1BD910u;
label_1bd910:
    // 0x1bd910: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd914: 0x240500db  addiu       $a1, $zero, 0xDB
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x1bd918: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd91c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1bd91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bd920: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x1bd920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1bd924: 0x24090120  addiu       $t1, $zero, 0x120
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1bd928: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD928u;
    SET_GPR_U32(ctx, 31, 0x1BD930u);
    ctx->pc = 0x1BD92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD928u;
            // 0x1bd92c: 0x240a0092  addiu       $t2, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD930u; }
        if (ctx->pc != 0x1BD930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD930u; }
        if (ctx->pc != 0x1BD930u) { return; }
    }
    ctx->pc = 0x1BD930u;
label_1bd930:
    // 0x1bd930: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd934: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bd934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bd938: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd93c: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x1bd93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bd940: 0x2408002a  addiu       $t0, $zero, 0x2A
    ctx->pc = 0x1bd940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1bd944: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bd944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd948: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD948u;
    SET_GPR_U32(ctx, 31, 0x1BD950u);
    ctx->pc = 0x1BD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD948u;
            // 0x1bd94c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD950u; }
        if (ctx->pc != 0x1BD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD950u; }
        if (ctx->pc != 0x1BD950u) { return; }
    }
    ctx->pc = 0x1BD950u;
label_1bd950:
    // 0x1bd950: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bd954: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd958: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1bd958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bd95c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd960: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BD960u;
    SET_GPR_U32(ctx, 31, 0x1BD968u);
    ctx->pc = 0x1BD964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD960u;
            // 0x1bd964: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD968u; }
        if (ctx->pc != 0x1BD968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD968u; }
        if (ctx->pc != 0x1BD968u) { return; }
    }
    ctx->pc = 0x1BD968u;
label_1bd968:
    // 0x1bd968: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd96c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bd970: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd974: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x1bd974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1bd978: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1bd978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1bd97c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bd97cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd980: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD980u;
    SET_GPR_U32(ctx, 31, 0x1BD988u);
    ctx->pc = 0x1BD984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD980u;
            // 0x1bd984: 0x240a002a  addiu       $t2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD988u; }
        if (ctx->pc != 0x1BD988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD988u; }
        if (ctx->pc != 0x1BD988u) { return; }
    }
    ctx->pc = 0x1BD988u;
label_1bd988:
    // 0x1bd988: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bd988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd98c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd990: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bd990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd994: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bd994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd998: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BD998u;
    SET_GPR_U32(ctx, 31, 0x1BD9A0u);
    ctx->pc = 0x1BD99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD998u;
            // 0x1bd99c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9A0u; }
        if (ctx->pc != 0x1BD9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9A0u; }
        if (ctx->pc != 0x1BD9A0u) { return; }
    }
    ctx->pc = 0x1BD9A0u;
label_1bd9a0:
    // 0x1bd9a0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bd9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd9a4: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x1bd9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1bd9a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd9ac: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x1bd9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x1bd9b0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bd9b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9b4: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1bd9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bd9b8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD9B8u;
    SET_GPR_U32(ctx, 31, 0x1BD9C0u);
    ctx->pc = 0x1BD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9B8u;
            // 0x1bd9bc: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9C0u; }
        if (ctx->pc != 0x1BD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9C0u; }
        if (ctx->pc != 0x1BD9C0u) { return; }
    }
    ctx->pc = 0x1BD9C0u;
label_1bd9c0:
    // 0x1bd9c0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bd9c4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd9c8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bd9cc: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd9d0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BD9D0u;
    SET_GPR_U32(ctx, 31, 0x1BD9D8u);
    ctx->pc = 0x1BD9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9D0u;
            // 0x1bd9d4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9D8u; }
        if (ctx->pc != 0x1BD9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9D8u; }
        if (ctx->pc != 0x1BD9D8u) { return; }
    }
    ctx->pc = 0x1BD9D8u;
label_1bd9d8:
    // 0x1bd9d8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bd9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd9dc: 0x26460012  addiu       $a2, $s2, 0x12
    ctx->pc = 0x1bd9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x1bd9e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bd9e4: 0x240501a4  addiu       $a1, $zero, 0x1A4
    ctx->pc = 0x1bd9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1bd9e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bd9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9ec: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1bd9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bd9f0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD9F0u;
    SET_GPR_U32(ctx, 31, 0x1BD9F8u);
    ctx->pc = 0x1BD9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9F0u;
            // 0x1bd9f4: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9F8u; }
        if (ctx->pc != 0x1BD9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9F8u; }
        if (ctx->pc != 0x1BD9F8u) { return; }
    }
    ctx->pc = 0x1BD9F8u;
label_1bd9f8:
    // 0x1bd9f8: 0x8f858e8c  lw          $a1, -0x7174($gp)
    ctx->pc = 0x1bd9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
    // 0x1bd9fc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BD9FCu;
    SET_GPR_U32(ctx, 31, 0x1BDA04u);
    ctx->pc = 0x1BDA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9FCu;
            // 0x1bda00: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA04u; }
        if (ctx->pc != 0x1BDA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA04u; }
        if (ctx->pc != 0x1BDA04u) { return; }
    }
    ctx->pc = 0x1BDA04u;
label_1bda04:
    // 0x1bda04: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bda08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bda0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bda0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda10: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bda10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda14: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BDA14u;
    SET_GPR_U32(ctx, 31, 0x1BDA1Cu);
    ctx->pc = 0x1BDA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA14u;
            // 0x1bda18: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA1Cu; }
        if (ctx->pc != 0x1BDA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA1Cu; }
        if (ctx->pc != 0x1BDA1Cu) { return; }
    }
    ctx->pc = 0x1BDA1Cu;
label_1bda1c:
    // 0x1bda1c: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bda1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bda20: 0x26460006  addiu       $a2, $s2, 0x6
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1bda24: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1bda24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1bda28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bda2c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1bda2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1bda30: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bda34: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bda38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bda38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda3c: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BDA3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA44u);
    ctx->pc = 0x1BDA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA3Cu;
            // 0x1bda40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA44u; }
        if (ctx->pc != 0x1BDA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA44u; }
        if (ctx->pc != 0x1BDA44u) { return; }
    }
    ctx->pc = 0x1BDA44u;
label_1bda44:
    // 0x1bda44: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bda48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bda4c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1bda4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bda50: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bda50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bda54: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BDA54u;
    SET_GPR_U32(ctx, 31, 0x1BDA5Cu);
    ctx->pc = 0x1BDA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA54u;
            // 0x1bda58: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA5Cu; }
        if (ctx->pc != 0x1BDA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA5Cu; }
        if (ctx->pc != 0x1BDA5Cu) { return; }
    }
    ctx->pc = 0x1BDA5Cu;
label_1bda5c:
    // 0x1bda5c: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bda5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bda60: 0x26460006  addiu       $a2, $s2, 0x6
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1bda64: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1bda64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1bda68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bda6c: 0x240501cc  addiu       $a1, $zero, 0x1CC
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x1bda70: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bda70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bda74: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bda78: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bda7c: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA84u);
    ctx->pc = 0x1BDA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA7Cu;
            // 0x1bda80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA84u; }
        if (ctx->pc != 0x1BDA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA84u; }
        if (ctx->pc != 0x1BDA84u) { return; }
    }
    ctx->pc = 0x1BDA84u;
label_1bda84:
    // 0x1bda84: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bda88: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BDA88u;
    SET_GPR_U32(ctx, 31, 0x1BDA90u);
    ctx->pc = 0x1BDA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA88u;
            // 0x1bda8c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA90u; }
        if (ctx->pc != 0x1BDA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA90u; }
        if (ctx->pc != 0x1BDA90u) { return; }
    }
    ctx->pc = 0x1BDA90u;
label_1bda90:
    // 0x1bda90: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BDA90u;
    SET_GPR_U32(ctx, 31, 0x1BDA98u);
    ctx->pc = 0x1BDA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA90u;
            // 0x1bda94: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA98u; }
        if (ctx->pc != 0x1BDA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA98u; }
        if (ctx->pc != 0x1BDA98u) { return; }
    }
    ctx->pc = 0x1BDA98u;
label_1bda98:
    // 0x1bda98: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bda98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bda9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bda9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdaa0: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BDAA0u;
    SET_GPR_U32(ctx, 31, 0x1BDAA8u);
    ctx->pc = 0x1BDAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAA0u;
            // 0x1bdaa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAA8u; }
        if (ctx->pc != 0x1BDAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAA8u; }
        if (ctx->pc != 0x1BDAA8u) { return; }
    }
    ctx->pc = 0x1BDAA8u;
label_1bdaa8:
    // 0x1bdaa8: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BDAA8u;
    SET_GPR_U32(ctx, 31, 0x1BDAB0u);
    ctx->pc = 0x1BDAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAA8u;
            // 0x1bdaac: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAB0u; }
        if (ctx->pc != 0x1BDAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAB0u; }
        if (ctx->pc != 0x1BDAB0u) { return; }
    }
    ctx->pc = 0x1BDAB0u;
label_1bdab0:
    // 0x1bdab0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdab4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BDAB4u;
    SET_GPR_U32(ctx, 31, 0x1BDABCu);
    ctx->pc = 0x1BDAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAB4u;
            // 0x1bdab8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDABCu; }
        if (ctx->pc != 0x1BDABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDABCu; }
        if (ctx->pc != 0x1BDABCu) { return; }
    }
    ctx->pc = 0x1BDABCu;
label_1bdabc:
    // 0x1bdabc: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bdac0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BDAC0u;
    SET_GPR_U32(ctx, 31, 0x1BDAC8u);
    ctx->pc = 0x1BDAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAC0u;
            // 0x1bdac4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAC8u; }
        if (ctx->pc != 0x1BDAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAC8u; }
        if (ctx->pc != 0x1BDAC8u) { return; }
    }
    ctx->pc = 0x1BDAC8u;
label_1bdac8:
    // 0x1bdac8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bdacc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdad0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bdad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdad4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bdad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdad8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BDAD8u;
    SET_GPR_U32(ctx, 31, 0x1BDAE0u);
    ctx->pc = 0x1BDADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAD8u;
            // 0x1bdadc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAE0u; }
        if (ctx->pc != 0x1BDAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAE0u; }
        if (ctx->pc != 0x1BDAE0u) { return; }
    }
    ctx->pc = 0x1BDAE0u;
label_1bdae0:
    // 0x1bdae0: 0x3c02430d  lui         $v0, 0x430D
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17165 << 16));
    // 0x1bdae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdae8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BDAE8u;
    SET_GPR_U32(ctx, 31, 0x1BDAF0u);
    ctx->pc = 0x1BDAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAE8u;
            // 0x1bdaec: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAF0u; }
        if (ctx->pc != 0x1BDAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAF0u; }
        if (ctx->pc != 0x1BDAF0u) { return; }
    }
    ctx->pc = 0x1BDAF0u;
label_1bdaf0:
    // 0x1bdaf0: 0x2451003a  addiu       $s1, $v0, 0x3A
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x1bdaf4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1bdaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1bdaf8: 0x2a2100c5  slti        $at, $s1, 0xC5
    ctx->pc = 0x1bdaf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)197) ? 1 : 0);
    // 0x1bdafc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDAFCu;
    {
        const bool branch_taken_0x1bdafc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAFCu;
            // 0x1bdb00: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdafc) {
            ctx->pc = 0x1BDB08u;
            goto label_1bdb08;
        }
    }
    ctx->pc = 0x1BDB04u;
    // 0x1bdb04: 0x241e00c4  addiu       $fp, $zero, 0xC4
    ctx->pc = 0x1bdb04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1bdb08:
    // 0x1bdb08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb0c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bdb10: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDB10u;
    SET_GPR_U32(ctx, 31, 0x1BDB18u);
    ctx->pc = 0x1BDB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB10u;
            // 0x1bdb14: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB18u; }
        if (ctx->pc != 0x1BDB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB18u; }
        if (ctx->pc != 0x1BDB18u) { return; }
    }
    ctx->pc = 0x1BDB18u;
label_1bdb18:
    // 0x1bdb18: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1bdb1c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb20: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x1bdb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bdb24: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDB24u;
    SET_GPR_U32(ctx, 31, 0x1BDB2Cu);
    ctx->pc = 0x1BDB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB24u;
            // 0x1bdb28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB2Cu; }
        if (ctx->pc != 0x1BDB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB2Cu; }
        if (ctx->pc != 0x1BDB2Cu) { return; }
    }
    ctx->pc = 0x1BDB2Cu;
label_1bdb2c:
    // 0x1bdb2c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb30: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1bdb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bdb34: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDB34u;
    SET_GPR_U32(ctx, 31, 0x1BDB3Cu);
    ctx->pc = 0x1BDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB34u;
            // 0x1bdb38: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB3Cu; }
        if (ctx->pc != 0x1BDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB3Cu; }
        if (ctx->pc != 0x1BDB3Cu) { return; }
    }
    ctx->pc = 0x1BDB3Cu;
label_1bdb3c:
    // 0x1bdb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb40: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1bdb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1bdb44: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb48: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDB48u;
    SET_GPR_U32(ctx, 31, 0x1BDB50u);
    ctx->pc = 0x1BDB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB48u;
            // 0x1bdb4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB50u; }
        if (ctx->pc != 0x1BDB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB50u; }
        if (ctx->pc != 0x1BDB50u) { return; }
    }
    ctx->pc = 0x1BDB50u;
label_1bdb50:
    // 0x1bdb50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb54: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1bdb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bdb58: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDB58u;
    SET_GPR_U32(ctx, 31, 0x1BDB60u);
    ctx->pc = 0x1BDB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB58u;
            // 0x1bdb5c: 0x240600b9  addiu       $a2, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB60u; }
        if (ctx->pc != 0x1BDB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB60u; }
        if (ctx->pc != 0x1BDB60u) { return; }
    }
    ctx->pc = 0x1BDB60u;
label_1bdb60:
    // 0x1bdb60: 0x26460009  addiu       $a2, $s2, 0x9
    ctx->pc = 0x1bdb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
    // 0x1bdb64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb68: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x1bdb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1bdb6c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDB6Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB74u);
    ctx->pc = 0x1BDB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB6Cu;
            // 0x1bdb70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB74u; }
        if (ctx->pc != 0x1BDB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB74u; }
        if (ctx->pc != 0x1BDB74u) { return; }
    }
    ctx->pc = 0x1BDB74u;
label_1bdb74:
    // 0x1bdb74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb78: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bdb7c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDB7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB84u);
    ctx->pc = 0x1BDB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB7Cu;
            // 0x1bdb80: 0x240600b9  addiu       $a2, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB84u; }
        if (ctx->pc != 0x1BDB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB84u; }
        if (ctx->pc != 0x1BDB84u) { return; }
    }
    ctx->pc = 0x1BDB84u;
label_1bdb84:
    // 0x1bdb84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1bdb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb88: 0x26460009  addiu       $a2, $s2, 0x9
    ctx->pc = 0x1bdb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
    // 0x1bdb8c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdb90: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDB90u;
    SET_GPR_U32(ctx, 31, 0x1BDB98u);
    ctx->pc = 0x1BDB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB90u;
            // 0x1bdb94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB98u; }
        if (ctx->pc != 0x1BDB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB98u; }
        if (ctx->pc != 0x1BDB98u) { return; }
    }
    ctx->pc = 0x1BDB98u;
label_1bdb98:
    // 0x1bdb98: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BDB98u;
    SET_GPR_U32(ctx, 31, 0x1BDBA0u);
    ctx->pc = 0x1BDB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB98u;
            // 0x1bdb9c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBA0u; }
        if (ctx->pc != 0x1BDBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBA0u; }
        if (ctx->pc != 0x1BDBA0u) { return; }
    }
    ctx->pc = 0x1BDBA0u;
label_1bdba0:
    // 0x1bdba0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdba8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BDBA8u;
    SET_GPR_U32(ctx, 31, 0x1BDBB0u);
    ctx->pc = 0x1BDBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBA8u;
            // 0x1bdbac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBB0u; }
        if (ctx->pc != 0x1BDBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBB0u; }
        if (ctx->pc != 0x1BDBB0u) { return; }
    }
    ctx->pc = 0x1BDBB0u;
label_1bdbb0:
    // 0x1bdbb0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BDBB0u;
    SET_GPR_U32(ctx, 31, 0x1BDBB8u);
    ctx->pc = 0x1BDBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBB0u;
            // 0x1bdbb4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBB8u; }
        if (ctx->pc != 0x1BDBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBB8u; }
        if (ctx->pc != 0x1BDBB8u) { return; }
    }
    ctx->pc = 0x1BDBB8u;
label_1bdbb8:
    // 0x1bdbb8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdbbc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BDBBCu;
    SET_GPR_U32(ctx, 31, 0x1BDBC4u);
    ctx->pc = 0x1BDBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBBCu;
            // 0x1bdbc0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBC4u; }
        if (ctx->pc != 0x1BDBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBC4u; }
        if (ctx->pc != 0x1BDBC4u) { return; }
    }
    ctx->pc = 0x1BDBC4u;
label_1bdbc4:
    // 0x1bdbc4: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bdbc8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BDBC8u;
    SET_GPR_U32(ctx, 31, 0x1BDBD0u);
    ctx->pc = 0x1BDBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBC8u;
            // 0x1bdbcc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBD0u; }
        if (ctx->pc != 0x1BDBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBD0u; }
        if (ctx->pc != 0x1BDBD0u) { return; }
    }
    ctx->pc = 0x1BDBD0u;
label_1bdbd0:
    // 0x1bdbd0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1bdbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bdbd4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdbd8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bdbdc: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bdbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdbe0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BDBE0u;
    SET_GPR_U32(ctx, 31, 0x1BDBE8u);
    ctx->pc = 0x1BDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBE0u;
            // 0x1bdbe4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBE8u; }
        if (ctx->pc != 0x1BDBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBE8u; }
        if (ctx->pc != 0x1BDBE8u) { return; }
    }
    ctx->pc = 0x1BDBE8u;
label_1bdbe8:
    // 0x1bdbe8: 0x3c0242d6  lui         $v0, 0x42D6
    ctx->pc = 0x1bdbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17110 << 16));
    // 0x1bdbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdbf0: 0xc7a20360  lwc1        $f2, 0x360($sp)
    ctx->pc = 0x1bdbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bdbf4: 0x27a20364  addiu       $v0, $sp, 0x364
    ctx->pc = 0x1bdbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 868));
    // 0x1bdbf8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1bdbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdbfc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bdbfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bdc00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bdc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bdc04: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1bdc04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1bdc08: 0x0  nop
    ctx->pc = 0x1bdc08u;
    // NOP
    // 0x1bdc0c: 0x0  nop
    ctx->pc = 0x1bdc0cu;
    // NOP
    // 0x1bdc10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BDC10u;
    SET_GPR_U32(ctx, 31, 0x1BDC18u);
    ctx->pc = 0x1BDC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC10u;
            // 0x1bdc14: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC18u; }
        if (ctx->pc != 0x1BDC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC18u; }
        if (ctx->pc != 0x1BDC18u) { return; }
    }
    ctx->pc = 0x1BDC18u;
label_1bdc18:
    // 0x1bdc18: 0x24510151  addiu       $s1, $v0, 0x151
    ctx->pc = 0x1bdc18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 337));
    // 0x1bdc1c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc20: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bdc24: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDC24u;
    SET_GPR_U32(ctx, 31, 0x1BDC2Cu);
    ctx->pc = 0x1BDC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC24u;
            // 0x1bdc28: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC2Cu; }
        if (ctx->pc != 0x1BDC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC2Cu; }
        if (ctx->pc != 0x1BDC2Cu) { return; }
    }
    ctx->pc = 0x1BDC2Cu;
label_1bdc2c:
    // 0x1bdc2c: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x1bdc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1bdc30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc34: 0x24050151  addiu       $a1, $zero, 0x151
    ctx->pc = 0x1bdc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x1bdc38: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDC38u;
    SET_GPR_U32(ctx, 31, 0x1BDC40u);
    ctx->pc = 0x1BDC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC38u;
            // 0x1bdc3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC40u; }
        if (ctx->pc != 0x1BDC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC40u; }
        if (ctx->pc != 0x1BDC40u) { return; }
    }
    ctx->pc = 0x1BDC40u;
label_1bdc40:
    // 0x1bdc40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc44: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bdc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bdc48: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDC48u;
    SET_GPR_U32(ctx, 31, 0x1BDC50u);
    ctx->pc = 0x1BDC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC48u;
            // 0x1bdc4c: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC50u; }
        if (ctx->pc != 0x1BDC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC50u; }
        if (ctx->pc != 0x1BDC50u) { return; }
    }
    ctx->pc = 0x1BDC50u;
label_1bdc50:
    // 0x1bdc50: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x1bdc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1bdc54: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc5c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC64u);
    ctx->pc = 0x1BDC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC5Cu;
            // 0x1bdc60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC64u; }
        if (ctx->pc != 0x1BDC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC64u; }
        if (ctx->pc != 0x1BDC64u) { return; }
    }
    ctx->pc = 0x1BDC64u;
label_1bdc64:
    // 0x1bdc64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc68: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bdc6c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC74u);
    ctx->pc = 0x1BDC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC6Cu;
            // 0x1bdc70: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC74u; }
        if (ctx->pc != 0x1BDC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC74u; }
        if (ctx->pc != 0x1BDC74u) { return; }
    }
    ctx->pc = 0x1BDC74u;
label_1bdc74:
    // 0x1bdc74: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x1bdc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1bdc78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc7c: 0x24050151  addiu       $a1, $zero, 0x151
    ctx->pc = 0x1bdc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x1bdc80: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDC80u;
    SET_GPR_U32(ctx, 31, 0x1BDC88u);
    ctx->pc = 0x1BDC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC80u;
            // 0x1bdc84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC88u; }
        if (ctx->pc != 0x1BDC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC88u; }
        if (ctx->pc != 0x1BDC88u) { return; }
    }
    ctx->pc = 0x1BDC88u;
label_1bdc88:
    // 0x1bdc88: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdc8c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bdc90: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BDC90u;
    SET_GPR_U32(ctx, 31, 0x1BDC98u);
    ctx->pc = 0x1BDC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC90u;
            // 0x1bdc94: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC98u; }
        if (ctx->pc != 0x1BDC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC98u; }
        if (ctx->pc != 0x1BDC98u) { return; }
    }
    ctx->pc = 0x1BDC98u;
label_1bdc98:
    // 0x1bdc98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc9c: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x1bdc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1bdca0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bdca4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BDCA4u;
    SET_GPR_U32(ctx, 31, 0x1BDCACu);
    ctx->pc = 0x1BDCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCA4u;
            // 0x1bdca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCACu; }
        if (ctx->pc != 0x1BDCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCACu; }
        if (ctx->pc != 0x1BDCACu) { return; }
    }
    ctx->pc = 0x1BDCACu;
label_1bdcac:
    // 0x1bdcac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BDCACu;
    SET_GPR_U32(ctx, 31, 0x1BDCB4u);
    ctx->pc = 0x1BDCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCACu;
            // 0x1bdcb0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCB4u; }
        if (ctx->pc != 0x1BDCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCB4u; }
        if (ctx->pc != 0x1BDCB4u) { return; }
    }
    ctx->pc = 0x1BDCB4u;
label_1bdcb4:
    // 0x1bdcb4: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdcb8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdcbc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1bdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bdcc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bdcc4: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x1bdcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x1bdcc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdccc: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bdcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bdcd0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bdcd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcd4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1bdcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1bdcd8: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x1bdcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x1bdcdc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BDCDCu;
    SET_GPR_U32(ctx, 31, 0x1BDCE4u);
    ctx->pc = 0x1BDCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCDCu;
            // 0x1bdce0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCE4u; }
        if (ctx->pc != 0x1BDCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCE4u; }
        if (ctx->pc != 0x1BDCE4u) { return; }
    }
    ctx->pc = 0x1BDCE4u;
label_1bdce4:
    // 0x1bdce4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1bdce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1bdce8: 0x26450012  addiu       $a1, $s2, 0x12
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x1bdcec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bdcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bdcf0: 0x24040172  addiu       $a0, $zero, 0x172
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x1bdcf4: 0x8fa60360  lw          $a2, 0x360($sp)
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1bdcf8: 0x27a80320  addiu       $t0, $sp, 0x320
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x1bdcfc: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bdcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bdd00: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdd04: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bdd04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdd08: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BDD08u;
    SET_GPR_U32(ctx, 31, 0x1BDD10u);
    ctx->pc = 0x1BDD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD08u;
            // 0x1bdd0c: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD10u; }
        if (ctx->pc != 0x1BDD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD10u; }
        if (ctx->pc != 0x1BDD10u) { return; }
    }
    ctx->pc = 0x1BDD10u;
label_1bdd10:
    // 0x1bdd10: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdd14: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x1bdd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x1bdd18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd1c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bdd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bdd20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BDD20u;
    SET_GPR_U32(ctx, 31, 0x1BDD28u);
    ctx->pc = 0x1BDD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD20u;
            // 0x1bdd24: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD28u; }
        if (ctx->pc != 0x1BDD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD28u; }
        if (ctx->pc != 0x1BDD28u) { return; }
    }
    ctx->pc = 0x1BDD28u;
label_1bdd28:
    // 0x1bdd28: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1bdd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1bdd2c: 0x26450012  addiu       $a1, $s2, 0x12
    ctx->pc = 0x1bdd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x1bdd30: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bdd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bdd34: 0x240401ae  addiu       $a0, $zero, 0x1AE
    ctx->pc = 0x1bdd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x1bdd38: 0x27a20364  addiu       $v0, $sp, 0x364
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 868));
    // 0x1bdd3c: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bdd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bdd40: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bdd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdd44: 0x27a80330  addiu       $t0, $sp, 0x330
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x1bdd48: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdd4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bdd4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd50: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BDD50u;
    SET_GPR_U32(ctx, 31, 0x1BDD58u);
    ctx->pc = 0x1BDD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD50u;
            // 0x1bdd54: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD58u; }
        if (ctx->pc != 0x1BDD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD58u; }
        if (ctx->pc != 0x1BDD58u) { return; }
    }
    ctx->pc = 0x1BDD58u;
label_1bdd58:
    // 0x1bdd58: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bdd5c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bdd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdd60: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bdd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bdd64: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x1bdd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x1bdd68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bdd68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bdd6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bdd74: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bdd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bdd78: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1bdd78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1bdd7c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BDD7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD84u);
    ctx->pc = 0x1BDD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD7Cu;
            // 0x1bdd80: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD84u; }
        if (ctx->pc != 0x1BDD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD84u; }
        if (ctx->pc != 0x1BDD84u) { return; }
    }
    ctx->pc = 0x1BDD84u;
label_1bdd84:
    // 0x1bdd84: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1bdd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1bdd88: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1bdd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bdd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bdd90: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1bdd94: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bdd98: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1bdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1bdd9c: 0x27a80340  addiu       $t0, $sp, 0x340
    ctx->pc = 0x1bdd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x1bdda0: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bdda0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdda4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bdda4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdda8: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BDDA8u;
    SET_GPR_U32(ctx, 31, 0x1BDDB0u);
    ctx->pc = 0x1BDDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDA8u;
            // 0x1bddac: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDB0u; }
        if (ctx->pc != 0x1BDDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDB0u; }
        if (ctx->pc != 0x1BDDB0u) { return; }
    }
    ctx->pc = 0x1BDDB0u;
label_1bddb0:
    // 0x1bddb0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bddb4: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x1bddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x1bddb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddbc: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bddc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BDDC0u;
    SET_GPR_U32(ctx, 31, 0x1BDDC8u);
    ctx->pc = 0x1BDDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDC0u;
            // 0x1bddc4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDC8u; }
        if (ctx->pc != 0x1BDDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDC8u; }
        if (ctx->pc != 0x1BDDC8u) { return; }
    }
    ctx->pc = 0x1BDDC8u;
label_1bddc8:
    // 0x1bddc8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1bddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1bddcc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1bddccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bddd4: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1bddd8: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bddd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bdddc: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x1bdddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x1bdde0: 0x27a80350  addiu       $t0, $sp, 0x350
    ctx->pc = 0x1bdde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x1bdde4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdde8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bdde8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddec: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BDDECu;
    SET_GPR_U32(ctx, 31, 0x1BDDF4u);
    ctx->pc = 0x1BDDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDECu;
            // 0x1bddf0: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDF4u; }
        if (ctx->pc != 0x1BDDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDF4u; }
        if (ctx->pc != 0x1BDDF4u) { return; }
    }
    ctx->pc = 0x1BDDF4u;
label_1bddf4:
    // 0x1bddf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bddf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddfc: 0xc067ff8  jal         func_19FFE0
    ctx->pc = 0x1BDDFCu;
    SET_GPR_U32(ctx, 31, 0x1BDE04u);
    ctx->pc = 0x1BDE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDFCu;
            // 0x1bde00: 0x27a60368  addiu       $a2, $sp, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FFE0u;
    if (runtime->hasFunction(0x19FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE04u; }
        if (ctx->pc != 0x1BDE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAbs__16CBattleCharaInfoFiPi_0x19ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE04u; }
        if (ctx->pc != 0x1BDE04u) { return; }
    }
    ctx->pc = 0x1BDE04u;
label_1bde04:
    // 0x1bde04: 0x8fa60368  lw          $a2, 0x368($sp)
    ctx->pc = 0x1bde04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1bde08: 0x26450013  addiu       $a1, $s2, 0x13
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x1bde0c: 0xc06ef60  jal         func_1BBD80
    ctx->pc = 0x1BDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE14u);
    ctx->pc = 0x1BDE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE0Cu;
            // 0x1bde10: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD80u;
    if (runtime->hasFunction(0x1BBD80u)) {
        auto targetFn = runtime->lookupFunction(0x1BBD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE14u; }
        if (ctx->pc != 0x1BDE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDrumCounter__Fiii_0x1bbd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE14u; }
        if (ctx->pc != 0x1BDE14u) { return; }
    }
    ctx->pc = 0x1BDE14u;
label_1bde14:
    // 0x1bde14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bde14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bde18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bde18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde1c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE24u);
    ctx->pc = 0x1BDE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE1Cu;
            // 0x1bde20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE24u; }
        if (ctx->pc != 0x1BDE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE24u; }
        if (ctx->pc != 0x1BDE24u) { return; }
    }
    ctx->pc = 0x1BDE24u;
label_1bde24:
    // 0x1bde24: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BDE24u;
    SET_GPR_U32(ctx, 31, 0x1BDE2Cu);
    ctx->pc = 0x1BDE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE24u;
            // 0x1bde28: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE2Cu; }
        if (ctx->pc != 0x1BDE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE2Cu; }
        if (ctx->pc != 0x1BDE2Cu) { return; }
    }
    ctx->pc = 0x1BDE2Cu;
label_1bde2c:
    // 0x1bde2c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bde30: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BDE30u;
    SET_GPR_U32(ctx, 31, 0x1BDE38u);
    ctx->pc = 0x1BDE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE30u;
            // 0x1bde34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE38u; }
        if (ctx->pc != 0x1BDE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE38u; }
        if (ctx->pc != 0x1BDE38u) { return; }
    }
    ctx->pc = 0x1BDE38u;
label_1bde38:
    // 0x1bde38: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bde3c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE44u);
    ctx->pc = 0x1BDE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE3Cu;
            // 0x1bde40: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE44u; }
        if (ctx->pc != 0x1BDE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE44u; }
        if (ctx->pc != 0x1BDE44u) { return; }
    }
    ctx->pc = 0x1BDE44u;
label_1bde44:
    // 0x1bde44: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bde44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bde48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bde48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bde4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bde4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde50: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde54: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BDE54u;
    SET_GPR_U32(ctx, 31, 0x1BDE5Cu);
    ctx->pc = 0x1BDE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE54u;
            // 0x1bde58: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE5Cu; }
        if (ctx->pc != 0x1BDE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE5Cu; }
        if (ctx->pc != 0x1BDE5Cu) { return; }
    }
    ctx->pc = 0x1BDE5Cu;
label_1bde5c:
    // 0x1bde5c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1bde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1bde60: 0x2646fffd  addiu       $a2, $s2, -0x3
    ctx->pc = 0x1bde60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x1bde64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1bde64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1bde68: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bde6c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bde70: 0x240900b0  addiu       $t1, $zero, 0xB0
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1bde74: 0x240a002a  addiu       $t2, $zero, 0x2A
    ctx->pc = 0x1bde74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1bde78: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BDE78u;
    SET_GPR_U32(ctx, 31, 0x1BDE80u);
    ctx->pc = 0x1BDE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE78u;
            // 0x1bde7c: 0x24450039  addiu       $a1, $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE80u; }
        if (ctx->pc != 0x1BDE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE80u; }
        if (ctx->pc != 0x1BDE80u) { return; }
    }
    ctx->pc = 0x1BDE80u;
label_1bde80:
    // 0x1bde80: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BDE80u;
    SET_GPR_U32(ctx, 31, 0x1BDE88u);
    ctx->pc = 0x1BDE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE80u;
            // 0x1bde84: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE88u; }
        if (ctx->pc != 0x1BDE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE88u; }
        if (ctx->pc != 0x1BDE88u) { return; }
    }
    ctx->pc = 0x1BDE88u;
label_1bde88:
    // 0x1bde88: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1bde88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1bde8c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bde8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1bde90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bde90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bde94: 0x0  nop
    ctx->pc = 0x1bde94u;
    // NOP
    // 0x1bde98: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bde98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bde9c: 0x0  nop
    ctx->pc = 0x1bde9cu;
    // NOP
    // 0x1bdea0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDEA0u;
    {
        const bool branch_taken_0x1bdea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEA0u;
            // 0x1bdea4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdea0) {
            ctx->pc = 0x1BDEB8u;
            goto label_1bdeb8;
        }
    }
    ctx->pc = 0x1BDEA8u;
    // 0x1bdea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdeac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bdeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bdeb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDEB0u;
    {
        const bool branch_taken_0x1bdeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEB0u;
            // 0x1bdeb4: 0xac230460  sw          $v1, 0x460($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdeb0) {
            ctx->pc = 0x1BDEBCu;
            goto label_1bdebc;
        }
    }
    ctx->pc = 0x1BDEB8u;
label_1bdeb8:
    // 0x1bdeb8: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1bdeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
label_1bdebc:
    // 0x1bdebc: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1bdebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1bdec0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bdec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bdec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdec8: 0x0  nop
    ctx->pc = 0x1bdec8u;
    // NOP
    // 0x1bdecc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bdeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bded0: 0x0  nop
    ctx->pc = 0x1bded0u;
    // NOP
    // 0x1bded4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDED4u;
    {
        const bool branch_taken_0x1bded4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDED4u;
            // 0x1bded8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bded4) {
            ctx->pc = 0x1BDEECu;
            goto label_1bdeec;
        }
    }
    ctx->pc = 0x1BDEDCu;
    // 0x1bdedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdee0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bdee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bdee4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDEE4u;
    {
        const bool branch_taken_0x1bdee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEE4u;
            // 0x1bdee8: 0xac230464  sw          $v1, 0x464($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdee4) {
            ctx->pc = 0x1BDEF0u;
            goto label_1bdef0;
        }
    }
    ctx->pc = 0x1BDEECu;
label_1bdeec:
    // 0x1bdeec: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1bdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
label_1bdef0:
    // 0x1bdef0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bdef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdef8: 0xe4350470  swc1        $f21, 0x470($at)
    ctx->pc = 0x1bdef8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1136), bits); }
    // 0x1bdefc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bdf00: 0xac23047c  sw          $v1, 0x47C($at)
    ctx->pc = 0x1bdf00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1148), GPR_U32(ctx, 3));
    // 0x1bdf04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bdf08: 0xe4340474  swc1        $f20, 0x474($at)
    ctx->pc = 0x1bdf08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1140), bits); }
    // 0x1bdf0c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1bdf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bdf10: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1bdf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bdf14: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1bdf14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bdf18: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1bdf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bdf1c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1bdf1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bdf20: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1bdf20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bdf24: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bdf24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bdf28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1bdf28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bdf2c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1bdf2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdf30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bdf30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdf34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bdf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdf38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bdf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF3Cu;
            // 0x1bdf40: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDF44u;
}
