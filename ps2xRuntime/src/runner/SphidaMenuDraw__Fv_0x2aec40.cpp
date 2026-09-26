#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaMenuDraw__Fv
// Address: 0x2aec40 - 0x2af458
void SphidaMenuDraw__Fv_0x2aec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaMenuDraw__Fv_0x2aec40");
#endif

    switch (ctx->pc) {
        case 0x2aec7cu: goto label_2aec7c;
        case 0x2aecc4u: goto label_2aecc4;
        case 0x2aece4u: goto label_2aece4;
        case 0x2aececu: goto label_2aecec;
        case 0x2aed04u: goto label_2aed04;
        case 0x2aed24u: goto label_2aed24;
        case 0x2aed30u: goto label_2aed30;
        case 0x2aed4cu: goto label_2aed4c;
        case 0x2aed68u: goto label_2aed68;
        case 0x2aed8cu: goto label_2aed8c;
        case 0x2aedacu: goto label_2aedac;
        case 0x2aedc4u: goto label_2aedc4;
        case 0x2aedf0u: goto label_2aedf0;
        case 0x2aee14u: goto label_2aee14;
        case 0x2aee2cu: goto label_2aee2c;
        case 0x2aee58u: goto label_2aee58;
        case 0x2aee78u: goto label_2aee78;
        case 0x2aee90u: goto label_2aee90;
        case 0x2aeebcu: goto label_2aeebc;
        case 0x2aef00u: goto label_2aef00;
        case 0x2aef30u: goto label_2aef30;
        case 0x2aef38u: goto label_2aef38;
        case 0x2aef4cu: goto label_2aef4c;
        case 0x2aef78u: goto label_2aef78;
        case 0x2aef80u: goto label_2aef80;
        case 0x2aefa4u: goto label_2aefa4;
        case 0x2aefacu: goto label_2aefac;
        case 0x2aefc4u: goto label_2aefc4;
        case 0x2aefccu: goto label_2aefcc;
        case 0x2aefd8u: goto label_2aefd8;
        case 0x2aefe4u: goto label_2aefe4;
        case 0x2aeff0u: goto label_2aeff0;
        case 0x2af008u: goto label_2af008;
        case 0x2af030u: goto label_2af030;
        case 0x2af05cu: goto label_2af05c;
        case 0x2af084u: goto label_2af084;
        case 0x2af0b8u: goto label_2af0b8;
        case 0x2af0d0u: goto label_2af0d0;
        case 0x2af0f8u: goto label_2af0f8;
        case 0x2af100u: goto label_2af100;
        case 0x2af118u: goto label_2af118;
        case 0x2af134u: goto label_2af134;
        case 0x2af15cu: goto label_2af15c;
        case 0x2af1a8u: goto label_2af1a8;
        case 0x2af1f0u: goto label_2af1f0;
        case 0x2af1f8u: goto label_2af1f8;
        case 0x2af234u: goto label_2af234;
        case 0x2af23cu: goto label_2af23c;
        case 0x2af274u: goto label_2af274;
        case 0x2af288u: goto label_2af288;
        case 0x2af290u: goto label_2af290;
        case 0x2af2c8u: goto label_2af2c8;
        case 0x2af348u: goto label_2af348;
        case 0x2af368u: goto label_2af368;
        case 0x2af3a0u: goto label_2af3a0;
        case 0x2af3a8u: goto label_2af3a8;
        case 0x2af3c8u: goto label_2af3c8;
        case 0x2af3e8u: goto label_2af3e8;
        case 0x2af3fcu: goto label_2af3fc;
        case 0x2af414u: goto label_2af414;
        case 0x2af42cu: goto label_2af42c;
        default: break;
    }

    ctx->pc = 0x2aec40u;

    // 0x2aec40: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x2aec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
    // 0x2aec44: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2aec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2aec48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2aec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2aec4c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2aec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2aec50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2aec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2aec54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2aec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2aec58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aec5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aec60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aec64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2aec64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aec68: 0x87849b50  lh          $a0, -0x64B0($gp)
    ctx->pc = 0x2aec68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941520)));
    // 0x2aec6c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEC6Cu;
    {
        const bool branch_taken_0x2aec6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2aec6c) {
            ctx->pc = 0x2AEC84u;
            goto label_2aec84;
        }
    }
    ctx->pc = 0x2AEC74u;
    // 0x2aec74: 0xc0c2d40  jal         func_30B500
    ctx->pc = 0x2AEC74u;
    SET_GPR_U32(ctx, 31, 0x2AEC7Cu);
    ctx->pc = 0x30B500u;
    if (runtime->hasFunction(0x30B500u)) {
        auto targetFn = runtime->lookupFunction(0x30B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEC7Cu; }
        if (ctx->pc != 0x2AEC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistDraw__Fv_0x30b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEC7Cu; }
        if (ctx->pc != 0x2AEC7Cu) { return; }
    }
    ctx->pc = 0x2AEC7Cu;
label_2aec7c:
    // 0x2aec7c: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x2AEC7Cu;
    {
        const bool branch_taken_0x2aec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEC7Cu;
            // 0x2aec80: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec7c) {
            ctx->pc = 0x2AF434u;
            goto label_2af434;
        }
    }
    ctx->pc = 0x2AEC84u;
label_2aec84:
    // 0x2aec84: 0x8f839b08  lw          $v1, -0x64F8($gp)
    ctx->pc = 0x2aec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2aec88: 0x106001e9  beqz        $v1, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x2AEC88u;
    {
        const bool branch_taken_0x2aec88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec88) {
            ctx->pc = 0x2AF430u;
            goto label_2af430;
        }
    }
    ctx->pc = 0x2AEC90u;
    // 0x2aec90: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2aec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x2aec94: 0x8f839b4c  lw          $v1, -0x64B4($gp)
    ctx->pc = 0x2aec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
    // 0x2aec98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2aec98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2aec9c: 0x83859b58  lb          $a1, -0x64A8($gp)
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941528)));
    // 0x2aeca0: 0x27849b40  addiu       $a0, $gp, -0x64C0
    ctx->pc = 0x2aeca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941504));
    // 0x2aeca4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2aeca8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aeca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aecac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aecb0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2aecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aecb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2aecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2aecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aecbc: 0xc094514  jal         func_251450
    ctx->pc = 0x2AECBCu;
    SET_GPR_U32(ctx, 31, 0x2AECC4u);
    ctx->pc = 0x2AECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AECBCu;
            // 0x2aecc0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AECC4u; }
        if (ctx->pc != 0x2AECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AECC4u; }
        if (ctx->pc != 0x2AECC4u) { return; }
    }
    ctx->pc = 0x2AECC4u;
