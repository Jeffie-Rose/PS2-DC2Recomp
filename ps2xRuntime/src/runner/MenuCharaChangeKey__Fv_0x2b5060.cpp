#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaChangeKey__Fv
// Address: 0x2b5060 - 0x2b5358
void MenuCharaChangeKey__Fv_0x2b5060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaChangeKey__Fv_0x2b5060");
#endif

    switch (ctx->pc) {
        case 0x2b5080u: goto label_2b5080;
        case 0x2b50f0u: goto label_2b50f0;
        case 0x2b5110u: goto label_2b5110;
        case 0x2b5148u: goto label_2b5148;
        case 0x2b51b8u: goto label_2b51b8;
        case 0x2b51c4u: goto label_2b51c4;
        case 0x2b51d8u: goto label_2b51d8;
        case 0x2b51e0u: goto label_2b51e0;
        case 0x2b51ecu: goto label_2b51ec;
        case 0x2b51f4u: goto label_2b51f4;
        case 0x2b5208u: goto label_2b5208;
        case 0x2b5220u: goto label_2b5220;
        case 0x2b5244u: goto label_2b5244;
        case 0x2b5254u: goto label_2b5254;
        case 0x2b526cu: goto label_2b526c;
        case 0x2b52a0u: goto label_2b52a0;
        case 0x2b52b0u: goto label_2b52b0;
        case 0x2b52ccu: goto label_2b52cc;
        case 0x2b52f8u: goto label_2b52f8;
        case 0x2b5308u: goto label_2b5308;
        case 0x2b532cu: goto label_2b532c;
        default: break;
    }

    ctx->pc = 0x2b5060u;

    // 0x2b5060: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b5060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b5064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b5064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b5068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b5068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b506c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5074: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b5074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b5078: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2B5078u;
    SET_GPR_U32(ctx, 31, 0x2B5080u);
    ctx->pc = 0x2B507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5078u;
            // 0x2b507c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5080u; }
        if (ctx->pc != 0x2B5080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5080u; }
        if (ctx->pc != 0x2B5080u) { return; }
    }
    ctx->pc = 0x2B5080u;
label_2b5080:
    // 0x2b5080: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b5080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b5084: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b5084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5088: 0x8487024c  lh          $a3, 0x24C($a0)
    ctx->pc = 0x2b5088u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x2b508c: 0x10e60022  beq         $a3, $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B508Cu;
    {
        const bool branch_taken_0x2b508c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B5090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B508Cu;
            // 0x2b5090: 0x2488024c  addiu       $t0, $a0, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b508c) {
            ctx->pc = 0x2B5118u;
            goto label_2b5118;
        }
    }
    ctx->pc = 0x2B5094u;
    // 0x2b5094: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b5094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5098: 0x10e50003  beq         $a3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5098u;
    {
        const bool branch_taken_0x2b5098 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b5098) {
            ctx->pc = 0x2B50A8u;
            goto label_2b50a8;
        }
    }
    ctx->pc = 0x2B50A0u;
    // 0x2b50a0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2B50A0u;
    {
        const bool branch_taken_0x2b50a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B50A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B50A0u;
            // 0x2b50a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50a0) {
            ctx->pc = 0x2B5340u;
            goto label_2b5340;
        }
    }
    ctx->pc = 0x2B50A8u;
label_2b50a8:
    // 0x2b50a8: 0x8483024e  lh          $v1, 0x24E($a0)
    ctx->pc = 0x2b50a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 590)));
    // 0x2b50ac: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B50ACu;
    {
        const bool branch_taken_0x2b50ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b50ac) {
            ctx->pc = 0x2B50F8u;
            goto label_2b50f8;
        }
    }
    ctx->pc = 0x2B50B4u;
    // 0x2b50b4: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2B50B4u;
    {
        const bool branch_taken_0x2b50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b50b4) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B50BCu;
    // 0x2b50bc: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2b50bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b50c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b50c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b50c4: 0x83829b71  lb          $v0, -0x648F($gp)
    ctx->pc = 0x2b50c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
    // 0x2b50c8: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2b50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x2b50cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b50ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b50d0: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B50D0u;
    {
        const bool branch_taken_0x2b50d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B50D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B50D0u;
            // 0x2b50d4: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50d0) {
            ctx->pc = 0x2B50DCu;
            goto label_2b50dc;
        }
    }
    ctx->pc = 0x2B50D8u;
    // 0x2b50d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b50d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b50dc:
    // 0x2b50dc: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b50e0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2b50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2b50e4: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2b50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    // 0x2b50e8: 0xc0adbb4  jal         func_2B6ED0
    ctx->pc = 0x2B50E8u;
    SET_GPR_U32(ctx, 31, 0x2B50F0u);
    ctx->pc = 0x2B50ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B50E8u;
            // 0x2b50ec: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6ED0u;
    if (runtime->hasFunction(0x2B6ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B50F0u; }
        if (ctx->pc != 0x2B50F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterBoxInit__FP9mgCMemoryPii_0x2b6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B50F0u; }
        if (ctx->pc != 0x2B50F0u) { return; }
    }
    ctx->pc = 0x2B50F0u;
