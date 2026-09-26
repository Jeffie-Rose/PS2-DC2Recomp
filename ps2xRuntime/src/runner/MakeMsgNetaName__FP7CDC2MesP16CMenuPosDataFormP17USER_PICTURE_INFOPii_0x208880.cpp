#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMsgNetaName__FP7CDC2MesP16CMenuPosDataFormP17USER_PICTURE_INFOPii
// Address: 0x208880 - 0x2089cc
void MakeMsgNetaName__FP7CDC2MesP16CMenuPosDataFormP17USER_PICTURE_INFOPii_0x208880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMsgNetaName__FP7CDC2MesP16CMenuPosDataFormP17USER_PICTURE_INFOPii_0x208880");
#endif

    switch (ctx->pc) {
        case 0x2088d4u: goto label_2088d4;
        case 0x208934u: goto label_208934;
        case 0x208940u: goto label_208940;
        case 0x208950u: goto label_208950;
        case 0x20895cu: goto label_20895c;
        default: break;
    }

    ctx->pc = 0x208880u;

    // 0x208880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x208880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x208884: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x208884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x208888: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x208888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20888c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x208890: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x208890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208894: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x208894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x208898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x208898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20889c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20889cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2088a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2088a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2088a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2088a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2088ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2088acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2088b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2088b4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2088b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2088b8: 0x87838208  lh          $v1, -0x7DF8($gp)
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935048)));
    // 0x2088bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2088bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088c0: 0x9382820a  lbu         $v0, -0x7DF6($gp)
    ctx->pc = 0x2088c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935050)));
    // 0x2088c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2088c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088c8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2088c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2088cc: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x2088CCu;
    SET_GPR_U32(ctx, 31, 0x2088D4u);
    ctx->pc = 0x2088D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2088CCu;
            // 0x2088d0: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2088D4u; }
        if (ctx->pc != 0x2088D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2088D4u; }
        if (ctx->pc != 0x2088D4u) { return; }
    }
    ctx->pc = 0x2088D4u;
label_2088d4:
    // 0x2088d4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2088d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2088d8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2088dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2088DCu;
    {
        const bool branch_taken_0x2088dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2088E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2088DCu;
            // 0x2088e0: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088dc) {
            ctx->pc = 0x2088ECu;
            goto label_2088ec;
        }
    }
    ctx->pc = 0x2088E4u;
    // 0x2088e4: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x2088e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2088e8: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2088e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_2088ec:
    // 0x2088ec: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2088ECu;
    {
        const bool branch_taken_0x2088ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2088ECu;
            // 0x2088f0: 0x24100032  addiu       $s0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088ec) {
            ctx->pc = 0x208918u;
            goto label_208918;
        }
    }
    ctx->pc = 0x2088F4u;
    // 0x2088f4: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2088f8: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2088F8u;
    {
        const bool branch_taken_0x2088f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2088FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2088F8u;
            // 0x2088fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088f8) {
            ctx->pc = 0x208918u;
            goto label_208918;
        }
    }
    ctx->pc = 0x208900u;
    // 0x208900: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208900u;
    {
        const bool branch_taken_0x208900 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x208904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208900u;
            // 0x208904: 0x286203e8  slti        $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208900) {
            ctx->pc = 0x208918u;
            goto label_208918;
        }
    }
    ctx->pc = 0x208908u;
    // 0x208908: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x208908u;
    {
        const bool branch_taken_0x208908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208908u;
            // 0x20890c: 0x24100259  addiu       $s0, $zero, 0x259 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208908) {
            ctx->pc = 0x208914u;
            goto label_208914;
        }
    }
    ctx->pc = 0x208910u;
    // 0x208910: 0x2410025d  addiu       $s0, $zero, 0x25D
    ctx->pc = 0x208910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 605));
label_208914:
    // 0x208914: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x208914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208918:
    // 0x208918: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x208918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x20891c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20891Cu;
    {
        const bool branch_taken_0x20891c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x208920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20891Cu;
            // 0x208920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20891c) {
            ctx->pc = 0x208938u;
            goto label_208938;
        }
    }
    ctx->pc = 0x208924u;
    // 0x208924: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x208924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x208928: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x208928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20892c: 0xc054a98  jal         func_152A60
    ctx->pc = 0x20892Cu;
    SET_GPR_U32(ctx, 31, 0x208934u);
    ctx->pc = 0x208930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20892Cu;
            // 0x208930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A60u;
    if (runtime->hasFunction(0x152A60u)) {
        auto targetFn = runtime->lookupFunction(0x152A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208934u; }
        if (ctx->pc != 0x208934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHalfFontWPercent__6ClsMesFf_0x152a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208934u; }
        if (ctx->pc != 0x208934u) { return; }
    }
    ctx->pc = 0x208934u;
label_208934:
    // 0x208934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208938:
    // 0x208938: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x208938u;
    SET_GPR_U32(ctx, 31, 0x208940u);
    ctx->pc = 0x20893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208938u;
            // 0x20893c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208940u; }
        if (ctx->pc != 0x208940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208940u; }
        if (ctx->pc != 0x208940u) { return; }
    }
    ctx->pc = 0x208940u;
label_208940:
    // 0x208940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x208940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208944: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x208944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x208948: 0xc087720  jal         func_21DC80
    ctx->pc = 0x208948u;
    SET_GPR_U32(ctx, 31, 0x208950u);
    ctx->pc = 0x20894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208948u;
            // 0x20894c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208950u; }
        if (ctx->pc != 0x208950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208950u; }
        if (ctx->pc != 0x208950u) { return; }
    }
    ctx->pc = 0x208950u;
label_208950:
    // 0x208950: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x208954: 0xc0876cc  jal         func_21DB30
    ctx->pc = 0x208954u;
    SET_GPR_U32(ctx, 31, 0x20895Cu);
    ctx->pc = 0x208958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208954u;
            // 0x208958: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB30u;
    if (runtime->hasFunction(0x21DB30u)) {
        auto targetFn = runtime->lookupFunction(0x21DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20895Cu; }
        if (ctx->pc != 0x20895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStringDrawWidthDC__7CDC2MesFPc_0x21db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20895Cu; }
        if (ctx->pc != 0x20895Cu) { return; }
    }
    ctx->pc = 0x20895Cu;
label_20895c:
    // 0x20895c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x208960: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x208964: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x208964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208968: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x208968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20896c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x208970: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x208974: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x208974u;
    {
        const bool branch_taken_0x208974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x208978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208974u;
            // 0x208978: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208974) {
            ctx->pc = 0x2089A4u;
            goto label_2089a4;
        }
    }
    ctx->pc = 0x20897Cu;
    // 0x20897c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x208980: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208980u;
    {
        const bool branch_taken_0x208980 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x208984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208980u;
            // 0x208984: 0x24030202  addiu       $v1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208980) {
            ctx->pc = 0x20898Cu;
            goto label_20898c;
        }
    }
    ctx->pc = 0x208988u;
    // 0x208988: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x208988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_20898c:
    // 0x20898c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208994: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x208994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x208998: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x208998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20899c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20899cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2089a0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2089a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_2089a4:
    // 0x2089a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2089a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2089a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2089a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2089ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2089acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2089b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2089b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2089b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2089b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2089b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2089b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2089bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2089bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2089c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2089c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2089c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2089C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2089C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089C4u;
            // 0x2089c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2089CCu;
}
