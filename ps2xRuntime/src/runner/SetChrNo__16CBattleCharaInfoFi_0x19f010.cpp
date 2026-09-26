#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetChrNo__16CBattleCharaInfoFi
// Address: 0x19f010 - 0x19f208
void SetChrNo__16CBattleCharaInfoFi_0x19f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetChrNo__16CBattleCharaInfoFi_0x19f010");
#endif

    switch (ctx->pc) {
        case 0x19f030u: goto label_19f030;
        case 0x19f048u: goto label_19f048;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f160u: goto label_19f160;
        case 0x19f170u: goto label_19f170;
        case 0x19f180u: goto label_19f180;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1f0u: goto label_19f1f0;
        default: break;
    }

    ctx->pc = 0x19f010u;

    // 0x19f010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f020: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f028: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19F028u;
    SET_GPR_U32(ctx, 31, 0x19F030u);
    ctx->pc = 0x19F02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F028u;
            // 0x19f02c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F030u; }
        if (ctx->pc != 0x19F030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F030u; }
        if (ctx->pc != 0x19F030u) { return; }
    }
    ctx->pc = 0x19F030u;
label_19f030:
    // 0x19f030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19f030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f034: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x19f034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f038: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F038u;
    {
        const bool branch_taken_0x19f038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x19f038) {
            ctx->pc = 0x19F048u;
            goto label_19f048;
        }
    }
    ctx->pc = 0x19F040u;
    // 0x19f040: 0xc067f40  jal         func_19FD00
    ctx->pc = 0x19F040u;
    SET_GPR_U32(ctx, 31, 0x19F048u);
    ctx->pc = 0x19F044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F040u;
            // 0x19f044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FD00u;
    if (runtime->hasFunction(0x19FD00u)) {
        auto targetFn = runtime->lookupFunction(0x19FD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F048u; }
        if (ctx->pc != 0x19F048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearMagicSwordPow__16CBattleCharaInfoFv_0x19fd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F048u; }
        if (ctx->pc != 0x19F048u) { return; }
    }
    ctx->pc = 0x19F048u;
label_19f048:
    // 0x19f048: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19f048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19f04c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f050: 0x24845ae8  addiu       $a0, $a0, 0x5AE8
    ctx->pc = 0x19f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23272));
    // 0x19f054: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x19F058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F054u;
            // 0x19f058: 0xa6120000  sh          $s2, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F05Cu; }
        if (ctx->pc != 0x19F05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F05Cu; }
        if (ctx->pc != 0x19F05Cu) { return; }
    }
    ctx->pc = 0x19F05Cu;
label_19f05c:
    // 0x19f05c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x19f05cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f060: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x19f060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f064: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x19f064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x19f068: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x19F068u;
    {
        const bool branch_taken_0x19f068 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F068u;
            // 0x19f06c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f068) {
            ctx->pc = 0x19F0E4u;
            goto label_19f0e4;
        }
    }
    ctx->pc = 0x19F070u;
    // 0x19f070: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x19f070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f074: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x19F074u;
    {
        const bool branch_taken_0x19f074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f074) {
            ctx->pc = 0x19F0E4u;
            goto label_19f0e4;
        }
    }
    ctx->pc = 0x19F07Cu;
    // 0x19f07c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x19f07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f080: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x19f080u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f084: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19F084u;
    SET_GPR_U32(ctx, 31, 0x19F08Cu);
    ctx->pc = 0x19F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F084u;
            // 0x19f088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F08Cu; }
        if (ctx->pc != 0x19F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F08Cu; }
        if (ctx->pc != 0x19F08Cu) { return; }
    }
    ctx->pc = 0x19F08Cu;
label_19f08c:
    // 0x19f08c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19f090: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19f094: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x19f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x19f098: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x19f098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x19f09c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19f0a0: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x19f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x19f0a4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x19f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x19f0a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19f0ac: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x19f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x19f0b0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f0b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f0b8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x19f0bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f0c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f0c4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x19f0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x19f0c8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f0cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f0d0: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x19f0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x19f0d4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f0d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f0dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x19F0DCu;
    {
        const bool branch_taken_0x19f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0DCu;
            // 0x19f0e0: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0dc) {
            ctx->pc = 0x19F1DCu;
            goto label_19f1dc;
        }
    }
    ctx->pc = 0x19F0E4u;
