#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StatusParamStep__16CBattleCharaInfoFPi
// Address: 0x1a08d0 - 0x1a0c5c
void StatusParamStep__16CBattleCharaInfoFPi_0x1a08d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatusParamStep__16CBattleCharaInfoFPi_0x1a08d0");
#endif

    switch (ctx->pc) {
        case 0x1a0908u: goto label_1a0908;
        case 0x1a0914u: goto label_1a0914;
        case 0x1a0920u: goto label_1a0920;
        case 0x1a0978u: goto label_1a0978;
        case 0x1a09dcu: goto label_1a09dc;
        case 0x1a0a54u: goto label_1a0a54;
        case 0x1a0a9cu: goto label_1a0a9c;
        case 0x1a0aacu: goto label_1a0aac;
        case 0x1a0af0u: goto label_1a0af0;
        case 0x1a0b00u: goto label_1a0b00;
        case 0x1a0b44u: goto label_1a0b44;
        case 0x1a0b7cu: goto label_1a0b7c;
        case 0x1a0bc0u: goto label_1a0bc0;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0c3cu: goto label_1a0c3c;
        default: break;
    }

    ctx->pc = 0x1a08d0u;

    // 0x1a08d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a08d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a08d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a08d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a08d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a08dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a08e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a08e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a08e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a08e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a08e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a08ec: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a08f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A08F0u;
    {
        const bool branch_taken_0x1a08f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A08F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08F0u;
            // 0x1a08f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08f0) {
            ctx->pc = 0x1A0900u;
            goto label_1a0900;
        }
    }
    ctx->pc = 0x1A08F8u;
    // 0x1a08f8: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1A08F8u;
    {
        const bool branch_taken_0x1a08f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08F8u;
            // 0x1a08fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08f8) {
            ctx->pc = 0x1A0C40u;
            goto label_1a0c40;
        }
    }
    ctx->pc = 0x1A0900u;
label_1a0900:
    // 0x1a0900: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0908u; }
        if (ctx->pc != 0x1A0908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0908u; }
        if (ctx->pc != 0x1A0908u) { return; }
    }
    ctx->pc = 0x1A0908u;
label_1a0908:
    // 0x1a0908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a090c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A090Cu;
    SET_GPR_U32(ctx, 31, 0x1A0914u);
    ctx->pc = 0x1A0910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A090Cu;
            // 0x1a0910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0914u; }
        if (ctx->pc != 0x1A0914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0914u; }
        if (ctx->pc != 0x1A0914u) { return; }
    }
    ctx->pc = 0x1A0914u;
label_1a0914:
    // 0x1a0914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0918: 0xc068140  jal         func_1A0500
    ctx->pc = 0x1A0918u;
    SET_GPR_U32(ctx, 31, 0x1A0920u);
    ctx->pc = 0x1A091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0918u;
            // 0x1a091c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0920u; }
        if (ctx->pc != 0x1A0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0920u; }
        if (ctx->pc != 0x1A0920u) { return; }
    }
    ctx->pc = 0x1A0920u;
label_1a0920:
    // 0x1a0920: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0920u;
    {
        const bool branch_taken_0x1a0920 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0920u;
            // 0x1a0924: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0920) {
            ctx->pc = 0x1A092Cu;
            goto label_1a092c;
        }
    }
    ctx->pc = 0x1A0928u;
    // 0x1a0928: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a0928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1a092c:
    // 0x1a092c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x1a092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1a0930: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a0930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a0934: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0934u;
    {
        const bool branch_taken_0x1a0934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0934) {
            ctx->pc = 0x1A094Cu;
            goto label_1a094c;
        }
    }
    ctx->pc = 0x1A093Cu;
    // 0x1a093c: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x1a093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1a0940: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a0944: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0944u;
    {
        const bool branch_taken_0x1a0944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0944u;
            // 0x1a0948: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0944) {
            ctx->pc = 0x1A0980u;
            goto label_1a0980;
        }
    }
    ctx->pc = 0x1A094Cu;
