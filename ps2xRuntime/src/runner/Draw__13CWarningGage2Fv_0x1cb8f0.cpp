#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CWarningGage2Fv
// Address: 0x1cb8f0 - 0x1cbd20
void Draw__13CWarningGage2Fv_0x1cb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CWarningGage2Fv_0x1cb8f0");
#endif

    switch (ctx->pc) {
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbd08u: goto label_1cbd08;
        default: break;
    }

    ctx->pc = 0x1cb8f0u;

    // 0x1cb8f0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1cb8f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cb8f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb8fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb904: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb908: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x1cb908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1cb90c: 0x146000fe  bnez        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x1CB90Cu;
    {
        const bool branch_taken_0x1cb90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB90Cu;
            // 0x1cb910: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb90c) {
            ctx->pc = 0x1CBD08u;
            goto label_1cbd08;
        }
    }
    ctx->pc = 0x1CB914u;
    // 0x1cb914: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1cb914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1cb918: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb91c: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x1CB91Cu;
    {
        const bool branch_taken_0x1cb91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB91Cu;
            // 0x1cb920: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb91c) {
            ctx->pc = 0x1CBD08u;
            goto label_1cbd08;
        }
    }
    ctx->pc = 0x1CB924u;
    // 0x1cb924: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CB924u;
    SET_GPR_U32(ctx, 31, 0x1CB92Cu);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB92Cu; }
        if (ctx->pc != 0x1CB92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB92Cu; }
        if (ctx->pc != 0x1CB92Cu) { return; }
    }
    ctx->pc = 0x1CB92Cu;
label_1cb92c:
    // 0x1cb92c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cb930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb934: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CB934u;
    SET_GPR_U32(ctx, 31, 0x1CB93Cu);
    ctx->pc = 0x1CB938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB934u;
            // 0x1cb938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB93Cu; }
        if (ctx->pc != 0x1CB93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB93Cu; }
        if (ctx->pc != 0x1CB93Cu) { return; }
    }
    ctx->pc = 0x1CB93Cu;
label_1cb93c:
    // 0x1cb93c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CB93Cu;
    SET_GPR_U32(ctx, 31, 0x1CB944u);
    ctx->pc = 0x1CB940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB93Cu;
            // 0x1cb940: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB944u; }
        if (ctx->pc != 0x1CB944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB944u; }
        if (ctx->pc != 0x1CB944u) { return; }
    }
    ctx->pc = 0x1CB944u;
label_1cb944:
    // 0x1cb944: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cb948: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CB948u;
    SET_GPR_U32(ctx, 31, 0x1CB950u);
    ctx->pc = 0x1CB94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB948u;
            // 0x1cb94c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB950u; }
        if (ctx->pc != 0x1CB950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB950u; }
        if (ctx->pc != 0x1CB950u) { return; }
    }
    ctx->pc = 0x1CB950u;
label_1cb950:
    // 0x1cb950: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cb954: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cb958: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cb958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb95c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1cb95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb960: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CB960u;
    SET_GPR_U32(ctx, 31, 0x1CB968u);
    ctx->pc = 0x1CB964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB960u;
            // 0x1cb964: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB968u; }
        if (ctx->pc != 0x1CB968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB968u; }
        if (ctx->pc != 0x1CB968u) { return; }
    }
    ctx->pc = 0x1CB968u;
label_1cb968:
    // 0x1cb968: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1cb968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1cb96c: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1CB96Cu;
    {
        const bool branch_taken_0x1cb96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB96Cu;
            // 0x1cb970: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb96c) {
            ctx->pc = 0x1CBBA8u;
            goto label_1cbba8;
        }
    }
    ctx->pc = 0x1CB974u;
    // 0x1cb974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cb974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb978:
    // 0x1cb978: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1cb978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1cb97c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb980: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1CB980u;
    {
        const bool branch_taken_0x1cb980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb980) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CB988u;
    // 0x1cb988: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1cb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb98c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb990: 0x0  nop
    ctx->pc = 0x1cb990u;
    // NOP
    // 0x1cb994: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1cb994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb998: 0x0  nop
    ctx->pc = 0x1cb998u;
    // NOP
    // 0x1cb99c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x1CB99Cu;
    {
        const bool branch_taken_0x1cb99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB99Cu;
            // 0x1cb9a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb99c) {
            ctx->pc = 0x1CBAA0u;
            goto label_1cbaa0;
        }
    }
    ctx->pc = 0x1CB9A4u;
    // 0x1cb9a4: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CB9A4u;
    {
        const bool branch_taken_0x1cb9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9A4u;
            // 0x1cb9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9a4) {
            ctx->pc = 0x1CBA58u;
            goto label_1cba58;
        }
    }
    ctx->pc = 0x1CB9ACu;
    // 0x1cb9ac: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB9ACu;
    {
        const bool branch_taken_0x1cb9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb9ac) {
            ctx->pc = 0x1CBA10u;
            goto label_1cba10;
        }
    }
    ctx->pc = 0x1CB9B4u;
    // 0x1cb9b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB9B4u;
    {
        const bool branch_taken_0x1cb9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9b4) {
            ctx->pc = 0x1CB9C4u;
            goto label_1cb9c4;
        }
    }
    ctx->pc = 0x1CB9BCu;
    // 0x1cb9bc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1CB9BCu;
    {
        const bool branch_taken_0x1cb9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9bc) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CB9C4u;