label_2aecc4:
    // 0x2aecc4: 0x8f829b20  lw          $v0, -0x64E0($gp)
    ctx->pc = 0x2aecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941472)));
    // 0x2aecc8: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x2aecc8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x2aeccc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AECCCu;
    {
        const bool branch_taken_0x2aeccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AECCCu;
            // 0x2aecd0: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeccc) {
            ctx->pc = 0x2AED24u;
            goto label_2aed24;
        }
    }
    ctx->pc = 0x2AECD4u;
    // 0x2aecd4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2aecd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aecd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aecdc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AECDCu;
    SET_GPR_U32(ctx, 31, 0x2AECE4u);
    ctx->pc = 0x2AECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AECDCu;
            // 0x2aece0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AECE4u; }
        if (ctx->pc != 0x2AECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AECE4u; }
        if (ctx->pc != 0x2AECE4u) { return; }
    }
    ctx->pc = 0x2AECE4u;
label_2aece4:
    // 0x2aece4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2AECE4u;
    SET_GPR_U32(ctx, 31, 0x2AECECu);
    ctx->pc = 0x2AECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AECE4u;
            // 0x2aece8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AECECu; }
        if (ctx->pc != 0x2AECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AECECu; }
        if (ctx->pc != 0x2AECECu) { return; }
    }
    ctx->pc = 0x2AECECu;
label_2aecec:
    // 0x2aecec: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2aececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2aecf0: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2aecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2aecf4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2aecf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aecf8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2aecf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aecfc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AECFCu;
    SET_GPR_U32(ctx, 31, 0x2AED04u);
    ctx->pc = 0x2AED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AECFCu;
            // 0x2aed00: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED04u; }
        if (ctx->pc != 0x2AED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED04u; }
        if (ctx->pc != 0x2AED04u) { return; }
    }
    ctx->pc = 0x2AED04u;
label_2aed04:
    // 0x2aed04: 0xc78c9b3c  lwc1        $f12, -0x64C4($gp)
    ctx->pc = 0x2aed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aed08: 0x8f859b20  lw          $a1, -0x64E0($gp)
    ctx->pc = 0x2aed08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941472)));
    // 0x2aed0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2aed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2aed10: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x2aed10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2aed14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aed14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2aed18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed1c: 0xc088f58  jal         func_223D60
    ctx->pc = 0x2AED1Cu;
    SET_GPR_U32(ctx, 31, 0x2AED24u);
    ctx->pc = 0x2AED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AED1Cu;
            // 0x2aed20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED24u; }
        if (ctx->pc != 0x2AED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED24u; }
        if (ctx->pc != 0x2AED24u) { return; }
    }
    ctx->pc = 0x2AED24u;
label_2aed24:
    // 0x2aed24: 0x8f849b08  lw          $a0, -0x64F8($gp)
    ctx->pc = 0x2aed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2aed28: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2AED28u;
    SET_GPR_U32(ctx, 31, 0x2AED30u);
    ctx->pc = 0x2AED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AED28u;
            // 0x2aed2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED30u; }
        if (ctx->pc != 0x2AED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED30u; }
        if (ctx->pc != 0x2AED30u) { return; }
    }
    ctx->pc = 0x2AED30u;
label_2aed30:
    // 0x2aed30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aed30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed34: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2aed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2aed38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aed3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aed40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed44: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AED44u;
    SET_GPR_U32(ctx, 31, 0x2AED4Cu);
    ctx->pc = 0x2AED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AED44u;
            // 0x2aed48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED4Cu; }
        if (ctx->pc != 0x2AED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED4Cu; }
        if (ctx->pc != 0x2AED4Cu) { return; }
    }
    ctx->pc = 0x2AED4Cu;
label_2aed4c:
    // 0x2aed4c: 0x8f829b1c  lw          $v0, -0x64E4($gp)
    ctx->pc = 0x2aed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aed50: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2AED50u;
    {
        const bool branch_taken_0x2aed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aed50) {
            ctx->pc = 0x2AF134u;
            goto label_2af134;
        }
    }
    ctx->pc = 0x2AED58u;
    // 0x2aed58: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2aed58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aed5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed60: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AED60u;
    SET_GPR_U32(ctx, 31, 0x2AED68u);
    ctx->pc = 0x2AED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AED60u;
            // 0x2aed64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED68u; }
        if (ctx->pc != 0x2AED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED68u; }
        if (ctx->pc != 0x2AED68u) { return; }
    }
    ctx->pc = 0x2AED68u;
label_2aed68:
    // 0x2aed68: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2aed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2aed6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AED6Cu;
    {
        const bool branch_taken_0x2aed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aed6c) {
            ctx->pc = 0x2AED94u;
            goto label_2aed94;
        }
    }
    ctx->pc = 0x2AED74u;
    // 0x2aed74: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aed74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aed78: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2aed78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2aed7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed80: 0x240800ca  addiu       $t0, $zero, 0xCA
    ctx->pc = 0x2aed80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2aed84: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x2AED84u;
    SET_GPR_U32(ctx, 31, 0x2AED8Cu);
    ctx->pc = 0x2AED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AED84u;
            // 0x2aed88: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED8Cu; }
        if (ctx->pc != 0x2AED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AED8Cu; }
        if (ctx->pc != 0x2AED8Cu) { return; }
    }
    ctx->pc = 0x2AED8Cu;
label_2aed8c:
    // 0x2aed8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AED8Cu;
    {
        const bool branch_taken_0x2aed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AED8Cu;
            // 0x2aed90: 0x27a40390  addiu       $a0, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed8c) {
            ctx->pc = 0x2AEDB0u;
            goto label_2aedb0;
        }
    }
    ctx->pc = 0x2AED94u;
label_2aed94:
    // 0x2aed94: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aed98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed9c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2aed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2aeda0: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x2aeda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2aeda4: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x2AEDA4u;
    SET_GPR_U32(ctx, 31, 0x2AEDACu);
    ctx->pc = 0x2AEDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEDA4u;
            // 0x2aeda8: 0x240800de  addiu       $t0, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDACu; }
        if (ctx->pc != 0x2AEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDACu; }
        if (ctx->pc != 0x2AEDACu) { return; }
    }
    ctx->pc = 0x2AEDACu;
label_2aedac:
    // 0x2aedac: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x2aedacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_2aedb0:
    // 0x2aedb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aedb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedb4: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x2aedb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2aedb8: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x2aedb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2aedbc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AEDBCu;
    SET_GPR_U32(ctx, 31, 0x2AEDC4u);
    ctx->pc = 0x2AEDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEDBCu;
            // 0x2aedc0: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDC4u; }
        if (ctx->pc != 0x2AEDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDC4u; }
        if (ctx->pc != 0x2AEDC4u) { return; }
    }
    ctx->pc = 0x2AEDC4u;