label_1a094c:
    // 0x1a094c: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1a0950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a0950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0954: 0xa6620014  sh          $v0, 0x14($s3)
    ctx->pc = 0x1a0954u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0958: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1a095c: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x1a095cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1a0960: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0960u;
    {
        const bool branch_taken_0x1a0960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0960) {
            ctx->pc = 0x1A097Cu;
            goto label_1a097c;
        }
    }
    ctx->pc = 0x1A0968u;
    // 0x1a0968: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a096c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a096cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0970: 0xc065b44  jal         func_196D10
    ctx->pc = 0x1A0970u;
    SET_GPR_U32(ctx, 31, 0x1A0978u);
    ctx->pc = 0x1A0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0970u;
            // 0x1a0974: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0978u; }
        if (ctx->pc != 0x1A0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0978u; }
        if (ctx->pc != 0x1A0978u) { return; }
    }
    ctx->pc = 0x1A0978u;
label_1a0978:
    // 0x1a0978: 0xa6600014  sh          $zero, 0x14($s3)
    ctx->pc = 0x1a0978u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 0));
label_1a097c:
    // 0x1a097c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1a097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1a0980:
    // 0x1a0980: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A0980u;
    {
        const bool branch_taken_0x1a0980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0980u;
            // 0x1a0984: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0980) {
            ctx->pc = 0x1A0A5Cu;
            goto label_1a0a5c;
        }
    }
    ctx->pc = 0x1A0988u;
    // 0x1a0988: 0x86620016  lh          $v0, 0x16($s3)
    ctx->pc = 0x1a0988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1a098c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0990: 0xa6620016  sh          $v0, 0x16($s3)
    ctx->pc = 0x1a0990u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0994: 0x86620016  lh          $v0, 0x16($s3)
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1a0998: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1a0998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1a099c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A099Cu;
    {
        const bool branch_taken_0x1a099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a099c) {
            ctx->pc = 0x1A0A58u;
            goto label_1a0a58;
        }
    }
    ctx->pc = 0x1A09A4u;
    // 0x1a09a4: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x1a09a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1a09a8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1a09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1a09ac: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a09acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1a09b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a09b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a09b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a09b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a09b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a09bc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a09c0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1a09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09c4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a09c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a09c8: 0x0  nop
    ctx->pc = 0x1a09c8u;
    // NOP
    // 0x1a09cc: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1A09CCu;
    {
        const bool branch_taken_0x1a09cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A09D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09CCu;
            // 0x1a09d0: 0x46011302  mul.s       $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09cc) {
            ctx->pc = 0x1A0A58u;
            goto label_1a0a58;
        }
    }
    ctx->pc = 0x1A09D4u;
    // 0x1a09d4: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1A09D4u;
    SET_GPR_U32(ctx, 31, 0x1A09DCu);
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09DCu; }
        if (ctx->pc != 0x1A09DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09DCu; }
        if (ctx->pc != 0x1A09DCu) { return; }
    }
    ctx->pc = 0x1A09DCu;
label_1a09dc:
    // 0x1a09dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a09dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a09e0: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x1a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1a09e4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1a09e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a09e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a09ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a09ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a09f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a09f4: 0x0  nop
    ctx->pc = 0x1a09f4u;
    // NOP
    // 0x1a09f8: 0x460c0081  sub.s       $f2, $f0, $f12
    ctx->pc = 0x1a09f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1a09fc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a09fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0a00: 0x0  nop
    ctx->pc = 0x1a0a00u;
    // NOP
    // 0x1a0a04: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1A0A04u;
    {
        const bool branch_taken_0x1a0a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A04u;
            // 0x1a0a08: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a04) {
            ctx->pc = 0x1A0A3Cu;
            goto label_1a0a3c;
        }
    }
    ctx->pc = 0x1A0A0Cu;
    // 0x1a0a0c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1a0a0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a0a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0a14: 0x0  nop
    ctx->pc = 0x1a0a14u;
    // NOP
    // 0x1a0a18: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1a0a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0a1c: 0x0  nop
    ctx->pc = 0x1a0a1cu;
    // NOP
    // 0x1a0a20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0A20u;
    {
        const bool branch_taken_0x1a0a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A20u;
            // 0x1a0a24: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a20) {
            ctx->pc = 0x1A0A3Cu;
            goto label_1a0a3c;
        }
    }
    ctx->pc = 0x1A0A28u;
    // 0x1a0a28: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1a0a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0a2c: 0x0  nop
    ctx->pc = 0x1a0a2cu;
    // NOP
    // 0x1a0a30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0A30u;
    {
        const bool branch_taken_0x1a0a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0a30) {
            ctx->pc = 0x1A0A3Cu;
            goto label_1a0a3c;
        }
    }
    ctx->pc = 0x1A0A38u;
    // 0x1a0a38: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1a0a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1a0a3c:
    // 0x1a0a3c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1a0a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a0a40: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a0a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a44: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0A44u;
    {
        const bool branch_taken_0x1a0a44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A44u;
            // 0x1a0a48: 0xa6600016  sh          $zero, 0x16($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a44) {
            ctx->pc = 0x1A0A58u;
            goto label_1a0a58;
        }
    }
    ctx->pc = 0x1A0A4Cu;
    // 0x1a0a4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A0A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A54u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A54u; }
        if (ctx->pc != 0x1A0A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A54u; }
        if (ctx->pc != 0x1A0A54u) { return; }
    }
    ctx->pc = 0x1A0A54u;