label_1cb9c4:
    // 0x1cb9c4: 0x0  nop
    ctx->pc = 0x1cb9c4u;
    // NOP
    // 0x1cb9c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cb9cc: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x1cb9d0: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1cb9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1cb9d4: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cb9d8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cb9dc: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cb9e0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CB9E0u;
    SET_GPR_U32(ctx, 31, 0x1CB9E8u);
    ctx->pc = 0x1CB9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9E0u;
            // 0x1cb9e4: 0x240a00ec  addiu       $t2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9E8u; }
        if (ctx->pc != 0x1CB9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9E8u; }
        if (ctx->pc != 0x1CB9E8u) { return; }
    }
    ctx->pc = 0x1CB9E8u;
label_1cb9e8:
    // 0x1cb9e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cb9ec: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x1cb9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1cb9f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cb9f4: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1cb9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cb9f8: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cb9fc: 0x240900d2  addiu       $t1, $zero, 0xD2
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1cba00: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBA00u;
    SET_GPR_U32(ctx, 31, 0x1CBA08u);
    ctx->pc = 0x1CBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA00u;
            // 0x1cba04: 0x240a00e2  addiu       $t2, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA08u; }
        if (ctx->pc != 0x1CBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA08u; }
        if (ctx->pc != 0x1CBA08u) { return; }
    }
    ctx->pc = 0x1CBA08u;
label_1cba08:
    // 0x1cba08: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1CBA08u;
    {
        const bool branch_taken_0x1cba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba08) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CBA10u;
label_1cba10:
    // 0x1cba10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cba14: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x1cba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x1cba18: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1cba18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cba1c: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cba1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cba20: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cba24: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cba24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cba28: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBA28u;
    SET_GPR_U32(ctx, 31, 0x1CBA30u);
    ctx->pc = 0x1CBA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA28u;
            // 0x1cba2c: 0x240a00d8  addiu       $t2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA30u; }
        if (ctx->pc != 0x1CBA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA30u; }
        if (ctx->pc != 0x1CBA30u) { return; }
    }
    ctx->pc = 0x1CBA30u;
label_1cba30:
    // 0x1cba30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cba34: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x1cba38: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1cba38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cba3c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cba3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cba40: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1cba44: 0x24090108  addiu       $t1, $zero, 0x108
    ctx->pc = 0x1cba44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1cba48: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBA48u;
    SET_GPR_U32(ctx, 31, 0x1CBA50u);
    ctx->pc = 0x1CBA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA48u;
            // 0x1cba4c: 0x240a00ca  addiu       $t2, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA50u; }
        if (ctx->pc != 0x1CBA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA50u; }
        if (ctx->pc != 0x1CBA50u) { return; }
    }
    ctx->pc = 0x1CBA50u;
label_1cba50:
    // 0x1cba50: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1CBA50u;
    {
        const bool branch_taken_0x1cba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba50) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CBA58u;
label_1cba58:
    // 0x1cba58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cba5c: 0x2405019b  addiu       $a1, $zero, 0x19B
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    // 0x1cba60: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1cba64: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cba68: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cba6c: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cba70: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBA70u;
    SET_GPR_U32(ctx, 31, 0x1CBA78u);
    ctx->pc = 0x1CBA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA70u;
            // 0x1cba74: 0x240a00d8  addiu       $t2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA78u; }
        if (ctx->pc != 0x1CBA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA78u; }
        if (ctx->pc != 0x1CBA78u) { return; }
    }
    ctx->pc = 0x1CBA78u;
