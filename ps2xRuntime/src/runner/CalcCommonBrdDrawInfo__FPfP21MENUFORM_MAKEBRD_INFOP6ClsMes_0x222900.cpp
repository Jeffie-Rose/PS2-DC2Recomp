#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCommonBrdDrawInfo__FPfP21MENUFORM_MAKEBRD_INFOP6ClsMes
// Address: 0x222900 - 0x222c8c
void CalcCommonBrdDrawInfo__FPfP21MENUFORM_MAKEBRD_INFOP6ClsMes_0x222900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCommonBrdDrawInfo__FPfP21MENUFORM_MAKEBRD_INFOP6ClsMes_0x222900");
#endif

    switch (ctx->pc) {
        case 0x222964u: goto label_222964;
        case 0x2229a4u: goto label_2229a4;
        case 0x2229c8u: goto label_2229c8;
        case 0x222a60u: goto label_222a60;
        case 0x222aa8u: goto label_222aa8;
        case 0x222b04u: goto label_222b04;
        case 0x222b1cu: goto label_222b1c;
        case 0x222b40u: goto label_222b40;
        case 0x222b64u: goto label_222b64;
        case 0x222ba0u: goto label_222ba0;
        case 0x222bc8u: goto label_222bc8;
        case 0x222c58u: goto label_222c58;
        default: break;
    }

    ctx->pc = 0x222900u;

    // 0x222900: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x222900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x222904: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x222904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x222908: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x222908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x22290c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x22290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x222910: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x222910u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222914: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x222914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x222918: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x222918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x22291c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x222920: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x222920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x222924: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x222924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x222928: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x222928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22292c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222934: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x222934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x222938: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x222938u;
    {
        const bool branch_taken_0x222938 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222938u;
            // 0x22293c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222938) {
            ctx->pc = 0x222948u;
            goto label_222948;
        }
    }
    ctx->pc = 0x222940u;
    // 0x222940: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222940u;
    {
        const bool branch_taken_0x222940 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222940u;
            // 0x222944: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222940) {
            ctx->pc = 0x222950u;
            goto label_222950;
        }
    }
    ctx->pc = 0x222948u;
label_222948:
    // 0x222948: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x222948u;
    {
        const bool branch_taken_0x222948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222948u;
            // 0x22294c: 0xaf8093a0  sw          $zero, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222948) {
            ctx->pc = 0x222C58u;
            goto label_222c58;
        }
    }
    ctx->pc = 0x222950u;
label_222950:
    // 0x222950: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x222954: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x222958: 0x24a5a638  addiu       $a1, $a1, -0x59C8
    ctx->pc = 0x222958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944312));
    // 0x22295c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22295Cu;
    SET_GPR_U32(ctx, 31, 0x222964u);
    ctx->pc = 0x222960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22295Cu;
            // 0x222960: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222964u; }
        if (ctx->pc != 0x222964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222964u; }
        if (ctx->pc != 0x222964u) { return; }
    }
    ctx->pc = 0x222964u;
label_222964:
    // 0x222964: 0xaf8293a0  sw          $v0, -0x6C60($gp)
    ctx->pc = 0x222964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 2));
    // 0x222968: 0x3c02433c  lui         $v0, 0x433C
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17212 << 16));
    // 0x22296c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x22296cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x222970: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x222974: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222974u;
    {
        const bool branch_taken_0x222974 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222974) {
            ctx->pc = 0x222984u;
            goto label_222984;
        }
    }
    ctx->pc = 0x22297Cu;
    // 0x22297c: 0x3c024350  lui         $v0, 0x4350
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17232 << 16));
    // 0x222980: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x222980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_222984:
    // 0x222984: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x222984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x222988: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x222988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22298c: 0x2442ce40  addiu       $v0, $v0, -0x31C0
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954560));
    // 0x222990: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x222990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222994: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x222994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222998: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x222998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22299c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22299cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2229a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2229a4:
    // 0x2229a4: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2229a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2229a8: 0x80421821  lb          $v0, 0x1821($v0)
    ctx->pc = 0x2229a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6177)));
    // 0x2229ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2229ACu;
    {
        const bool branch_taken_0x2229ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2229ACu;
            // 0x2229b0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229ac) {
            ctx->pc = 0x2229D0u;
            goto label_2229d0;
        }
    }
    ctx->pc = 0x2229B4u;
    // 0x2229b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2229b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2229bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2229c0: 0xc05484c  jal         func_152130
    ctx->pc = 0x2229C0u;
    SET_GPR_U32(ctx, 31, 0x2229C8u);
    ctx->pc = 0x2229C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2229C0u;
            // 0x2229c4: 0x24451801  addiu       $a1, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152130u;
    if (runtime->hasFunction(0x152130u)) {
        auto targetFn = runtime->lookupFunction(0x152130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2229C8u; }
        if (ctx->pc != 0x2229C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFPc_0x152130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2229C8u; }
        if (ctx->pc != 0x2229C8u) { return; }
    }
    ctx->pc = 0x2229C8u;