label_1a0a54:
    // 0x1a0a54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a0a58:
    // 0x1a0a58: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x1a0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_1a0a5c:
    // 0x1a0a5c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A0A5Cu;
    {
        const bool branch_taken_0x1a0a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A5Cu;
            // 0x1a0a60: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a5c) {
            ctx->pc = 0x1A0B04u;
            goto label_1a0b04;
        }
    }
    ctx->pc = 0x1A0A64u;
    // 0x1a0a64: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1a0a68: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0A68u;
    {
        const bool branch_taken_0x1a0a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A68u;
            // 0x1a0a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a68) {
            ctx->pc = 0x1A0AB4u;
            goto label_1a0ab4;
        }
    }
    ctx->pc = 0x1A0A70u;
    // 0x1a0a70: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0a74: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a0a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0a7c: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x1a0a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0a80: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0a84: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a0a88: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0A88u;
    {
        const bool branch_taken_0x1a0a88 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A88u;
            // 0x1a0a8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a88) {
            ctx->pc = 0x1A0B00u;
            goto label_1a0b00;
        }
    }
    ctx->pc = 0x1A0A90u;
    // 0x1a0a90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a0a94: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0A94u;
    SET_GPR_U32(ctx, 31, 0x1A0A9Cu);
    ctx->pc = 0x1A0A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A94u;
            // 0x1a0a98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A9Cu; }
        if (ctx->pc != 0x1A0A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A9Cu; }
        if (ctx->pc != 0x1A0A9Cu) { return; }
    }
    ctx->pc = 0x1A0A9Cu;
label_1a0a9c:
    // 0x1a0a9c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0aa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0aa4: 0xc067d48  jal         func_19F520
    ctx->pc = 0x1A0AA4u;
    SET_GPR_U32(ctx, 31, 0x1A0AACu);
    ctx->pc = 0x1A0AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AA4u;
            // 0x1a0aa8: 0xa440000c  sh          $zero, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AACu; }
        if (ctx->pc != 0x1A0AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AACu; }
        if (ctx->pc != 0x1A0AACu) { return; }
    }
    ctx->pc = 0x1A0AACu;
label_1a0aac:
    // 0x1a0aac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0AACu;
    {
        const bool branch_taken_0x1a0aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0aac) {
            ctx->pc = 0x1A0B00u;
            goto label_1a0b00;
        }
    }
    ctx->pc = 0x1A0AB4u;
label_1a0ab4:
    // 0x1a0ab4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0AB4u;
    {
        const bool branch_taken_0x1a0ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0ab4) {
            ctx->pc = 0x1A0B00u;
            goto label_1a0b00;
        }
    }
    ctx->pc = 0x1A0ABCu;
    // 0x1a0abc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0ac0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A0AC0u;
    {
        const bool branch_taken_0x1a0ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ac0) {
            ctx->pc = 0x1A0B00u;
            goto label_1a0b00;
        }
    }
    ctx->pc = 0x1A0AC8u;
    // 0x1a0ac8: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x1a0ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x1a0acc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0ad0: 0xa462003e  sh          $v0, 0x3E($v1)
    ctx->pc = 0x1a0ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0ad4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0ad8: 0x8442003e  lh          $v0, 0x3E($v0)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x1a0adc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0ADCu;
    {
        const bool branch_taken_0x1a0adc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0ADCu;
            // 0x1a0ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0adc) {
            ctx->pc = 0x1A0B00u;
            goto label_1a0b00;
        }
    }
    ctx->pc = 0x1A0AE4u;
    // 0x1a0ae4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a0ae8: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0AE8u;
    SET_GPR_U32(ctx, 31, 0x1A0AF0u);
    ctx->pc = 0x1A0AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AE8u;
            // 0x1a0aec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AF0u; }
        if (ctx->pc != 0x1A0AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AF0u; }
        if (ctx->pc != 0x1A0AF0u) { return; }
    }
    ctx->pc = 0x1A0AF0u;