label_1cba78:
    // 0x1cba78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cba7c: 0x240501b7  addiu       $a1, $zero, 0x1B7
    ctx->pc = 0x1cba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x1cba80: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1cba84: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cba84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cba88: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1cba8c: 0x240900ee  addiu       $t1, $zero, 0xEE
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1cba90: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBA90u;
    SET_GPR_U32(ctx, 31, 0x1CBA98u);
    ctx->pc = 0x1CBA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA90u;
            // 0x1cba94: 0x240a00d4  addiu       $t2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA98u; }
        if (ctx->pc != 0x1CBA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA98u; }
        if (ctx->pc != 0x1CBA98u) { return; }
    }
    ctx->pc = 0x1CBA98u;
label_1cba98:
    // 0x1cba98: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1CBA98u;
    {
        const bool branch_taken_0x1cba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba98) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CBAA0u;
label_1cbaa0:
    // 0x1cbaa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbaa4: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CBAA4u;
    {
        const bool branch_taken_0x1cbaa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAA4u;
            // 0x1cbaa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaa4) {
            ctx->pc = 0x1CBB58u;
            goto label_1cbb58;
        }
    }
    ctx->pc = 0x1CBAACu;
    // 0x1cbaac: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CBAACu;
    {
        const bool branch_taken_0x1cbaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbaac) {
            ctx->pc = 0x1CBB10u;
            goto label_1cbb10;
        }
    }
    ctx->pc = 0x1CBAB4u;
    // 0x1cbab4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBAB4u;
    {
        const bool branch_taken_0x1cbab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbab4) {
            ctx->pc = 0x1CBAC4u;
            goto label_1cbac4;
        }
    }
    ctx->pc = 0x1CBABCu;
    // 0x1cbabc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1CBABCu;
    {
        const bool branch_taken_0x1cbabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbabc) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CBAC4u;
label_1cbac4:
    // 0x1cbac4: 0x0  nop
    ctx->pc = 0x1cbac4u;
    // NOP
    // 0x1cbac8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbacc: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x1cbad0: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1cbad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1cbad4: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cbad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cbad8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbadc: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cbadcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cbae0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBAE0u;
    SET_GPR_U32(ctx, 31, 0x1CBAE8u);
    ctx->pc = 0x1CBAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAE0u;
            // 0x1cbae4: 0x240a00ec  addiu       $t2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAE8u; }
        if (ctx->pc != 0x1CBAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAE8u; }
        if (ctx->pc != 0x1CBAE8u) { return; }
    }
    ctx->pc = 0x1CBAE8u;
label_1cbae8:
    // 0x1cbae8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbaec: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1cbaf0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cbaf4: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1cbaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cbaf8: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x1cbaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cbafc: 0x240900d2  addiu       $t1, $zero, 0xD2
    ctx->pc = 0x1cbafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1cbb00: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBB00u;
    SET_GPR_U32(ctx, 31, 0x1CBB08u);
    ctx->pc = 0x1CBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB00u;
            // 0x1cbb04: 0x240a00e2  addiu       $t2, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB08u; }
        if (ctx->pc != 0x1CBB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB08u; }
        if (ctx->pc != 0x1CBB08u) { return; }
    }
    ctx->pc = 0x1CBB08u;
label_1cbb08:
    // 0x1cbb08: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CBB08u;
    {
        const bool branch_taken_0x1cbb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb08) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CBB10u;
label_1cbb10:
    // 0x1cbb10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbb14: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x1cbb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x1cbb18: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cbb1c: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cbb20: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cbb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbb24: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cbb24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cbb28: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBB28u;
    SET_GPR_U32(ctx, 31, 0x1CBB30u);
    ctx->pc = 0x1CBB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB28u;
            // 0x1cbb2c: 0x240a00ec  addiu       $t2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB30u; }
        if (ctx->pc != 0x1CBB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB30u; }
        if (ctx->pc != 0x1CBB30u) { return; }
    }
    ctx->pc = 0x1CBB30u;
label_1cbb30:
    // 0x1cbb30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbb34: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x1cbb38: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1cbb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cbb3c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cbb40: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1cbb44: 0x24090122  addiu       $t1, $zero, 0x122
    ctx->pc = 0x1cbb44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x1cbb48: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBB48u;
    SET_GPR_U32(ctx, 31, 0x1CBB50u);
    ctx->pc = 0x1CBB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB48u;
            // 0x1cbb4c: 0x240a00ca  addiu       $t2, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB50u; }
        if (ctx->pc != 0x1CBB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB50u; }
        if (ctx->pc != 0x1CBB50u) { return; }
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CBB50u;
    {
        const bool branch_taken_0x1cbb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb50) {
            ctx->pc = 0x1CBB98u;
            goto label_1cbb98;
        }
    }
    ctx->pc = 0x1CBB58u;