label_2aedc4:
    // 0x2aedc4: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aedc8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2aedc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aedcc: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2aedccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2aedd0: 0x3c024224  lui         $v0, 0x4224
    ctx->pc = 0x2aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16932 << 16));
    // 0x2aedd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2aedd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aedd8: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x2aedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2aeddc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aeddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aede0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2aede0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aede4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2aede4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aede8: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AEDE8u;
    SET_GPR_U32(ctx, 31, 0x2AEDF0u);
    ctx->pc = 0x2AEDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEDE8u;
            // 0x2aedec: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDF0u; }
        if (ctx->pc != 0x2AEDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDF0u; }
        if (ctx->pc != 0x2AEDF0u) { return; }
    }
    ctx->pc = 0x2AEDF0u;
label_2aedf0:
    // 0x2aedf0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2aedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2aedf4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AEDF4u;
    {
        const bool branch_taken_0x2aedf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aedf4) {
            ctx->pc = 0x2AEE60u;
            goto label_2aee60;
        }
    }
    ctx->pc = 0x2AEDFCu;
    // 0x2aedfc: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aee00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee04: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x2aee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2aee08: 0x24070076  addiu       $a3, $zero, 0x76
    ctx->pc = 0x2aee08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2aee0c: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x2AEE0Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE14u);
    ctx->pc = 0x2AEE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEE0Cu;
            // 0x2aee10: 0x24080066  addiu       $t0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE14u; }
        if (ctx->pc != 0x2AEE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE14u; }
        if (ctx->pc != 0x2AEE14u) { return; }
    }
    ctx->pc = 0x2AEE14u;
label_2aee14:
    // 0x2aee14: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2aee14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2aee18: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2aee18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2aee1c: 0x2406009e  addiu       $a2, $zero, 0x9E
    ctx->pc = 0x2aee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2aee20: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2aee20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2aee24: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AEE24u;
    SET_GPR_U32(ctx, 31, 0x2AEE2Cu);
    ctx->pc = 0x2AEE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEE24u;
            // 0x2aee28: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE2Cu; }
        if (ctx->pc != 0x2AEE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE2Cu; }
        if (ctx->pc != 0x2AEE2Cu) { return; }
    }
    ctx->pc = 0x2AEE2Cu;
label_2aee2c:
    // 0x2aee2c: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aee30: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2aee30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aee34: 0x3c0342ec  lui         $v1, 0x42EC
    ctx->pc = 0x2aee34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17132 << 16));
    // 0x2aee38: 0x3c024301  lui         $v0, 0x4301
    ctx->pc = 0x2aee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17153 << 16));
    // 0x2aee3c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2aee3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aee40: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x2aee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2aee44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aee44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aee48: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2aee48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee4c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2aee4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee50: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AEE50u;
    SET_GPR_U32(ctx, 31, 0x2AEE58u);
    ctx->pc = 0x2AEE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEE50u;
            // 0x2aee54: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE58u; }
        if (ctx->pc != 0x2AEE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE58u; }
        if (ctx->pc != 0x2AEE58u) { return; }
    }
    ctx->pc = 0x2AEE58u;
label_2aee58:
    // 0x2aee58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AEE58u;
    {
        const bool branch_taken_0x2aee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEE58u;
            // 0x2aee5c: 0x2402015e  addiu       $v0, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee58) {
            ctx->pc = 0x2AEEC0u;
            goto label_2aeec0;
        }
    }
    ctx->pc = 0x2AEE60u;
label_2aee60:
    // 0x2aee60: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aee60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aee64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee68: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2aee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2aee6c: 0x24070076  addiu       $a3, $zero, 0x76
    ctx->pc = 0x2aee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2aee70: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x2AEE70u;
    SET_GPR_U32(ctx, 31, 0x2AEE78u);
    ctx->pc = 0x2AEE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEE70u;
            // 0x2aee74: 0x24080086  addiu       $t0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE78u; }
        if (ctx->pc != 0x2AEE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE78u; }
        if (ctx->pc != 0x2AEE78u) { return; }
    }
    ctx->pc = 0x2AEE78u;
label_2aee78:
    // 0x2aee78: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x2aee78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2aee7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aee7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee80: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x2aee80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2aee84: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2aee84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2aee88: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AEE88u;
    SET_GPR_U32(ctx, 31, 0x2AEE90u);
    ctx->pc = 0x2AEE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEE88u;
            // 0x2aee8c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE90u; }
        if (ctx->pc != 0x2AEE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE90u; }
        if (ctx->pc != 0x2AEE90u) { return; }
    }
    ctx->pc = 0x2AEE90u;
label_2aee90:
    // 0x2aee90: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aee94: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2aee94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aee98: 0x3c0342c4  lui         $v1, 0x42C4
    ctx->pc = 0x2aee98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17092 << 16));
    // 0x2aee9c: 0x3c024301  lui         $v0, 0x4301
    ctx->pc = 0x2aee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17153 << 16));
    // 0x2aeea0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2aeea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aeea4: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2aeea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aeea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aeeac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2aeeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeeb0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2aeeb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeeb4: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AEEB4u;
    SET_GPR_U32(ctx, 31, 0x2AEEBCu);
    ctx->pc = 0x2AEEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEEB4u;
            // 0x2aeeb8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEEBCu; }
        if (ctx->pc != 0x2AEEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEEBCu; }
        if (ctx->pc != 0x2AEEBCu) { return; }
    }
    ctx->pc = 0x2AEEBCu;
label_2aeebc:
    // 0x2aeebc: 0x2402015e  addiu       $v0, $zero, 0x15E
    ctx->pc = 0x2aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_2aeec0:
    // 0x2aeec0: 0x27b40198  addiu       $s4, $sp, 0x198
    ctx->pc = 0x2aeec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2aeec4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2aeec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2aeec8: 0x27b1019c  addiu       $s1, $sp, 0x19C
    ctx->pc = 0x2aeec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x2aeecc: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2aeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2aeed0: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x2aeed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2aeed4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aeed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2aeed8: 0x27b20194  addiu       $s2, $sp, 0x194
    ctx->pc = 0x2aeed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2aeedc: 0x3c0241ce  lui         $v0, 0x41CE
    ctx->pc = 0x2aeedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16846 << 16));
    // 0x2aeee0: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x2aeee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2aeee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2aeee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aeee8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aeee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aeeec: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2aeeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2aeef0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2aeef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2aeef4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2aeef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2aeef8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AEEF8u;
    SET_GPR_U32(ctx, 31, 0x2AEF00u);
    ctx->pc = 0x2AEEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEEF8u;
            // 0x2aeefc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF00u; }
        if (ctx->pc != 0x2AEF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF00u; }
        if (ctx->pc != 0x2AEF00u) { return; }
    }
    ctx->pc = 0x2AEF00u;