label_1a0af0:
    // 0x1a0af0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0af4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0af8: 0xc067d48  jal         func_19F520
    ctx->pc = 0x1A0AF8u;
    SET_GPR_U32(ctx, 31, 0x1A0B00u);
    ctx->pc = 0x1A0AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AF8u;
            // 0x1a0afc: 0xa440003e  sh          $zero, 0x3E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B00u; }
        if (ctx->pc != 0x1A0B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B00u; }
        if (ctx->pc != 0x1A0B00u) { return; }
    }
    ctx->pc = 0x1A0B00u;
label_1a0b00:
    // 0x1a0b00: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1a0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_1a0b04:
    // 0x1a0b04: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A0B04u;
    {
        const bool branch_taken_0x1a0b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B04u;
            // 0x1a0b08: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b04) {
            ctx->pc = 0x1A0B80u;
            goto label_1a0b80;
        }
    }
    ctx->pc = 0x1A0B0Cu;
    // 0x1a0b0c: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x1a0b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1a0b10: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0B10u;
    {
        const bool branch_taken_0x1a0b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B10u;
            // 0x1a0b14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b10) {
            ctx->pc = 0x1A0B4Cu;
            goto label_1a0b4c;
        }
    }
    ctx->pc = 0x1A0B18u;
    // 0x1a0b18: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0b1c: 0x8462000e  lh          $v0, 0xE($v1)
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1a0b20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0b24: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1a0b24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0b28: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0b2c: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1a0b30: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0B30u;
    {
        const bool branch_taken_0x1a0b30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B30u;
            // 0x1a0b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b30) {
            ctx->pc = 0x1A0B7Cu;
            goto label_1a0b7c;
        }
    }
    ctx->pc = 0x1A0B38u;
    // 0x1a0b38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0b3c: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B44u);
    ctx->pc = 0x1A0B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B3Cu;
            // 0x1a0b40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B44u; }
        if (ctx->pc != 0x1A0B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B44u; }
        if (ctx->pc != 0x1A0B44u) { return; }
    }
    ctx->pc = 0x1A0B44u;
label_1a0b44:
    // 0x1a0b44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0B44u;
    {
        const bool branch_taken_0x1a0b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b44) {
            ctx->pc = 0x1A0B7Cu;
            goto label_1a0b7c;
        }
    }
    ctx->pc = 0x1A0B4Cu;
label_1a0b4c:
    // 0x1a0b4c: 0x1446000b  bne         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0B4Cu;
    {
        const bool branch_taken_0x1a0b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a0b4c) {
            ctx->pc = 0x1A0B7Cu;
            goto label_1a0b7c;
        }
    }
    ctx->pc = 0x1A0B54u;
    // 0x1a0b54: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0b58: 0x846201e0  lh          $v0, 0x1E0($v1)
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x1a0b5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0b60: 0xa46201e0  sh          $v0, 0x1E0($v1)
    ctx->pc = 0x1a0b60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 480), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0b64: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0b68: 0x844201e0  lh          $v0, 0x1E0($v0)
    ctx->pc = 0x1a0b68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x1a0b6c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0B6Cu;
    {
        const bool branch_taken_0x1a0b6c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B6Cu;
            // 0x1a0b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b6c) {
            ctx->pc = 0x1A0B7Cu;
            goto label_1a0b7c;
        }
    }
    ctx->pc = 0x1A0B74u;
    // 0x1a0b74: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0B74u;
    SET_GPR_U32(ctx, 31, 0x1A0B7Cu);
    ctx->pc = 0x1A0B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B74u;
            // 0x1a0b78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B7Cu; }
        if (ctx->pc != 0x1A0B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B7Cu; }
        if (ctx->pc != 0x1A0B7Cu) { return; }
    }
    ctx->pc = 0x1A0B7Cu;