label_2b50f0:
    // 0x2b50f0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2B50F0u;
    {
        const bool branch_taken_0x2b50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b50f0) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B50F8u;
label_2b50f8:
    // 0x2b50f8: 0x14650090  bne         $v1, $a1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2B50F8u;
    {
        const bool branch_taken_0x2b50f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b50f8) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5100u;
    // 0x2b5100: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2B5100u;
    {
        const bool branch_taken_0x2b5100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5100) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5108u;
    // 0x2b5108: 0xc0ad020  jal         func_2B4080
    ctx->pc = 0x2B5108u;
    SET_GPR_U32(ctx, 31, 0x2B5110u);
    ctx->pc = 0x2B4080u;
    if (runtime->hasFunction(0x2B4080u)) {
        auto targetFn = runtime->lookupFunction(0x2B4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5110u; }
        if (ctx->pc != 0x2B5110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuLocalLoop__15CMenuChrCngMenuFv_0x2b4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5110u; }
        if (ctx->pc != 0x2B5110u) { return; }
    }
    ctx->pc = 0x2B5110u;
label_2b5110:
    // 0x2b5110: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2B5110u;
    {
        const bool branch_taken_0x2b5110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5110u;
            // 0x2b5114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5110) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5118u;
label_2b5118:
    // 0x2b5118: 0x8484024e  lh          $a0, 0x24E($a0)
    ctx->pc = 0x2b5118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 590)));
    // 0x2b511c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5120: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5120u;
    {
        const bool branch_taken_0x2b5120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5120) {
            ctx->pc = 0x2B5138u;
            goto label_2b5138;
        }
    }
    ctx->pc = 0x2B5128u;
    // 0x2b5128: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2B5128u;
    {
        const bool branch_taken_0x2b5128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5128) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5130u;
    // 0x2b5130: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2B5130u;
    {
        const bool branch_taken_0x2b5130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5130u;
            // 0x2b5134: 0xa5040000  sh          $a0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5130) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5138u;
label_2b5138:
    // 0x2b5138: 0x14e60080  bne         $a3, $a2, . + 4 + (0x80 << 2)
    ctx->pc = 0x2B5138u;
    {
        const bool branch_taken_0x2b5138 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b5138) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5140u;
    // 0x2b5140: 0xc0ae340  jal         func_2B8D00
    ctx->pc = 0x2B5140u;
    SET_GPR_U32(ctx, 31, 0x2B5148u);
    ctx->pc = 0x2B8D00u;
    if (runtime->hasFunction(0x2B8D00u)) {
        auto targetFn = runtime->lookupFunction(0x2B8D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5148u; }
        if (ctx->pc != 0x2B5148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterBoxKey__Fv_0x2b8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5148u; }
        if (ctx->pc != 0x2B5148u) { return; }
    }
    ctx->pc = 0x2B5148u;
label_2b5148:
    // 0x2b5148: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2B5148u;
    {
        const bool branch_taken_0x2b5148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5148u;
            // 0x2b514c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5148) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5150u;
    // 0x2b5150: 0x1446006f  bne         $v0, $a2, . + 4 + (0x6F << 2)
    ctx->pc = 0x2B5150u;
    {
        const bool branch_taken_0x2b5150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B5154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5150u;
            // 0x2b5154: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5150) {
            ctx->pc = 0x2B5310u;
            goto label_2b5310;
        }
    }
    ctx->pc = 0x2B5158u;
    // 0x2b5158: 0x8f839bc8  lw          $v1, -0x6438($gp)
    ctx->pc = 0x2b5158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b515c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5160: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2b5164: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b5164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5168: 0x244247e0  addiu       $v0, $v0, 0x47E0
    ctx->pc = 0x2b5168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18400));
    // 0x2b516c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b5170: 0xa465024e  sh          $a1, 0x24E($v1)
    ctx->pc = 0x2b5170u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 590), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b5174: 0x8f839bc8  lw          $v1, -0x6438($gp)
    ctx->pc = 0x2b5174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b5178: 0xa465024c  sh          $a1, 0x24C($v1)
    ctx->pc = 0x2b5178u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 588), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b517c: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2b517cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x2b5180: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b5180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5184: 0xac20dc0c  sw          $zero, -0x23F4($at)
    ctx->pc = 0x2b5184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
    // 0x2b5188: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2b5188u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b518c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b5190: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2b5190u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b5194: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2b5194u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b5198: 0x8c31ccd0  lw          $s1, -0x3330($at)
    ctx->pc = 0x2b5198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954192)));
    // 0x2b519c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2b519cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b51a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b51a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b51a4: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x2b51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x2b51a8: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x2b51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x2b51ac: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2b51acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2b51b0: 0xc094440  jal         func_251100
    ctx->pc = 0x2B51B0u;
    SET_GPR_U32(ctx, 31, 0x2B51B8u);
    ctx->pc = 0x2B51B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B51B0u;
            // 0x2b51b4: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51B8u; }
        if (ctx->pc != 0x2B51B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51B8u; }
        if (ctx->pc != 0x2B51B8u) { return; }
    }
    ctx->pc = 0x2B51B8u;
