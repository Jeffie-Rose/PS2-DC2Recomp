#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPrice__5CShopFP13CGameDataUsedPiPi
// Address: 0x291840 - 0x291a2c
void GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840");
#endif

    switch (ctx->pc) {
        case 0x2918e8u: goto label_2918e8;
        case 0x29190cu: goto label_29190c;
        case 0x291938u: goto label_291938;
        case 0x291954u: goto label_291954;
        case 0x291960u: goto label_291960;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919e8u: goto label_2919e8;
        default: break;
    }

    ctx->pc = 0x291840u;

    // 0x291840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x291844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x291848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29184c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x291850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291858: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29185c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291860: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x291860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291864: 0x1240006a  beqz        $s2, . + 4 + (0x6A << 2)
    ctx->pc = 0x291864u;
    {
        const bool branch_taken_0x291864 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x291868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291864u;
            // 0x291868: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291864) {
            ctx->pc = 0x291A10u;
            goto label_291a10;
        }
    }
    ctx->pc = 0x29186Cu;
    // 0x29186c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29186Cu;
    {
        const bool branch_taken_0x29186c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29186Cu;
            // 0x291870: 0x86450002  lh          $a1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29186c) {
            ctx->pc = 0x291878u;
            goto label_291878;
        }
    }
    ctx->pc = 0x291874u;
    // 0x291874: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x291874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_291878:
    // 0x291878: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x291878u;
    {
        const bool branch_taken_0x291878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x291878) {
            ctx->pc = 0x291884u;
            goto label_291884;
        }
    }
    ctx->pc = 0x291880u;
    // 0x291880: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x291880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_291884:
    // 0x291884: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x291884u;
    {
        const bool branch_taken_0x291884 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x291884) {
            ctx->pc = 0x2918D0u;
            goto label_2918d0;
        }
    }
    ctx->pc = 0x29188Cu;
    // 0x29188c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29188Cu;
    {
        const bool branch_taken_0x29188c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29188Cu;
            // 0x291890: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29188c) {
            ctx->pc = 0x2918A0u;
            goto label_2918a0;
        }
    }
    ctx->pc = 0x291894u;
    // 0x291894: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x291894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x291898: 0x8c63020c  lw          $v1, 0x20C($v1)
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x29189c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2918a0:
    // 0x2918a0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2918A0u;
    {
        const bool branch_taken_0x2918a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918A0u;
            // 0x2918a4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918a0) {
            ctx->pc = 0x2918B4u;
            goto label_2918b4;
        }
    }
    ctx->pc = 0x2918A8u;
    // 0x2918a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2918a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2918ac: 0x8c630210  lw          $v1, 0x210($v1)
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x2918b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2918b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2918b4:
    // 0x2918b4: 0x8784983c  lh          $a0, -0x67C4($gp)
    ctx->pc = 0x2918b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x2918b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2918b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2918bc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2918BCu;
    {
        const bool branch_taken_0x2918bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2918bc) {
            ctx->pc = 0x2918D0u;
            goto label_2918d0;
        }
    }
    ctx->pc = 0x2918C4u;
    // 0x2918c4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2918C4u;
    {
        const bool branch_taken_0x2918c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2918c4) {
            ctx->pc = 0x2918D0u;
            goto label_2918d0;
        }
    }
    ctx->pc = 0x2918CCu;
    // 0x2918cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2918ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2918d0:
    // 0x2918d0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2918D0u;
    {
        const bool branch_taken_0x2918d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918D0u;
            // 0x2918d4: 0x240301a7  addiu       $v1, $zero, 0x1A7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918d0) {
            ctx->pc = 0x29193Cu;
            goto label_29193c;
        }
    }
    ctx->pc = 0x2918D8u;
    // 0x2918d8: 0x14a30018  bne         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2918D8u;
    {
        const bool branch_taken_0x2918d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2918d8) {
            ctx->pc = 0x29193Cu;
            goto label_29193c;
        }
    }
    ctx->pc = 0x2918E0u;
    // 0x2918e0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2918E0u;
    SET_GPR_U32(ctx, 31, 0x2918E8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918E8u; }
        if (ctx->pc != 0x2918E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918E8u; }
        if (ctx->pc != 0x2918E8u) { return; }
    }
    ctx->pc = 0x2918E8u;
label_2918e8:
    // 0x2918e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2918e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918ec: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2918f0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2918f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2918f4: 0x84234dc0  lh          $v1, 0x4DC0($at)
    ctx->pc = 0x2918f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19904)));
    // 0x2918f8: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2918F8u;
    {
        const bool branch_taken_0x2918f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2918FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918F8u;
            // 0x2918fc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918f8) {
            ctx->pc = 0x29192Cu;
            goto label_29192c;
        }
    }
    ctx->pc = 0x291900u;
    // 0x291900: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x291900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x291904: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x291904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x291908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29190c:
    // 0x29190c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x29190cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x291910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x291910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x291914: 0x0  nop
    ctx->pc = 0x291914u;
    // NOP
    // 0x291918: 0x0  nop
    ctx->pc = 0x291918u;
    // NOP
    // 0x29191c: 0x0  nop
    ctx->pc = 0x29191cu;
    // NOP
    // 0x291920: 0x0  nop
    ctx->pc = 0x291920u;
    // NOP
    // 0x291924: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x291924u;
    {
        const bool branch_taken_0x291924 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x291924) {
            ctx->pc = 0x29190Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29190c;
        }
    }
    ctx->pc = 0x29192Cu;