label_1a0b7c:
    // 0x1a0b7c: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x1a0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_1a0b80:
    // 0x1a0b80: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A0B80u;
    {
        const bool branch_taken_0x1a0b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B80u;
            // 0x1a0b84: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b80) {
            ctx->pc = 0x1A0BFCu;
            goto label_1a0bfc;
        }
    }
    ctx->pc = 0x1A0B88u;
    // 0x1a0b88: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1a0b8c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0B8Cu;
    {
        const bool branch_taken_0x1a0b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B8Cu;
            // 0x1a0b90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b8c) {
            ctx->pc = 0x1A0BC8u;
            goto label_1a0bc8;
        }
    }
    ctx->pc = 0x1A0B94u;
    // 0x1a0b94: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0b98: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1a0b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a0b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0ba0: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x1a0ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0ba4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0ba8: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x1a0ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a0bac: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0BACu;
    {
        const bool branch_taken_0x1a0bac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BACu;
            // 0x1a0bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bac) {
            ctx->pc = 0x1A0BF8u;
            goto label_1a0bf8;
        }
    }
    ctx->pc = 0x1A0BB4u;
    // 0x1a0bb4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a0bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a0bb8: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0BB8u;
    SET_GPR_U32(ctx, 31, 0x1A0BC0u);
    ctx->pc = 0x1A0BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BB8u;
            // 0x1a0bbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC0u; }
        if (ctx->pc != 0x1A0BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC0u; }
        if (ctx->pc != 0x1A0BC0u) { return; }
    }
    ctx->pc = 0x1A0BC0u;
label_1a0bc0:
    // 0x1a0bc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0BC0u;
    {
        const bool branch_taken_0x1a0bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0bc0) {
            ctx->pc = 0x1A0BF8u;
            goto label_1a0bf8;
        }
    }
    ctx->pc = 0x1A0BC8u;
label_1a0bc8:
    // 0x1a0bc8: 0x1446000b  bne         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0BC8u;
    {
        const bool branch_taken_0x1a0bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a0bc8) {
            ctx->pc = 0x1A0BF8u;
            goto label_1a0bf8;
        }
    }
    ctx->pc = 0x1A0BD0u;
    // 0x1a0bd0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0bd4: 0x846201e2  lh          $v0, 0x1E2($v1)
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 482)));
    // 0x1a0bd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0bdc: 0xa46201e2  sh          $v0, 0x1E2($v1)
    ctx->pc = 0x1a0bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 482), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0be0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0be4: 0x844201e2  lh          $v0, 0x1E2($v0)
    ctx->pc = 0x1a0be4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 482)));
    // 0x1a0be8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0BE8u;
    {
        const bool branch_taken_0x1a0be8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BE8u;
            // 0x1a0bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0be8) {
            ctx->pc = 0x1A0BF8u;
            goto label_1a0bf8;
        }
    }
    ctx->pc = 0x1A0BF0u;
    // 0x1a0bf0: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0BF0u;
    SET_GPR_U32(ctx, 31, 0x1A0BF8u);
    ctx->pc = 0x1A0BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BF0u;
            // 0x1a0bf4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF8u; }
        if (ctx->pc != 0x1A0BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF8u; }
        if (ctx->pc != 0x1A0BF8u) { return; }
    }
    ctx->pc = 0x1A0BF8u;
label_1a0bf8:
    // 0x1a0bf8: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1a0bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_1a0bfc:
    // 0x1a0bfc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0BFCu;
    {
        const bool branch_taken_0x1a0bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BFCu;
            // 0x1a0c00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bfc) {
            ctx->pc = 0x1A0C40u;
            goto label_1a0c40;
        }
    }
    ctx->pc = 0x1A0C04u;
    // 0x1a0c04: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1a0c08: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A0C08u;
    {
        const bool branch_taken_0x1a0c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c08) {
            ctx->pc = 0x1A0C3Cu;
            goto label_1a0c3c;
        }
    }
    ctx->pc = 0x1A0C10u;
    // 0x1a0c10: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1a0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0c14: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x1a0c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1a0c18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0c1c: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x1a0c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a0c20: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0c24: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1a0c28: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0C28u;
    {
        const bool branch_taken_0x1a0c28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A0C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C28u;
            // 0x1a0c2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c28) {
            ctx->pc = 0x1A0C3Cu;
            goto label_1a0c3c;
        }
    }
    ctx->pc = 0x1A0C30u;
    // 0x1a0c30: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0c34: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0C34u;
    SET_GPR_U32(ctx, 31, 0x1A0C3Cu);
    ctx->pc = 0x1A0C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C34u;
            // 0x1a0c38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C3Cu; }
        if (ctx->pc != 0x1A0C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C3Cu; }
        if (ctx->pc != 0x1A0C3Cu) { return; }
    }
    ctx->pc = 0x1A0C3Cu;
label_1a0c3c:
    // 0x1a0c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c40:
    // 0x1a0c40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C54u;
            // 0x1a0c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0C5Cu;
}