label_2b51b8:
    // 0x2b51b8: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b51b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b51bc: 0xc0ac198  jal         func_2B0660
    ctx->pc = 0x2B51BCu;
    SET_GPR_U32(ctx, 31, 0x2B51C4u);
    ctx->pc = 0x2B51C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B51BCu;
            // 0x2b51c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0660u;
    if (runtime->hasFunction(0x2B0660u)) {
        auto targetFn = runtime->lookupFunction(0x2B0660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51C4u; }
        if (ctx->pc != 0x2B51C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterDataMenu__15CMenuChrCngMenuFPUc_0x2b0660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51C4u; }
        if (ctx->pc != 0x2B51C4u) { return; }
    }
    ctx->pc = 0x2B51C4u;
label_2b51c4:
    // 0x2b51c4: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b51c8: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b51c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2b51cc: 0x24a5cc80  addiu       $a1, $a1, -0x3380
    ctx->pc = 0x2b51ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954112));
    // 0x2b51d0: 0xc0ac31c  jal         func_2B0C70
    ctx->pc = 0x2B51D0u;
    SET_GPR_U32(ctx, 31, 0x2B51D8u);
    ctx->pc = 0x2B51D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B51D0u;
            // 0x2b51d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0C70u;
    if (runtime->hasFunction(0x2B0C70u)) {
        auto targetFn = runtime->lookupFunction(0x2B0C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51D8u; }
        if (ctx->pc != 0x2B51D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadNPCFaceData__15CMenuChrCngMenuFP9mgCMemoryi_0x2b0c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51D8u; }
        if (ctx->pc != 0x2B51D8u) { return; }
    }
    ctx->pc = 0x2B51D8u;
label_2b51d8:
    // 0x2b51d8: 0xc0ac35c  jal         func_2B0D70
    ctx->pc = 0x2B51D8u;
    SET_GPR_U32(ctx, 31, 0x2B51E0u);
    ctx->pc = 0x2B51DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B51D8u;
            // 0x2b51dc: 0x8f849bc8  lw          $a0, -0x6438($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0D70u;
    if (runtime->hasFunction(0x2B0D70u)) {
        auto targetFn = runtime->lookupFunction(0x2B0D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51E0u; }
        if (ctx->pc != 0x2B51E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterNPCFaceData__15CMenuChrCngMenuFv_0x2b0d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51E0u; }
        if (ctx->pc != 0x2B51E0u) { return; }
    }
    ctx->pc = 0x2B51E0u;
label_2b51e0:
    // 0x2b51e0: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b51e4: 0xc0ac380  jal         func_2B0E00
    ctx->pc = 0x2B51E4u;
    SET_GPR_U32(ctx, 31, 0x2B51ECu);
    ctx->pc = 0x2B51E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B51E4u;
            // 0x2b51e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0E00u;
    if (runtime->hasFunction(0x2B0E00u)) {
        auto targetFn = runtime->lookupFunction(0x2B0E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51ECu; }
        if (ctx->pc != 0x2B51ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGNPCModel__15CMenuChrCngMenuFi_0x2b0e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51ECu; }
        if (ctx->pc != 0x2B51ECu) { return; }
    }
    ctx->pc = 0x2B51ECu;