label_19f0e4:
    // 0x19f0e4: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19F0E4u;
    {
        const bool branch_taken_0x19f0e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0E4u;
            // 0x19f0e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0e4) {
            ctx->pc = 0x19F14Cu;
            goto label_19f14c;
        }
    }
    ctx->pc = 0x19F0ECu;
    // 0x19f0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f0f0: 0x26224660  addiu       $v0, $s1, 0x4660
    ctx->pc = 0x19f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18016));
    // 0x19f0f4: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x19f0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x19f0f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19f0fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x19f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x19f100: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19f104: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19f108: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x19f108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x19f10c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19f110: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x19f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x19f114: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x19f114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x19f118: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f11c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f120: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19f120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x19f124: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f128: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f12c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x19f12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x19f130: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f134: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19f134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f138: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x19f138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x19f13c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f140: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f144: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19F144u;
    {
        const bool branch_taken_0x19f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F144u;
            // 0x19f148: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f144) {
            ctx->pc = 0x19F1DCu;
            goto label_19f1dc;
        }
    }
    ctx->pc = 0x19F14Cu;
label_19f14c:
    // 0x19f14c: 0x14820023  bne         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x19F14Cu;
    {
        const bool branch_taken_0x19f14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f14c) {
            ctx->pc = 0x19F1DCu;
            goto label_19f1dc;
        }
    }
    ctx->pc = 0x19F154u;
    // 0x19f154: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x19f154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x19f158: 0xc067c84  jal         func_19F210
    ctx->pc = 0x19F158u;
    SET_GPR_U32(ctx, 31, 0x19F160u);
    ctx->pc = 0x19F15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F158u;
            // 0x19f15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F210u;
    if (runtime->hasFunction(0x19F210u)) {
        auto targetFn = runtime->lookupFunction(0x19F210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F160u; }
        if (ctx->pc != 0x19F160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterID__16CBattleCharaInfoFv_0x19f210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F160u; }
        if (ctx->pc != 0x19F160u) { return; }
    }
    ctx->pc = 0x19F160u;
label_19f160:
    // 0x19f160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19f160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f168: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x19F168u;
    SET_GPR_U32(ctx, 31, 0x19F170u);
    ctx->pc = 0x19F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F168u;
            // 0x19f16c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F170u; }
        if (ctx->pc != 0x19F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F170u; }
        if (ctx->pc != 0x19F170u) { return; }
    }
    ctx->pc = 0x19F170u;
label_19f170:
    // 0x19f170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f174: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19f178: 0xc066a20  jal         func_19A880
    ctx->pc = 0x19F178u;
    SET_GPR_U32(ctx, 31, 0x19F180u);
    ctx->pc = 0x19F17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F178u;
            // 0x19f17c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A880u;
    if (runtime->hasFunction(0x19A880u)) {
        auto targetFn = runtime->lookupFunction(0x19A880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F180u; }
        if (ctx->pc != 0x19F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBaseInfo__Fi_0x19a880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F180u; }
        if (ctx->pc != 0x19F180u) { return; }
    }
    ctx->pc = 0x19F180u;
label_19f180:
    // 0x19f180: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F180u;
    {
        const bool branch_taken_0x19f180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f180) {
            ctx->pc = 0x19F190u;
            goto label_19f190;
        }
    }
    ctx->pc = 0x19F188u;
    // 0x19f188: 0x80520054  lb          $s2, 0x54($v0)
    ctx->pc = 0x19f188u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x19f18c: 0x0  nop
    ctx->pc = 0x19f18cu;
    // NOP
label_19f190:
    // 0x19f190: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x19f190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x19f194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f198: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x19f198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x19f19c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f1a0: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19F1A0u;
    SET_GPR_U32(ctx, 31, 0x19F1A8u);
    ctx->pc = 0x19F1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1A0u;
            // 0x19f1a4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1A8u; }
        if (ctx->pc != 0x19F1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1A8u; }
        if (ctx->pc != 0x19F1A8u) { return; }
    }
    ctx->pc = 0x19F1A8u;
label_19f1a8:
    // 0x19f1a8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x19f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x19f1ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f1b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f1b4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x19f1b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f1bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f1c0: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x19f1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x19f1c4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f1c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f1cc: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x19f1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x19f1d0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19f1d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f1d8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x19f1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_19f1dc:
    // 0x19f1dc: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x19f1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1e4: 0xaf808b80  sw          $zero, -0x7480($gp)
    ctx->pc = 0x19f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937472), GPR_U32(ctx, 0));
    // 0x19f1e8: 0xc067d48  jal         func_19F520
    ctx->pc = 0x19F1E8u;
    SET_GPR_U32(ctx, 31, 0x19F1F0u);
    ctx->pc = 0x19F1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1E8u;
            // 0x19f1ec: 0xaf808b84  sw          $zero, -0x747C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1F0u; }
        if (ctx->pc != 0x19F1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1F0u; }
        if (ctx->pc != 0x19F1F0u) { return; }
    }
    ctx->pc = 0x19F1F0u;
label_19f1f0:
    // 0x19f1f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f1f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f200: 0x3e00008  jr          $ra
    ctx->pc = 0x19F200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F200u;
            // 0x19f204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F208u;
}