label_1cbb58:
    // 0x1cbb58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbb5c: 0x2405019b  addiu       $a1, $zero, 0x19B
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    // 0x1cbb60: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1cbb64: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cbb68: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbb6c: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cbb6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cbb70: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBB70u;
    SET_GPR_U32(ctx, 31, 0x1CBB78u);
    ctx->pc = 0x1CBB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB70u;
            // 0x1cbb74: 0x240a00ec  addiu       $t2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB78u; }
        if (ctx->pc != 0x1CBB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB78u; }
        if (ctx->pc != 0x1CBB78u) { return; }
    }
    ctx->pc = 0x1CBB78u;
label_1cbb78:
    // 0x1cbb78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbb7c: 0x240501b7  addiu       $a1, $zero, 0x1B7
    ctx->pc = 0x1cbb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x1cbb80: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1cbb84: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cbb88: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1cbb8c: 0x240900ee  addiu       $t1, $zero, 0xEE
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1cbb90: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBB90u;
    SET_GPR_U32(ctx, 31, 0x1CBB98u);
    ctx->pc = 0x1CBB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB90u;
            // 0x1cbb94: 0x240a00ea  addiu       $t2, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB98u; }
        if (ctx->pc != 0x1CBB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB98u; }
        if (ctx->pc != 0x1CBB98u) { return; }
    }
    ctx->pc = 0x1CBB98u;
label_1cbb98:
    // 0x1cbb98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cbb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cbb9c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1cbb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cbba0: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x1CBBA0u;
    {
        const bool branch_taken_0x1cbba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBA0u;
            // 0x1cbba4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba0) {
            ctx->pc = 0x1CB978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb978;
        }
    }
    ctx->pc = 0x1CBBA8u;
label_1cbba8:
    // 0x1cbba8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1cbbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbbb0: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1CBBB0u;
    {
        const bool branch_taken_0x1cbbb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBB0u;
            // 0x1cbbb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbb0) {
            ctx->pc = 0x1CBD00u;
            goto label_1cbd00;
        }
    }
    ctx->pc = 0x1CBBB8u;
    // 0x1cbbb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cbbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbbbc:
    // 0x1cbbbc: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1cbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1cbbc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbbc4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1CBBC4u;
    {
        const bool branch_taken_0x1cbbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbc4) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBBCCu;
    // 0x1cbbcc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1cbbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbbd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbbd4: 0x0  nop
    ctx->pc = 0x1cbbd4u;
    // NOP
    // 0x1cbbd8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1cbbd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbbdc: 0x0  nop
    ctx->pc = 0x1cbbdcu;
    // NOP
    // 0x1cbbe0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1CBBE0u;
    {
        const bool branch_taken_0x1cbbe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBE0u;
            // 0x1cbbe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbe0) {
            ctx->pc = 0x1CBC48u;
            goto label_1cbc48;
        }
    }
    ctx->pc = 0x1CBBE8u;
    // 0x1cbbe8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBBE8u;
    {
        const bool branch_taken_0x1cbbe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbbe8) {
            ctx->pc = 0x1CBC00u;
            goto label_1cbc00;
        }
    }
    ctx->pc = 0x1CBBF0u;
    // 0x1cbbf0: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1CBBF0u;
    {
        const bool branch_taken_0x1cbbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf0) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBBF8u;
    // 0x1cbbf8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1CBBF8u;
    {
        const bool branch_taken_0x1cbbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf8) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBC00u;
label_1cbc00:
    // 0x1cbc00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbc04: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1cbc08: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cbc0c: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cbc10: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cbc10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbc14: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cbc18: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBC18u;
    SET_GPR_U32(ctx, 31, 0x1CBC20u);
    ctx->pc = 0x1CBC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC18u;
            // 0x1cbc1c: 0x240a00d8  addiu       $t2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC20u; }
        if (ctx->pc != 0x1CBC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC20u; }
        if (ctx->pc != 0x1CBC20u) { return; }
    }
    ctx->pc = 0x1CBC20u;
label_1cbc20:
    // 0x1cbc20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbc24: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x1cbc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1cbc28: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cbc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cbc2c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cbc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cbc30: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1cbc34: 0x240900ee  addiu       $t1, $zero, 0xEE
    ctx->pc = 0x1cbc34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1cbc38: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBC38u;
    SET_GPR_U32(ctx, 31, 0x1CBC40u);
    ctx->pc = 0x1CBC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC38u;
            // 0x1cbc3c: 0x240a00d4  addiu       $t2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC40u; }
        if (ctx->pc != 0x1CBC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC40u; }
        if (ctx->pc != 0x1CBC40u) { return; }
    }
    ctx->pc = 0x1CBC40u;