label_2229c8:
    // 0x2229c8: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x2229c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x2229cc: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x2229ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_2229d0:
    // 0x2229d0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x2229d4: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2229d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2229d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2229d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2229dc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2229dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2229e0: 0x0  nop
    ctx->pc = 0x2229e0u;
    // NOP
    // 0x2229e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2229E4u;
    {
        const bool branch_taken_0x2229e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2229e4) {
            ctx->pc = 0x2229F0u;
            goto label_2229f0;
        }
    }
    ctx->pc = 0x2229ECu;
    // 0x2229ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2229ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2229f0:
    // 0x2229f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2229f4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2229f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2229f8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x2229f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2229fc: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2229FCu;
    {
        const bool branch_taken_0x2229fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2229FCu;
            // 0x222a00: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229fc) {
            ctx->pc = 0x2229A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2229a4;
        }
    }
    ctx->pc = 0x222A04u;
    // 0x222a04: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x222a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x222a08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x222a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x222a0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222a10: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x222a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222a14: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x222a14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x222a18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x222a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x222a1c: 0xe421ce00  swc1        $f1, -0x3200($at)
    ctx->pc = 0x222a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294954496), bits); }
    // 0x222a20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x222a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222a24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x222a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x222a28: 0xc420ce00  lwc1        $f0, -0x3200($at)
    ctx->pc = 0x222a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222a2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x222a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222a30: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x222a34: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x222a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x222a38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x222a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x222a3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x222a40: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x222a40u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x222a44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x222a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x222a48: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x222a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x222a4c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x222a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x222a50: 0xc434ce00  lwc1        $f20, -0x3200($at)
    ctx->pc = 0x222a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222a54: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x222a54u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
    // 0x222a58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222A58u;
    SET_GPR_U32(ctx, 31, 0x222A60u);
    ctx->pc = 0x222A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222A58u;
            // 0x222a5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A60u; }
        if (ctx->pc != 0x222A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A60u; }
        if (ctx->pc != 0x222A60u) { return; }
    }
    ctx->pc = 0x222A60u;
label_222a60:
    // 0x222a60: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x222a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222a64: 0x29883  sra         $s3, $v0, 2
    ctx->pc = 0x222a64u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 2));
    // 0x222a68: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x222a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x222a6c: 0x8e061e14  lw          $a2, 0x1E14($s0)
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
    // 0x222a70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222a74: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x222a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x222a78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x222a78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x222a7c: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x222a80: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x222a80u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222a84: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x222a84u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a88: 0x0  nop
    ctx->pc = 0x222a88u;
    // NOP
    // 0x222a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222a90: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x222a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222a94: 0x0  nop
    ctx->pc = 0x222a94u;
    // NOP
    // 0x222a98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x222A98u;
    {
        const bool branch_taken_0x222a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222A98u;
            // 0x222a9c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a98) {
            ctx->pc = 0x222AB0u;
            goto label_222ab0;
        }
    }
    ctx->pc = 0x222AA0u;
    // 0x222aa0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222AA0u;
    SET_GPR_U32(ctx, 31, 0x222AA8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AA8u; }
        if (ctx->pc != 0x222AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AA8u; }
        if (ctx->pc != 0x222AA8u) { return; }
    }
    ctx->pc = 0x222AA8u;