label_29192c:
    // 0x29192c: 0x0  nop
    ctx->pc = 0x29192cu;
    // NOP
    // 0x291930: 0xc0a248c  jal         func_289230
    ctx->pc = 0x291930u;
    SET_GPR_U32(ctx, 31, 0x291938u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291938u; }
        if (ctx->pc != 0x291938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291938u; }
        if (ctx->pc != 0x291938u) { return; }
    }
    ctx->pc = 0x291938u;
label_291938:
    // 0x291938: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x291938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29193c:
    // 0x29193c: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x29193Cu;
    {
        const bool branch_taken_0x29193c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29193c) {
            ctx->pc = 0x291A10u;
            goto label_291a10;
        }
    }
    ctx->pc = 0x291944u;
    // 0x291944: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x291944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x291948: 0x24030130  addiu       $v1, $zero, 0x130
    ctx->pc = 0x291948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x29194c: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29194Cu;
    {
        const bool branch_taken_0x29194c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x291950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29194Cu;
            // 0x291950: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29194c) {
            ctx->pc = 0x291994u;
            goto label_291994;
        }
    }
    ctx->pc = 0x291954u;
label_291954:
    // 0x291954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291958: 0xc066648  jal         func_199920
    ctx->pc = 0x291958u;
    SET_GPR_U32(ctx, 31, 0x291960u);
    ctx->pc = 0x29195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291958u;
            // 0x29195c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291960u; }
        if (ctx->pc != 0x291960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291960u; }
        if (ctx->pc != 0x291960u) { return; }
    }
    ctx->pc = 0x291960u;
label_291960:
    // 0x291960: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291960u;
    {
        const bool branch_taken_0x291960 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291960u;
            // 0x291964: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291960) {
            ctx->pc = 0x291978u;
            goto label_291978;
        }
    }
    ctx->pc = 0x291968u;
    // 0x291968: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29196c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x291970: 0x8c630210  lw          $v1, 0x210($v1)
    ctx->pc = 0x291970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x291974: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x291974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_291978:
    // 0x291978: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x291978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29197c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x291980: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x291980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291984: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x291984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x291988: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x291988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29198c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x29198Cu;
    {
        const bool branch_taken_0x29198c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29198Cu;
            // 0x291990: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29198c) {
            ctx->pc = 0x291954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291954;
        }
    }
    ctx->pc = 0x291994u;
label_291994:
    // 0x291994: 0x0  nop
    ctx->pc = 0x291994u;
    // NOP
    // 0x291998: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x291998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29199c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2919a0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2919A0u;
    {
        const bool branch_taken_0x2919a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2919A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919A0u;
            // 0x2919a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919a0) {
            ctx->pc = 0x291A00u;
            goto label_291a00;
        }
    }
    ctx->pc = 0x2919A8u;
    // 0x2919a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2919A8u;
    {
        const bool branch_taken_0x2919a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2919ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919A8u;
            // 0x2919ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919a8) {
            ctx->pc = 0x2919B8u;
            goto label_2919b8;
        }
    }
    ctx->pc = 0x2919B0u;
    // 0x2919b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2919B0u;
    {
        const bool branch_taken_0x2919b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919B0u;
            // 0x2919b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919b0) {
            ctx->pc = 0x291A14u;
            goto label_291a14;
        }
    }
    ctx->pc = 0x2919B8u;
label_2919b8:
    // 0x2919b8: 0xc065c74  jal         func_1971D0
    ctx->pc = 0x2919B8u;
    SET_GPR_U32(ctx, 31, 0x2919C0u);
    ctx->pc = 0x1971D0u;
    if (runtime->hasFunction(0x1971D0u)) {
        auto targetFn = runtime->lookupFunction(0x1971D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919C0u; }
        if (ctx->pc != 0x2919C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLevel__13CGameDataUsedFv_0x1971d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919C0u; }
        if (ctx->pc != 0x2919C0u) { return; }
    }
    ctx->pc = 0x2919C0u;
label_2919c0:
    // 0x2919c0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2919c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2919c4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2919C4u;
    {
        const bool branch_taken_0x2919c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919C4u;
            // 0x2919c8: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919c4) {
            ctx->pc = 0x291A10u;
            goto label_291a10;
        }
    }
    ctx->pc = 0x2919CCu;
    // 0x2919cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2919ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2919d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2919d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2919d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2919d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2919d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2919dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2919dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2919e0: 0xc065f70  jal         func_197DC0
    ctx->pc = 0x2919E0u;
    SET_GPR_U32(ctx, 31, 0x2919E8u);
    ctx->pc = 0x2919E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2919E0u;
            // 0x2919e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DC0u;
    if (runtime->hasFunction(0x197DC0u)) {
        auto targetFn = runtime->lookupFunction(0x197DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919E8u; }
        if (ctx->pc != 0x2919E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemainFusion__13CGameDataUsedFv_0x197dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919E8u; }
        if (ctx->pc != 0x2919E8u) { return; }
    }
    ctx->pc = 0x2919E8u;
label_2919e8:
    // 0x2919e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2919ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2919ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2919f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2919f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2919f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2919f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2919f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2919F8u;
    {
        const bool branch_taken_0x2919f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919F8u;
            // 0x2919fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919f8) {
            ctx->pc = 0x291A10u;
            goto label_291a10;
        }
    }
    ctx->pc = 0x291A00u;
label_291a00:
    // 0x291a00: 0x86440028  lh          $a0, 0x28($s2)
    ctx->pc = 0x291a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x291a04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x291a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x291a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291a0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x291a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_291a10:
    // 0x291a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x291a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_291a14:
    // 0x291a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x291a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291a24: 0x3e00008  jr          $ra
    ctx->pc = 0x291A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A24u;
            // 0x291a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291A2Cu;
}