label_2aef00:
    // 0x2aef00: 0xc7809b4c  lwc1        $f0, -0x64B4($gp)
    ctx->pc = 0x2aef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aef04: 0xafa203ec  sw          $v0, 0x3EC($sp)
    ctx->pc = 0x2aef04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 2));
    // 0x2aef08: 0x3c02404e  lui         $v0, 0x404E
    ctx->pc = 0x2aef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16462 << 16));
    // 0x2aef0c: 0x83859b58  lb          $a1, -0x64A8($gp)
    ctx->pc = 0x2aef0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941528)));
    // 0x2aef10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aef10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aef14: 0x27849b44  addiu       $a0, $gp, -0x64BC
    ctx->pc = 0x2aef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941508));
    // 0x2aef18: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2aef18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2aef1c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aef20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aef20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aef24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aef24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aef28: 0xc094514  jal         func_251450
    ctx->pc = 0x2AEF28u;
    SET_GPR_U32(ctx, 31, 0x2AEF30u);
    ctx->pc = 0x2AEF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF28u;
            // 0x2aef2c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF30u; }
        if (ctx->pc != 0x2AEF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF30u; }
        if (ctx->pc != 0x2AEF30u) { return; }
    }
    ctx->pc = 0x2AEF30u;
label_2aef30:
    // 0x2aef30: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AEF30u;
    SET_GPR_U32(ctx, 31, 0x2AEF38u);
    ctx->pc = 0x2AEF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF30u;
            // 0x2aef34: 0xc78c9b44  lwc1        $f12, -0x64BC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF38u; }
        if (ctx->pc != 0x2AEF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF38u; }
        if (ctx->pc != 0x2AEF38u) { return; }
    }
    ctx->pc = 0x2AEF38u;
label_2aef38:
    // 0x2aef38: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2aef38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aef3c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2aef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2aef40: 0xafa203e8  sw          $v0, 0x3E8($sp)
    ctx->pc = 0x2aef40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 2));
    // 0x2aef44: 0xc0872a8  jal         func_21CAA0
    ctx->pc = 0x2AEF44u;
    SET_GPR_U32(ctx, 31, 0x2AEF4Cu);
    ctx->pc = 0x2AEF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF44u;
            // 0x2aef48: 0x27a603e8  addiu       $a2, $sp, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CAA0u;
    if (runtime->hasFunction(0x21CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x21CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF4Cu; }
        if (ctx->pc != 0x2AEF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameScrlList__FP10mgCTexturePiPi_0x21caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF4Cu; }
        if (ctx->pc != 0x2AEF4Cu) { return; }
    }
    ctx->pc = 0x2AEF4Cu;
label_2aef4c:
    // 0x2aef4c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2aef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2aef50: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2aef50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2aef54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aef58: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x2aef58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2aef5c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2aef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aef60: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x2aef60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x2aef64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2aef68: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2aef6c: 0x2448fff0  addiu       $t0, $v0, -0x10
    ctx->pc = 0x2aef6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2aef70: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AEF70u;
    SET_GPR_U32(ctx, 31, 0x2AEF78u);
    ctx->pc = 0x2AEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF70u;
            // 0x2aef74: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF78u; }
        if (ctx->pc != 0x2AEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF78u; }
        if (ctx->pc != 0x2AEF78u) { return; }
    }
    ctx->pc = 0x2AEF78u;
label_2aef78:
    // 0x2aef78: 0xc088050  jal         func_220140
    ctx->pc = 0x2AEF78u;
    SET_GPR_U32(ctx, 31, 0x2AEF80u);
    ctx->pc = 0x2AEF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF78u;
            // 0x2aef7c: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF80u; }
        if (ctx->pc != 0x2AEF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF80u; }
        if (ctx->pc != 0x2AEF80u) { return; }
    }
    ctx->pc = 0x2AEF80u;
label_2aef80:
    // 0x2aef80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2aef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2aef84: 0xc7809b40  lwc1        $f0, -0x64C0($gp)
    ctx->pc = 0x2aef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aef88: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2aef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2aef8c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x2aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x2aef90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aef90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aef94: 0x24710016  addiu       $s1, $v1, 0x16
    ctx->pc = 0x2aef94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x2aef98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aef98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aef9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2AEFA4u);
    ctx->pc = 0x2AEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF9Cu;
            // 0x2aefa0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFA4u; }
        if (ctx->pc != 0x2AEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFA4u; }
        if (ctx->pc != 0x2AEFA4u) { return; }
    }
    ctx->pc = 0x2AEFA4u;
label_2aefa4:
    // 0x2aefa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2aefa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2aefa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aefac:
    // 0x2aefac: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2aefacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2aefb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aefb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefb4: 0x240600ec  addiu       $a2, $zero, 0xEC
    ctx->pc = 0x2aefb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x2aefb8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2aefb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2aefbc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AEFBCu;
    SET_GPR_U32(ctx, 31, 0x2AEFC4u);
    ctx->pc = 0x2AEFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFBCu;
            // 0x2aefc0: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFC4u; }
        if (ctx->pc != 0x2AEFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFC4u; }
        if (ctx->pc != 0x2AEFC4u) { return; }
    }
    ctx->pc = 0x2AEFC4u;
label_2aefc4:
    // 0x2aefc4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2AEFC4u;
    SET_GPR_U32(ctx, 31, 0x2AEFCCu);
    ctx->pc = 0x2AEFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFC4u;
            // 0x2aefc8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFCCu; }
        if (ctx->pc != 0x2AEFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFCCu; }
        if (ctx->pc != 0x2AEFCCu) { return; }
    }
    ctx->pc = 0x2AEFCCu;
label_2aefcc:
    // 0x2aefcc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2aefccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2aefd0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2AEFD0u;
    SET_GPR_U32(ctx, 31, 0x2AEFD8u);
    ctx->pc = 0x2AEFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFD0u;
            // 0x2aefd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFD8u; }
        if (ctx->pc != 0x2AEFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFD8u; }
        if (ctx->pc != 0x2AEFD8u) { return; }
    }
    ctx->pc = 0x2AEFD8u;
label_2aefd8:
    // 0x2aefd8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2aefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2aefdc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AEFDCu;
    SET_GPR_U32(ctx, 31, 0x2AEFE4u);
    ctx->pc = 0x2AEFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFDCu;
            // 0x2aefe0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFE4u; }
        if (ctx->pc != 0x2AEFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFE4u; }
        if (ctx->pc != 0x2AEFE4u) { return; }
    }
    ctx->pc = 0x2AEFE4u;