label_2b51ec:
    // 0x2b51ec: 0xc0ac3f8  jal         func_2B0FE0
    ctx->pc = 0x2B51ECu;
    SET_GPR_U32(ctx, 31, 0x2B51F4u);
    ctx->pc = 0x2B51F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B51ECu;
            // 0x2b51f0: 0x8f849bc8  lw          $a0, -0x6438($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0FE0u;
    if (runtime->hasFunction(0x2B0FE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B0FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51F4u; }
        if (ctx->pc != 0x2B51F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBGNPCModel__15CMenuChrCngMenuFv_0x2b0fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51F4u; }
        if (ctx->pc != 0x2B51F4u) { return; }
    }
    ctx->pc = 0x2B51F4u;
label_2b51f4:
    // 0x2b51f4: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b51f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b51f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b51fc: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x2b51fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2b5200: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x2B5200u;
    SET_GPR_U32(ctx, 31, 0x2B5208u);
    ctx->pc = 0x2B5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5200u;
            // 0x2b5204: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5208u; }
        if (ctx->pc != 0x2B5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5208u; }
        if (ctx->pc != 0x2B5208u) { return; }
    }
    ctx->pc = 0x2B5208u;
label_2b5208:
    // 0x2b5208: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b520c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b520cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5210: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2b5210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2b5214: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x2b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2b5218: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2B5218u;
    SET_GPR_U32(ctx, 31, 0x2B5220u);
    ctx->pc = 0x2B521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5218u;
            // 0x2b521c: 0x24450190  addiu       $a1, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5220u; }
        if (ctx->pc != 0x2B5220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5220u; }
        if (ctx->pc != 0x2B5220u) { return; }
    }
    ctx->pc = 0x2B5220u;
label_2b5220:
    // 0x2b5220: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b5220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5224: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2b5224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b5228: 0x8c32cb4c  lw          $s2, -0x34B4($at)
    ctx->pc = 0x2b5228u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2b522c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b522cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5230: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x2b5230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b5234: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x2b5234u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b5238: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x2b5238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b523c: 0xa2400058  sb          $zero, 0x58($s2)
    ctx->pc = 0x2b523cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b5244:
    // 0x2b5244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b5244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b524c: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2B524Cu;
    SET_GPR_U32(ctx, 31, 0x2B5254u);
    ctx->pc = 0x2B5250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B524Cu;
            // 0x2b5250: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5254u; }
        if (ctx->pc != 0x2B5254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5254u; }
        if (ctx->pc != 0x2B5254u) { return; }
    }
    ctx->pc = 0x2B5254u;
label_2b5254:
    // 0x2b5254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b5258: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2b5258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b525c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B525Cu;
    {
        const bool branch_taken_0x2b525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B525Cu;
            // 0x2b5260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b525c) {
            ctx->pc = 0x2B5244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5244;
        }
    }
    ctx->pc = 0x2B5264u;
    // 0x2b5264: 0xc0ad158  jal         func_2B4560
    ctx->pc = 0x2B5264u;
    SET_GPR_U32(ctx, 31, 0x2B526Cu);
    ctx->pc = 0x2B5268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5264u;
            // 0x2b5268: 0x8f849bc8  lw          $a0, -0x6438($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B4560u;
    if (runtime->hasFunction(0x2B4560u)) {
        auto targetFn = runtime->lookupFunction(0x2B4560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B526Cu; }
        if (ctx->pc != 0x2B526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStarInfo__15CMenuChrCngMenuFv_0x2b4560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B526Cu; }
        if (ctx->pc != 0x2B526Cu) { return; }
    }
    ctx->pc = 0x2B526Cu;