label_222aa8:
    // 0x222aa8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x222aa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_222ab0:
    // 0x222ab0: 0x8e061e18  lw          $a2, 0x1E18($s0)
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
    // 0x222ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ab8: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x222ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x222abc: 0x4600a0c3  div.s       $f3, $f20, $f0
    ctx->pc = 0x222abcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x222ac0: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x222ac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x222ac4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x222ac4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ac8: 0x0  nop
    ctx->pc = 0x222ac8u;
    // NOP
    // 0x222acc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x222accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x222ad0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x222ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222ad4: 0x0  nop
    ctx->pc = 0x222ad4u;
    // NOP
    // 0x222ad8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x222AD8u;
    {
        const bool branch_taken_0x222ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222AD8u;
            // 0x222adc: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ad8) {
            ctx->pc = 0x222B08u;
            goto label_222b08;
        }
    }
    ctx->pc = 0x222AE0u;
    // 0x222ae0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x222ae0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222ae4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x222ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222aec: 0x0  nop
    ctx->pc = 0x222aecu;
    // NOP
    // 0x222af0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222af4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x222af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x222af8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x222af8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x222afc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222AFCu;
    SET_GPR_U32(ctx, 31, 0x222B04u);
    ctx->pc = 0x222B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222AFCu;
            // 0x222b00: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B04u; }
        if (ctx->pc != 0x222B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B04u; }
        if (ctx->pc != 0x222B04u) { return; }
    }
    ctx->pc = 0x222B04u;
label_222b04:
    // 0x222b04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222b08:
    // 0x222b08: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x222b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222b0c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x222b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x222b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b14: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222B14u;
    SET_GPR_U32(ctx, 31, 0x222B1Cu);
    ctx->pc = 0x222B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222B14u;
            // 0x222b18: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B1Cu; }
        if (ctx->pc != 0x222B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B1Cu; }
        if (ctx->pc != 0x222B1Cu) { return; }
    }
    ctx->pc = 0x222B1Cu;
label_222b1c:
    // 0x222b1c: 0xae141b94  sw          $s4, 0x1B94($s0)
    ctx->pc = 0x222b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 20));
    // 0x222b20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222b24: 0xae021b98  sw          $v0, 0x1B98($s0)
    ctx->pc = 0x222b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 2));
    // 0x222b28: 0xae031c34  sw          $v1, 0x1C34($s0)
    ctx->pc = 0x222b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 3));
    // 0x222b2c: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x222b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x222b30: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x222b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b38: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222B38u;
    SET_GPR_U32(ctx, 31, 0x222B40u);
    ctx->pc = 0x222B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222B38u;
            // 0x222b3c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B40u; }
        if (ctx->pc != 0x222B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B40u; }
        if (ctx->pc != 0x222B40u) { return; }
    }
    ctx->pc = 0x222B40u;
label_222b40:
    // 0x222b40: 0xae131b9c  sw          $s3, 0x1B9C($s0)
    ctx->pc = 0x222b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 19));
    // 0x222b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222b48: 0xae021ba0  sw          $v0, 0x1BA0($s0)
    ctx->pc = 0x222b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 2));
    // 0x222b4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x222b4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b50: 0xae031c38  sw          $v1, 0x1C38($s0)
    ctx->pc = 0x222b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 3));
    // 0x222b54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x222b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x222b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x222b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b60: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x222b60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222b64:
    // 0x222b64: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x222b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x222b68: 0x80421821  lb          $v0, 0x1821($v0)
    ctx->pc = 0x222b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6177)));
    // 0x222b6c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x222B6Cu;
    {
        const bool branch_taken_0x222b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b6c) {
            ctx->pc = 0x222BF4u;
            goto label_222bf4;
        }
    }
    ctx->pc = 0x222B74u;
    // 0x222b74: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x222b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x222b78: 0x3c0242b8  lui         $v0, 0x42B8
    ctx->pc = 0x222b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17080 << 16));
    // 0x222b7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x222b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222b80: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x222b80u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222b84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222b88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222b8c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x222b8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x222b90: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x222b90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x222b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b98: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222B98u;
    SET_GPR_U32(ctx, 31, 0x222BA0u);
    ctx->pc = 0x222B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222B98u;
            // 0x222b9c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BA0u; }
        if (ctx->pc != 0x222BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BA0u; }
        if (ctx->pc != 0x222BA0u) { return; }
    }
    ctx->pc = 0x222BA0u;
label_222ba0:
    // 0x222ba0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x222ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222ba4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x222ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ba8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x222ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x222bac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x222bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222bb0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x222bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x222bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222bb8: 0x0  nop
    ctx->pc = 0x222bb8u;
    // NOP
    // 0x222bbc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x222bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x222bc0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222BC0u;
    SET_GPR_U32(ctx, 31, 0x222BC8u);
    ctx->pc = 0x222BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222BC0u;
            // 0x222bc4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BC8u; }
        if (ctx->pc != 0x222BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222BC8u; }
        if (ctx->pc != 0x222BC8u) { return; }
    }
    ctx->pc = 0x222BC8u;