label_2aefe4:
    // 0x2aefe4: 0x8f859b1c  lw          $a1, -0x64E4($gp)
    ctx->pc = 0x2aefe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2aefe8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AEFE8u;
    SET_GPR_U32(ctx, 31, 0x2AEFF0u);
    ctx->pc = 0x2AEFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFE8u;
            // 0x2aefec: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFF0u; }
        if (ctx->pc != 0x2AEFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEFF0u; }
        if (ctx->pc != 0x2AEFF0u) { return; }
    }
    ctx->pc = 0x2AEFF0u;
label_2aeff0:
    // 0x2aeff0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2aeff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aeff4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2aeff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2aeff8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2aeff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeffc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2aeffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af000: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AF000u;
    SET_GPR_U32(ctx, 31, 0x2AF008u);
    ctx->pc = 0x2AF004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF000u;
            // 0x2af004: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF008u; }
        if (ctx->pc != 0x2AF008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF008u; }
        if (ctx->pc != 0x2AF008u) { return; }
    }
    ctx->pc = 0x2AF008u;
label_2af008:
    // 0x2af008: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x2af008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af00c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x2af00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2af010: 0x2648ffec  addiu       $t0, $s2, -0x14
    ctx->pc = 0x2af010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
    // 0x2af014: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2af014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2af018: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af01c: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x2af01cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2af020: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x2af020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2af024: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2af024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af028: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2AF028u;
    SET_GPR_U32(ctx, 31, 0x2AF030u);
    ctx->pc = 0x2AF02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF028u;
            // 0x2af02c: 0x24470032  addiu       $a3, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF030u; }
        if (ctx->pc != 0x2AF030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF030u; }
        if (ctx->pc != 0x2AF030u) { return; }
    }
    ctx->pc = 0x2AF030u;
label_2af030:
    // 0x2af030: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2af030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af034: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AF034u;
    {
        const bool branch_taken_0x2af034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af034) {
            ctx->pc = 0x2AF08Cu;
            goto label_2af08c;
        }
    }
    ctx->pc = 0x2AF03Cu;
    // 0x2af03c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x2af03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2af040: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AF040u;
    {
        const bool branch_taken_0x2af040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF040u;
            // 0x2af044: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af040) {
            ctx->pc = 0x2AF08Cu;
            goto label_2af08c;
        }
    }
    ctx->pc = 0x2AF048u;
    // 0x2af048: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2af048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2af04c: 0x240600ec  addiu       $a2, $zero, 0xEC
    ctx->pc = 0x2af04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x2af050: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2af050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2af054: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF054u;
    SET_GPR_U32(ctx, 31, 0x2AF05Cu);
    ctx->pc = 0x2AF058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF054u;
            // 0x2af058: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF05Cu; }
        if (ctx->pc != 0x2AF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF05Cu; }
        if (ctx->pc != 0x2AF05Cu) { return; }
    }
    ctx->pc = 0x2AF05Cu;
label_2af05c:
    // 0x2af05c: 0x2642ffec  addiu       $v0, $s2, -0x14
    ctx->pc = 0x2af05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
    // 0x2af060: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2af060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af068: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2af068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2af06c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x2af06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x2af070: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2af070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2af074: 0x246200d2  addiu       $v0, $v1, 0xD2
    ctx->pc = 0x2af074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
    // 0x2af078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af07c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AF07Cu;
    SET_GPR_U32(ctx, 31, 0x2AF084u);
    ctx->pc = 0x2AF080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF07Cu;
            // 0x2af080: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF084u; }
        if (ctx->pc != 0x2AF084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF084u; }
        if (ctx->pc != 0x2AF084u) { return; }
    }
    ctx->pc = 0x2AF084u;
label_2af084:
    // 0x2af084: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AF084u;
    {
        const bool branch_taken_0x2af084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af084) {
            ctx->pc = 0x2AF0F8u;
            goto label_2af0f8;
        }
    }
    ctx->pc = 0x2AF08Cu;
label_2af08c:
    // 0x2af08c: 0x0  nop
    ctx->pc = 0x2af08cu;
    // NOP
    // 0x2af090: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x2af090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af094: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2af094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2af098: 0x2648ffec  addiu       $t0, $s2, -0x14
    ctx->pc = 0x2af098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
    // 0x2af09c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2af09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2af0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af0a4: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x2af0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2af0a8: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x2af0a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2af0ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2af0acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0b0: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2AF0B0u;
    SET_GPR_U32(ctx, 31, 0x2AF0B8u);
    ctx->pc = 0x2AF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0B0u;
            // 0x2af0b4: 0x244700fc  addiu       $a3, $v0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0B8u; }
        if (ctx->pc != 0x2AF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0B8u; }
        if (ctx->pc != 0x2AF0B8u) { return; }
    }
    ctx->pc = 0x2AF0B8u;
label_2af0b8:
    // 0x2af0b8: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2af0bc: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x2af0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2af0c0: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2af0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2af0c4: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x2af0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2af0c8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AF0C8u;
    SET_GPR_U32(ctx, 31, 0x2AF0D0u);
    ctx->pc = 0x2AF0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0C8u;
            // 0x2af0cc: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0D0u; }
        if (ctx->pc != 0x2AF0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0D0u; }
        if (ctx->pc != 0x2AF0D0u) { return; }
    }
    ctx->pc = 0x2AF0D0u;
label_2af0d0:
    // 0x2af0d0: 0x2642ffec  addiu       $v0, $s2, -0x14
    ctx->pc = 0x2af0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
    // 0x2af0d4: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2af0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0dc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2af0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2af0e0: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x2af0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2af0e4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2af0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2af0e8: 0x24620104  addiu       $v0, $v1, 0x104
    ctx->pc = 0x2af0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x2af0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0f0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AF0F0u;
    SET_GPR_U32(ctx, 31, 0x2AF0F8u);
    ctx->pc = 0x2AF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0F0u;
            // 0x2af0f4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0F8u; }
        if (ctx->pc != 0x2AF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0F8u; }
        if (ctx->pc != 0x2AF0F8u) { return; }
    }
    ctx->pc = 0x2AF0F8u;
label_2af0f8:
    // 0x2af0f8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AF0F8u;
    SET_GPR_U32(ctx, 31, 0x2AF100u);
    ctx->pc = 0x2AF0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0F8u;
            // 0x2af0fc: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF100u; }
        if (ctx->pc != 0x2AF100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF100u; }
        if (ctx->pc != 0x2AF100u) { return; }
    }
    ctx->pc = 0x2AF100u;