label_2b526c:
    // 0x2b526c: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b5270: 0x27b1008c  addiu       $s1, $sp, 0x8C
    ctx->pc = 0x2b5270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2b5274: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b527c: 0x24a5edc8  addiu       $a1, $a1, -0x1238
    ctx->pc = 0x2b527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962632));
    // 0x2b5280: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x2b5280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b5284: 0xa4400256  sh          $zero, 0x256($v0)
    ctx->pc = 0x2b5284u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 598), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b5288: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b528c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b528cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b5290: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b5294: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x2b5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x2b5298: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B5298u;
    SET_GPR_U32(ctx, 31, 0x2B52A0u);
    ctx->pc = 0x2B529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5298u;
            // 0x2b529c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52A0u; }
        if (ctx->pc != 0x2B52A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52A0u; }
        if (ctx->pc != 0x2B52A0u) { return; }
    }
    ctx->pc = 0x2B52A0u;
label_2b52a0:
    // 0x2b52a0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2b52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2b52a4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b52a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b52a8: 0xc08f000  jal         func_23C000
    ctx->pc = 0x2B52A8u;
    SET_GPR_U32(ctx, 31, 0x2B52B0u);
    ctx->pc = 0x2B52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B52A8u;
            // 0x2b52ac: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52B0u; }
        if (ctx->pc != 0x2B52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52B0u; }
        if (ctx->pc != 0x2B52B0u) { return; }
    }
    ctx->pc = 0x2B52B0u;
label_2b52b0:
    // 0x2b52b0: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b52b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b52b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b52b8: 0x24a5ed00  addiu       $a1, $a1, -0x1300
    ctx->pc = 0x2b52b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962432));
    // 0x2b52bc: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x2b52bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b52c0: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x2b52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x2b52c4: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B52C4u;
    SET_GPR_U32(ctx, 31, 0x2B52CCu);
    ctx->pc = 0x2B52C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B52C4u;
            // 0x2b52c8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52CCu; }
        if (ctx->pc != 0x2B52CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52CCu; }
        if (ctx->pc != 0x2B52CCu) { return; }
    }
    ctx->pc = 0x2B52CCu;
label_2b52cc:
    // 0x2b52cc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2b52ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52d0: 0x8f829518  lw          $v0, -0x6AE8($gp)
    ctx->pc = 0x2b52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x2b52d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b52d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b52d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b52d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b52dc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2b52dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b52e0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b52e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b52e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b52e8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b52e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b52ec: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b52f0: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2B52F0u;
    SET_GPR_U32(ctx, 31, 0x2B52F8u);
    ctx->pc = 0x2B52F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B52F0u;
            // 0x2b52f4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52F8u; }
        if (ctx->pc != 0x2B52F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B52F8u; }
        if (ctx->pc != 0x2B52F8u) { return; }
    }
    ctx->pc = 0x2B52F8u;
label_2b52f8:
    // 0x2b52f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b52fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b52fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5300: 0xc08d150  jal         func_234540
    ctx->pc = 0x2B5300u;
    SET_GPR_U32(ctx, 31, 0x2B5308u);
    ctx->pc = 0x234540u;
    if (runtime->hasFunction(0x234540u)) {
        auto targetFn = runtime->lookupFunction(0x234540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5308u; }
        if (ctx->pc != 0x2B5308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCamInit__Ff_0x234540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5308u; }
        if (ctx->pc != 0x2B5308u) { return; }
    }
    ctx->pc = 0x2B5308u;
label_2b5308:
    // 0x2b5308: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B5308u;
    {
        const bool branch_taken_0x2b5308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5308) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5310u;
label_2b5310:
    // 0x2b5310: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5310u;
    {
        const bool branch_taken_0x2b5310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5310) {
            ctx->pc = 0x2B533Cu;
            goto label_2b533c;
        }
    }
    ctx->pc = 0x2B5318u;
    // 0x2b5318: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2b531c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b531cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5320: 0x8f8594ac  lw          $a1, -0x6B54($gp)
    ctx->pc = 0x2b5320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2b5324: 0xc07a750  jal         func_1E9D40
    ctx->pc = 0x2B5324u;
    SET_GPR_U32(ctx, 31, 0x2B532Cu);
    ctx->pc = 0x2B5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5324u;
            // 0x2b5328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B532Cu; }
        if (ctx->pc != 0x2B532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B532Cu; }
        if (ctx->pc != 0x2B532Cu) { return; }
    }
    ctx->pc = 0x2B532Cu;
label_2b532c:
    // 0x2b532c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5330: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b5330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5334: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b5334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5338: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2b5338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_2b533c:
    // 0x2b533c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5340:
    // 0x2b5340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b5340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b534c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5350: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5350u;
            // 0x2b5354: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5358u;
}