label_222bc8:
    // 0x222bc8: 0x26c30002  addiu       $v1, $s6, 0x2
    ctx->pc = 0x222bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x222bcc: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x222BCCu;
    {
        const bool branch_taken_0x222bcc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x222BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BCCu;
            // 0x222bd0: 0x28610014  slti        $at, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bcc) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222BD4u;
    // 0x222bd4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x222BD4u;
    {
        const bool branch_taken_0x222bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BD4u;
            // 0x222bd8: 0x2143021  addu        $a2, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bd4) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222BDCu;
    // 0x222bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222be0: 0xacc21ba4  sw          $v0, 0x1BA4($a2)
    ctx->pc = 0x222be0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7076), GPR_U32(ctx, 2));
    // 0x222be4: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x222be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x222be8: 0xacd71ba8  sw          $s7, 0x1BA8($a2)
    ctx->pc = 0x222be8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7080), GPR_U32(ctx, 23));
    // 0x222bec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x222BECu;
    {
        const bool branch_taken_0x222bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BECu;
            // 0x222bf0: 0xac431c3c  sw          $v1, 0x1C3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bec) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222BF4u;
label_222bf4:
    // 0x222bf4: 0x0  nop
    ctx->pc = 0x222bf4u;
    // NOP
    // 0x222bf8: 0x26c20002  addiu       $v0, $s6, 0x2
    ctx->pc = 0x222bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x222bfc: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222BFCu;
    {
        const bool branch_taken_0x222bfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x222C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BFCu;
            // 0x222c00: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bfc) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222C04u;
    // 0x222c04: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x222C04u;
    {
        const bool branch_taken_0x222c04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C04u;
            // 0x222c08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c04) {
            ctx->pc = 0x222C24u;
            goto label_222c24;
        }
    }
    ctx->pc = 0x222C0Cu;
    // 0x222c0c: 0x2143021  addu        $a2, $s0, $s4
    ctx->pc = 0x222c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x222c10: 0xacc21ba4  sw          $v0, 0x1BA4($a2)
    ctx->pc = 0x222c10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7076), GPR_U32(ctx, 2));
    // 0x222c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222c18: 0xacc21ba8  sw          $v0, 0x1BA8($a2)
    ctx->pc = 0x222c18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7080), GPR_U32(ctx, 2));
    // 0x222c1c: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x222c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x222c20: 0xac431c3c  sw          $v1, 0x1C3C($v0)
    ctx->pc = 0x222c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7228), GPR_U32(ctx, 3));
label_222c24:
    // 0x222c24: 0x0  nop
    ctx->pc = 0x222c24u;
    // NOP
    // 0x222c28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x222c28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x222c2c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x222c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x222c30: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x222c34: 0x26730022  addiu       $s3, $s3, 0x22
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
    // 0x222c38: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x222c3c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x222C3Cu;
    {
        const bool branch_taken_0x222c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C3Cu;
            // 0x222c40: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c3c) {
            ctx->pc = 0x222B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222b64;
        }
    }
    ctx->pc = 0x222C44u;
    // 0x222c44: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x222c48: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x222c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c4c: 0x2484ce10  addiu       $a0, $a0, -0x31F0
    ctx->pc = 0x222c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954512));
    // 0x222c50: 0xc049c18  jal         func_127060
    ctx->pc = 0x222C50u;
    SET_GPR_U32(ctx, 31, 0x222C58u);
    ctx->pc = 0x222C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222C50u;
            // 0x222c54: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C58u; }
        if (ctx->pc != 0x222C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C58u; }
        if (ctx->pc != 0x222C58u) { return; }
    }
    ctx->pc = 0x222C58u;
label_222c58:
    // 0x222c58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x222c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x222c5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x222c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222c60: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x222c60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x222c64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x222c64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x222c68: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x222c68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222c6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x222c6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222c70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x222c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222c74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x222c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222c78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x222c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222c7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x222c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222c80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c84: 0x3e00008  jr          $ra
    ctx->pc = 0x222C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C84u;
            // 0x222c88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222C8Cu;
}