label_2af100:
    // 0x2af100: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2af100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2af104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af108: 0x8f849b1c  lw          $a0, -0x64E4($gp)
    ctx->pc = 0x2af108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941468)));
    // 0x2af10c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2af10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af110: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x2AF110u;
    SET_GPR_U32(ctx, 31, 0x2AF118u);
    ctx->pc = 0x2AF114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF110u;
            // 0x2af114: 0x2447ffcc  addiu       $a3, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (runtime->hasFunction(0x21CD30u)) {
        auto targetFn = runtime->lookupFunction(0x21CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF118u; }
        if (ctx->pc != 0x2AF118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameUnderLine__FP10mgCTextureiii_0x21cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF118u; }
        if (ctx->pc != 0x2AF118u) { return; }
    }
    ctx->pc = 0x2AF118u;
label_2af118:
    // 0x2af118: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2af118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2af11c: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2af11cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2af120: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x2af120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2af124: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x2AF124u;
    {
        const bool branch_taken_0x2af124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF124u;
            // 0x2af128: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af124) {
            ctx->pc = 0x2AEFACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aefac;
        }
    }
    ctx->pc = 0x2AF12Cu;
    // 0x2af12c: 0xc088070  jal         func_2201C0
    ctx->pc = 0x2AF12Cu;
    SET_GPR_U32(ctx, 31, 0x2AF134u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF134u; }
        if (ctx->pc != 0x2AF134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF134u; }
        if (ctx->pc != 0x2AF134u) { return; }
    }
    ctx->pc = 0x2AF134u;
label_2af134:
    // 0x2af134: 0x93829b2c  lbu         $v0, -0x64D4($gp)
    ctx->pc = 0x2af134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941484)));
    // 0x2af138: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2AF138u;
    {
        const bool branch_taken_0x2af138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af138) {
            ctx->pc = 0x2AF274u;
            goto label_2af274;
        }
    }
    ctx->pc = 0x2AF140u;
    // 0x2af140: 0x8f829b28  lw          $v0, -0x64D8($gp)
    ctx->pc = 0x2af140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941480)));
    // 0x2af144: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AF144u;
    {
        const bool branch_taken_0x2af144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af144) {
            ctx->pc = 0x2AF274u;
            goto label_2af274;
        }
    }
    ctx->pc = 0x2AF14Cu;
    // 0x2af14c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2af14cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af150: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2af150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af154: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AF154u;
    SET_GPR_U32(ctx, 31, 0x2AF15Cu);
    ctx->pc = 0x2AF158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF154u;
            // 0x2af158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF15Cu; }
        if (ctx->pc != 0x2AF15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF15Cu; }
        if (ctx->pc != 0x2AF15Cu) { return; }
    }
    ctx->pc = 0x2AF15Cu;
label_2af15c:
    // 0x2af15c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2af15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2af160: 0x8f869b48  lw          $a2, -0x64B8($gp)
    ctx->pc = 0x2af160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941512)));
    // 0x2af164: 0x8f839b4c  lw          $v1, -0x64B4($gp)
    ctx->pc = 0x2af164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
    // 0x2af168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2af168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2af16c: 0x8fa70194  lw          $a3, 0x194($sp)
    ctx->pc = 0x2af16cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2af170: 0x27849b30  addiu       $a0, $gp, -0x64D0
    ctx->pc = 0x2af170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941488));
    // 0x2af174: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x2af174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
    // 0x2af178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af17c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2af17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2af180: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2af180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2af184: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2af188: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2af188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2af18c: 0x24e7000d  addiu       $a3, $a3, 0xD
    ctx->pc = 0x2af18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13));
    // 0x2af190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af194: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2af194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2af198: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2af19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1a0: 0xc094514  jal         func_251450
    ctx->pc = 0x2AF1A0u;
    SET_GPR_U32(ctx, 31, 0x2AF1A8u);
    ctx->pc = 0x2AF1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF1A0u;
            // 0x2af1a4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1A8u; }
        if (ctx->pc != 0x2AF1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1A8u; }
        if (ctx->pc != 0x2AF1A8u) { return; }
    }
    ctx->pc = 0x2AF1A8u;
label_2af1a8:
    // 0x2af1a8: 0x8f829b34  lw          $v0, -0x64CC($gp)
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941492)));
    // 0x2af1ac: 0x3c010393  lui         $at, 0x393
    ctx->pc = 0x2af1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)915 << 16));
    // 0x2af1b0: 0x34218701  ori         $at, $at, 0x8701
    ctx->pc = 0x2af1b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34561);
    // 0x2af1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af1b8: 0xaf829b34  sw          $v0, -0x64CC($gp)
    ctx->pc = 0x2af1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941492), GPR_U32(ctx, 2));
    // 0x2af1bc: 0x8f829b34  lw          $v0, -0x64CC($gp)
    ctx->pc = 0x2af1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941492)));
    // 0x2af1c0: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2af1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2af1c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF1C4u;
    {
        const bool branch_taken_0x2af1c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af1c4) {
            ctx->pc = 0x2AF1D0u;
            goto label_2af1d0;
        }
    }
    ctx->pc = 0x2AF1CCu;
    // 0x2af1cc: 0xaf809b34  sw          $zero, -0x64CC($gp)
    ctx->pc = 0x2af1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941492), GPR_U32(ctx, 0));
label_2af1d0:
    // 0x2af1d0: 0xc7809b34  lwc1        $f0, -0x64CC($gp)
    ctx->pc = 0x2af1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af1d4: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2af1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2af1d8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2af1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2af1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2af1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af1e0: 0x0  nop
    ctx->pc = 0x2af1e0u;
    // NOP
    // 0x2af1e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af1e8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2AF1E8u;
    SET_GPR_U32(ctx, 31, 0x2AF1F0u);
    ctx->pc = 0x2AF1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF1E8u;
            // 0x2af1ec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1F0u; }
        if (ctx->pc != 0x2AF1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1F0u; }
        if (ctx->pc != 0x2AF1F0u) { return; }
    }
    ctx->pc = 0x2AF1F0u;
label_2af1f0:
    // 0x2af1f0: 0xc047964  jal         func_11E590
    ctx->pc = 0x2AF1F0u;
    SET_GPR_U32(ctx, 31, 0x2AF1F8u);
    ctx->pc = 0x2AF1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF1F0u;
            // 0x2af1f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1F8u; }
        if (ctx->pc != 0x2AF1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1F8u; }
        if (ctx->pc != 0x2AF1F8u) { return; }
    }
    ctx->pc = 0x2AF1F8u;