label_1cbc40:
    // 0x1cbc40: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1CBC40u;
    {
        const bool branch_taken_0x1cbc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc40) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBC48u;
label_1cbc48:
    // 0x1cbc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbc4c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CBC4Cu;
    {
        const bool branch_taken_0x1cbc4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbc4c) {
            ctx->pc = 0x1CBCB0u;
            goto label_1cbcb0;
        }
    }
    ctx->pc = 0x1CBC54u;
    // 0x1cbc54: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBC54u;
    {
        const bool branch_taken_0x1cbc54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc54) {
            ctx->pc = 0x1CBC64u;
            goto label_1cbc64;
        }
    }
    ctx->pc = 0x1CBC5Cu;
    // 0x1cbc5c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CBC5Cu;
    {
        const bool branch_taken_0x1cbc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc5c) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBC64u;
label_1cbc64:
    // 0x1cbc64: 0x0  nop
    ctx->pc = 0x1cbc64u;
    // NOP
    // 0x1cbc68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbc6c: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x1cbc70: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1cbc74: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cbc78: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cbc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbc7c: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cbc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cbc80: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBC80u;
    SET_GPR_U32(ctx, 31, 0x1CBC88u);
    ctx->pc = 0x1CBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC80u;
            // 0x1cbc84: 0x240a00ec  addiu       $t2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC88u; }
        if (ctx->pc != 0x1CBC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC88u; }
        if (ctx->pc != 0x1CBC88u) { return; }
    }
    ctx->pc = 0x1CBC88u;
label_1cbc88:
    // 0x1cbc88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbc8c: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1cbc90: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cbc94: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cbc98: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cbc9c: 0x240900d2  addiu       $t1, $zero, 0xD2
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1cbca0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBCA0u;
    SET_GPR_U32(ctx, 31, 0x1CBCA8u);
    ctx->pc = 0x1CBCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCA0u;
            // 0x1cbca4: 0x240a00e2  addiu       $t2, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCA8u; }
        if (ctx->pc != 0x1CBCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCA8u; }
        if (ctx->pc != 0x1CBCA8u) { return; }
    }
    ctx->pc = 0x1CBCA8u;
label_1cbca8:
    // 0x1cbca8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CBCA8u;
    {
        const bool branch_taken_0x1cbca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbca8) {
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBCB0u;
label_1cbcb0:
    // 0x1cbcb0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbcb4: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1cbcb8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cbcbc: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cbcc0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1cbcc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cbcc4: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1cbcc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cbcc8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBCC8u;
    SET_GPR_U32(ctx, 31, 0x1CBCD0u);
    ctx->pc = 0x1CBCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCC8u;
            // 0x1cbccc: 0x240a00ec  addiu       $t2, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCD0u; }
        if (ctx->pc != 0x1CBCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCD0u; }
        if (ctx->pc != 0x1CBCD0u) { return; }
    }
    ctx->pc = 0x1CBCD0u;
label_1cbcd0:
    // 0x1cbcd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cbcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbcd4: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x1cbcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1cbcd8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cbcdc: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cbcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cbce0: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1cbce4: 0x240900ee  addiu       $t1, $zero, 0xEE
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1cbce8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CBCE8u;
    SET_GPR_U32(ctx, 31, 0x1CBCF0u);
    ctx->pc = 0x1CBCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCE8u;
            // 0x1cbcec: 0x240a00ea  addiu       $t2, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCF0u; }
        if (ctx->pc != 0x1CBCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCF0u; }
        if (ctx->pc != 0x1CBCF0u) { return; }
    }
    ctx->pc = 0x1CBCF0u;
label_1cbcf0:
    // 0x1cbcf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cbcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cbcf4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1cbcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cbcf8: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1CBCF8u;
    {
        const bool branch_taken_0x1cbcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCF8u;
            // 0x1cbcfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcf8) {
            ctx->pc = 0x1CBBBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cbbbc;
        }
    }
    ctx->pc = 0x1CBD00u;
label_1cbd00:
    // 0x1cbd00: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CBD00u;
    SET_GPR_U32(ctx, 31, 0x1CBD08u);
    ctx->pc = 0x1CBD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD00u;
            // 0x1cbd04: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD08u; }
        if (ctx->pc != 0x1CBD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD08u; }
        if (ctx->pc != 0x1CBD08u) { return; }
    }
    ctx->pc = 0x1CBD08u;
label_1cbd08:
    // 0x1cbd08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cbd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cbd0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cbd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbd10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbd10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbd18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD18u;
            // 0x1cbd1c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBD20u;
}