label_2af1f8:
    // 0x2af1f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2af1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2af1fc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2af1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af200: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2af200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af204: 0xc7819b34  lwc1        $f1, -0x64CC($gp)
    ctx->pc = 0x2af204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af208: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x2af208u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2af20c: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2af20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2af210: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2af210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2af214: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x2af214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2af218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af21c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2af21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af224: 0x46030500  add.s       $f20, $f0, $f3
    ctx->pc = 0x2af224u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2af228: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x2af228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af22c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2AF22Cu;
    SET_GPR_U32(ctx, 31, 0x2AF234u);
    ctx->pc = 0x2AF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF22Cu;
            // 0x2af230: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF234u; }
        if (ctx->pc != 0x2AF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF234u; }
        if (ctx->pc != 0x2AF234u) { return; }
    }
    ctx->pc = 0x2AF234u;
label_2af234:
    // 0x2af234: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2AF234u;
    SET_GPR_U32(ctx, 31, 0x2AF23Cu);
    ctx->pc = 0x2AF238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF234u;
            // 0x2af238: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF23Cu; }
        if (ctx->pc != 0x2AF23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF23Cu; }
        if (ctx->pc != 0x2AF23Cu) { return; }
    }
    ctx->pc = 0x2AF23Cu;
label_2af23c:
    // 0x2af23c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2af23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2af240: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2af240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af244: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2af244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af248: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2af248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2af24c: 0xc7819b30  lwc1        $f1, -0x64D0($gp)
    ctx->pc = 0x2af24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af250: 0x8f849b28  lw          $a0, -0x64D8($gp)
    ctx->pc = 0x2af250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941480)));
    // 0x2af254: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2af254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2af258: 0x24a5ce50  addiu       $a1, $a1, -0x31B0
    ctx->pc = 0x2af258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954576));
    // 0x2af25c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2af25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af260: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2af260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af264: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2af264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af268: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x2af268u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2af26c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AF26Cu;
    SET_GPR_U32(ctx, 31, 0x2AF274u);
    ctx->pc = 0x2AF270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF26Cu;
            // 0x2af270: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF274u; }
        if (ctx->pc != 0x2AF274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF274u; }
        if (ctx->pc != 0x2AF274u) { return; }
    }
    ctx->pc = 0x2AF274u;
label_2af274:
    // 0x2af274: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2af274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2af278: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2af278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af27c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2af27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2af280: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AF280u;
    SET_GPR_U32(ctx, 31, 0x2AF288u);
    ctx->pc = 0x2AF284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF280u;
            // 0x2af284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF288u; }
        if (ctx->pc != 0x2AF288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF288u; }
        if (ctx->pc != 0x2AF288u) { return; }
    }
    ctx->pc = 0x2AF288u;
label_2af288:
    // 0x2af288: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AF288u;
    SET_GPR_U32(ctx, 31, 0x2AF290u);
    ctx->pc = 0x2AF28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF288u;
            // 0x2af28c: 0x8f849b0c  lw          $a0, -0x64F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF290u; }
        if (ctx->pc != 0x2AF290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF290u; }
        if (ctx->pc != 0x2AF290u) { return; }
    }
    ctx->pc = 0x2AF290u;
label_2af290:
    // 0x2af290: 0x8f839b18  lw          $v1, -0x64E8($gp)
    ctx->pc = 0x2af290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x2af294: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AF294u;
    {
        const bool branch_taken_0x2af294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af294) {
            ctx->pc = 0x2AF3A8u;
            goto label_2af3a8;
        }
    }
    ctx->pc = 0x2AF29Cu;
    // 0x2af29c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x2af29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2af2a0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2af2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2af2a4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2af2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2af2a8: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2af2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2af2ac: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x2af2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2af2b0: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x2af2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x2af2b4: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x2af2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
    // 0x2af2b8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2af2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2af2bc: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x2af2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x2af2c0: 0xc088050  jal         func_220140
    ctx->pc = 0x2AF2C0u;
    SET_GPR_U32(ctx, 31, 0x2AF2C8u);
    ctx->pc = 0x2AF2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2C0u;
            // 0x2af2c4: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF2C8u; }
        if (ctx->pc != 0x2AF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF2C8u; }
        if (ctx->pc != 0x2AF2C8u) { return; }
    }
    ctx->pc = 0x2AF2C8u;
label_2af2c8:
    // 0x2af2c8: 0x87839b54  lh          $v1, -0x64AC($gp)
    ctx->pc = 0x2af2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941524)));
    // 0x2af2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af2d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF2D0u;
    {
        const bool branch_taken_0x2af2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2D0u;
            // 0x2af2d4: 0x8f869b4c  lw          $a2, -0x64B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2d0) {
            ctx->pc = 0x2AF2E8u;
            goto label_2af2e8;
        }
    }
    ctx->pc = 0x2AF2D8u;
    // 0x2af2d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2af2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2af2dc: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF2DCu;
    {
        const bool branch_taken_0x2af2dc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2af2dc) {
            ctx->pc = 0x2AF2E8u;
            goto label_2af2e8;
        }
    }
    ctx->pc = 0x2AF2E4u;
    // 0x2af2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af2e8:
    // 0x2af2e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2af2e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af2ec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2af2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2af2f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2af2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af2f4: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x2af2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2af2f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af2fc: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x2af2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2af300: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2af300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2af304: 0x24630022  addiu       $v1, $v1, 0x22
    ctx->pc = 0x2af304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 34));
    // 0x2af308: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2af308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af30c: 0x24d50030  addiu       $s5, $a2, 0x30
    ctx->pc = 0x2af30cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2af310: 0xc7829b40  lwc1        $f2, -0x64C0($gp)
    ctx->pc = 0x2af310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af314: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2af314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2af318: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2af318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2af31c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2af31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af320: 0x0  nop
    ctx->pc = 0x2af320u;
    // NOP
    // 0x2af324: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2af324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2af328: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2af328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2af32c: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x2af32cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2af330: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF330u;
    {
        const bool branch_taken_0x2af330 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AF334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF330u;
            // 0x2af334: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af330) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF338u;
    // 0x2af338: 0x24d5003a  addiu       $s5, $a2, 0x3A
    ctx->pc = 0x2af338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 58));
label_2af33c:
    // 0x2af33c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2af33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af340: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2af340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2af344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af348:
    // 0x2af348: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF348u;
    {
        const bool branch_taken_0x2af348 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2AF34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF348u;
            // 0x2af34c: 0x8f919b18  lw          $s1, -0x64E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af348) {
            ctx->pc = 0x2AF378u;
            goto label_2af378;
        }
    }
    ctx->pc = 0x2AF350u;
    // 0x2af350: 0x2a010014  slti        $at, $s0, 0x14
    ctx->pc = 0x2af350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2af354: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF354u;
    {
        const bool branch_taken_0x2af354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF354u;
            // 0x2af358: 0x232a021  addu        $s4, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af354) {
            ctx->pc = 0x2AF378u;
            goto label_2af378;
        }
    }
    ctx->pc = 0x2AF35Cu;
    // 0x2af35c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2af35cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2af360: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AF360u;
    SET_GPR_U32(ctx, 31, 0x2AF368u);
    ctx->pc = 0x2AF364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF360u;
            // 0x2af364: 0xae951b94  sw          $s5, 0x1B94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 7060), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF368u; }
        if (ctx->pc != 0x2AF368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF368u; }
        if (ctx->pc != 0x2AF368u) { return; }
    }
    ctx->pc = 0x2AF368u;
label_2af368:
    // 0x2af368: 0xae821b98  sw          $v0, 0x1B98($s4)
    ctx->pc = 0x2af368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7064), GPR_U32(ctx, 2));
    // 0x2af36c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2af36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af370: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2af370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2af374: 0xac431c34  sw          $v1, 0x1C34($v0)
    ctx->pc = 0x2af374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7220), GPR_U32(ctx, 3));
label_2af378:
    // 0x2af378: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2af378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2af37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2af384: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2af384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2af388: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2af388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2af38c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x2af38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2af390: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2AF390u;
    {
        const bool branch_taken_0x2af390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF390u;
            // 0x2af394: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af390) {
            ctx->pc = 0x2AF348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2af348;
        }
    }
    ctx->pc = 0x2AF398u;
    // 0x2af398: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AF398u;
    SET_GPR_U32(ctx, 31, 0x2AF3A0u);
    ctx->pc = 0x2AF39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF398u;
            // 0x2af39c: 0x8f849b18  lw          $a0, -0x64E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3A0u; }
        if (ctx->pc != 0x2AF3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3A0u; }
        if (ctx->pc != 0x2AF3A0u) { return; }
    }
    ctx->pc = 0x2AF3A0u;
label_2af3a0:
    // 0x2af3a0: 0xc088070  jal         func_2201C0
    ctx->pc = 0x2AF3A0u;
    SET_GPR_U32(ctx, 31, 0x2AF3A8u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3A8u; }
        if (ctx->pc != 0x2AF3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3A8u; }
        if (ctx->pc != 0x2AF3A8u) { return; }
    }
    ctx->pc = 0x2AF3A8u;
label_2af3a8:
    // 0x2af3a8: 0x93839b38  lbu         $v1, -0x64C8($gp)
    ctx->pc = 0x2af3a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941496)));
    // 0x2af3ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF3ACu;
    {
        const bool branch_taken_0x2af3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF3ACu;
            // 0x2af3b0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3ac) {
            ctx->pc = 0x2AF3C8u;
            goto label_2af3c8;
        }
    }
    ctx->pc = 0x2AF3B4u;
    // 0x2af3b4: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x2af3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2af3b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF3B8u;
    {
        const bool branch_taken_0x2af3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af3b8) {
            ctx->pc = 0x2AF3C8u;
            goto label_2af3c8;
        }
    }
    ctx->pc = 0x2AF3C0u;
    // 0x2af3c0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AF3C0u;
    SET_GPR_U32(ctx, 31, 0x2AF3C8u);
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3C8u; }
        if (ctx->pc != 0x2AF3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3C8u; }
        if (ctx->pc != 0x2AF3C8u) { return; }
    }
    ctx->pc = 0x2AF3C8u;
label_2af3c8:
    // 0x2af3c8: 0x93839b14  lbu         $v1, -0x64EC($gp)
    ctx->pc = 0x2af3c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941460)));
    // 0x2af3cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF3CCu;
    {
        const bool branch_taken_0x2af3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af3cc) {
            ctx->pc = 0x2AF3E8u;
            goto label_2af3e8;
        }
    }
    ctx->pc = 0x2AF3D4u;
    // 0x2af3d4: 0x8f849b10  lw          $a0, -0x64F0($gp)
    ctx->pc = 0x2af3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941456)));
    // 0x2af3d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF3D8u;
    {
        const bool branch_taken_0x2af3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af3d8) {
            ctx->pc = 0x2AF3E8u;
            goto label_2af3e8;
        }
    }
    ctx->pc = 0x2AF3E0u;
    // 0x2af3e0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AF3E0u;
    SET_GPR_U32(ctx, 31, 0x2AF3E8u);
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3E8u; }
        if (ctx->pc != 0x2AF3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3E8u; }
        if (ctx->pc != 0x2AF3E8u) { return; }
    }
    ctx->pc = 0x2AF3E8u;
label_2af3e8:
    // 0x2af3e8: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2af3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2af3ec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF3ECu;
    {
        const bool branch_taken_0x2af3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF3ECu;
            // 0x2af3f0: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3ec) {
            ctx->pc = 0x2AF42Cu;
            goto label_2af42c;
        }
    }
    ctx->pc = 0x2AF3F4u;
    // 0x2af3f4: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2AF3F4u;
    SET_GPR_U32(ctx, 31, 0x2AF3FCu);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3FCu; }
        if (ctx->pc != 0x2AF3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3FCu; }
        if (ctx->pc != 0x2AF3FCu) { return; }
    }
    ctx->pc = 0x2AF3FCu;
label_2af3fc:
    // 0x2af3fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2af3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2af400: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x2af400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x2af404: 0x24a5e9c0  addiu       $a1, $a1, -0x1640
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961600));
    // 0x2af408: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2af408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2af40c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2AF40Cu;
    SET_GPR_U32(ctx, 31, 0x2AF414u);
    ctx->pc = 0x2AF410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF40Cu;
            // 0x2af410: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF414u; }
        if (ctx->pc != 0x2AF414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF414u; }
        if (ctx->pc != 0x2AF414u) { return; }
    }
    ctx->pc = 0x2AF414u;
label_2af414:
    // 0x2af414: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2af414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2af418: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x2af418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x2af41c: 0x24a5e9e0  addiu       $a1, $a1, -0x1620
    ctx->pc = 0x2af41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961632));
    // 0x2af420: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2af420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2af424: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2AF424u;
    SET_GPR_U32(ctx, 31, 0x2AF42Cu);
    ctx->pc = 0x2AF428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF424u;
            // 0x2af428: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF42Cu; }
        if (ctx->pc != 0x2AF42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF42Cu; }
        if (ctx->pc != 0x2AF42Cu) { return; }
    }
    ctx->pc = 0x2AF42Cu;
label_2af42c:
    // 0x2af42c: 0xa3809b58  sb          $zero, -0x64A8($gp)
    ctx->pc = 0x2af42cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941528), (uint8_t)GPR_U32(ctx, 0));
label_2af430:
    // 0x2af430: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2af430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2af434:
    // 0x2af434: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2af434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2af438: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2af438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af43c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2af43cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af440: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2af440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2af444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2af448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af44c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2af44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af450: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF450u;
            // 0x2af454: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF458u;
}
