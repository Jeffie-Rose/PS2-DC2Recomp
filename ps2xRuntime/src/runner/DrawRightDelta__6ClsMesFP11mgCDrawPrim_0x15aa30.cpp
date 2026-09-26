#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRightDelta__6ClsMesFP11mgCDrawPrim
// Address: 0x15aa30 - 0x15aba4
void DrawRightDelta__6ClsMesFP11mgCDrawPrim_0x15aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRightDelta__6ClsMesFP11mgCDrawPrim_0x15aa30");
#endif

    switch (ctx->pc) {
        case 0x15aa7cu: goto label_15aa7c;
        case 0x15aaa0u: goto label_15aaa0;
        case 0x15ab1cu: goto label_15ab1c;
        case 0x15ab4cu: goto label_15ab4c;
        case 0x15ab68u: goto label_15ab68;
        default: break;
    }

    ctx->pc = 0x15aa30u;

    // 0x15aa30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15aa34: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15aa38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15aa3c: 0x246345d0  addiu       $v1, $v1, 0x45D0
    ctx->pc = 0x15aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17872));
    // 0x15aa40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15aa44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15aa48: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15aa48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15aa50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15aa50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15aa58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15aa5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15aa60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15aa64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15aa64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15aa6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15aa6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x15aa70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15aa74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15aa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x15aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_15aa7c:
    // 0x15aa7c: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x15aa7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x15aa80: 0x8e6320e4  lw          $v1, 0x20E4($s3)
    ctx->pc = 0x15aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8420)));
    // 0x15aa84: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x15AA84u;
    {
        const bool branch_taken_0x15aa84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa84) {
            ctx->pc = 0x15AB68u;
            goto label_15ab68;
        }
    }
    ctx->pc = 0x15AA8Cu;
    // 0x15aa8c: 0x8e651cd4  lw          $a1, 0x1CD4($s3)
    ctx->pc = 0x15aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7380)));
    // 0x15aa90: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x15AA90u;
    {
        const bool branch_taken_0x15aa90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA90u;
            // 0x15aa94: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa90) {
            ctx->pc = 0x15AAD0u;
            goto label_15aad0;
        }
    }
    ctx->pc = 0x15AA98u;
    // 0x15aa98: 0xc0565c0  jal         func_159700
    ctx->pc = 0x15AA98u;
    SET_GPR_U32(ctx, 31, 0x15AAA0u);
    ctx->pc = 0x159700u;
    if (runtime->hasFunction(0x159700u)) {
        auto targetFn = runtime->lookupFunction(0x159700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAA0u; }
        if (ctx->pc != 0x15AAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbqToUint__FUi_0x159700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAA0u; }
        if (ctx->pc != 0x15AAA0u) { return; }
    }
    ctx->pc = 0x15AAA0u;
label_15aaa0:
    // 0x15aaa0: 0xdfa200b8  ld          $v0, 0xB8($sp)
    ctx->pc = 0x15aaa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15aaa4: 0x27a400b3  addiu       $a0, $sp, 0xB3
    ctx->pc = 0x15aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 179));
    // 0x15aaa8: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x15aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x15aaac: 0x92a31800  lbu         $v1, 0x1800($s5)
    ctx->pc = 0x15aaacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6144)));
    // 0x15aab0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x15aab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15aab4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15aab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15aab8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AAB8u;
    {
        const bool branch_taken_0x15aab8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAB8u;
            // 0x15aabc: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab8) {
            ctx->pc = 0x15AAC8u;
            goto label_15aac8;
        }
    }
    ctx->pc = 0x15AAC0u;
    // 0x15aac0: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15aac4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15aac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15aac8:
    // 0x15aac8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15AAC8u;
    {
        const bool branch_taken_0x15aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAC8u;
            // 0x15aacc: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aac8) {
            ctx->pc = 0x15AB00u;
            goto label_15ab00;
        }
    }
    ctx->pc = 0x15AAD0u;
label_15aad0:
    // 0x15aad0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15aad4: 0xa3a200b2  sb          $v0, 0xB2($sp)
    ctx->pc = 0x15aad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 178), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aad8: 0xa3a200b1  sb          $v0, 0xB1($sp)
    ctx->pc = 0x15aad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 177), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aadc: 0xa3a200b0  sb          $v0, 0xB0($sp)
    ctx->pc = 0x15aadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 2));
    // 0x15aae0: 0x92a21800  lbu         $v0, 0x1800($s5)
    ctx->pc = 0x15aae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6144)));
    // 0x15aae4: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x15aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x15aae8: 0x211fc  dsll32      $v0, $v0, 7
    ctx->pc = 0x15aae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 7));
    // 0x15aaec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AAECu;
    {
        const bool branch_taken_0x15aaec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAECu;
            // 0x15aaf0: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaec) {
            ctx->pc = 0x15AAFCu;
            goto label_15aafc;
        }
    }
    ctx->pc = 0x15AAF4u;
    // 0x15aaf4: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15aaf8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15aaf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15aafc:
    // 0x15aafc: 0xa3a200b3  sb          $v0, 0xB3($sp)
    ctx->pc = 0x15aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 2));
label_15ab00:
    // 0x15ab00: 0x8fb40088  lw          $s4, 0x88($sp)
    ctx->pc = 0x15ab00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15ab04: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x15ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15ab08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15ab0c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ab10: 0x8fa8008c  lw          $t0, 0x8C($sp)
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x15ab14: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15AB14u;
    SET_GPR_U32(ctx, 31, 0x15AB1Cu);
    ctx->pc = 0x15AB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB14u;
            // 0x15ab18: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB1Cu; }
        if (ctx->pc != 0x15AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB1Cu; }
        if (ctx->pc != 0x15AB1Cu) { return; }
    }
    ctx->pc = 0x15AB1Cu;
label_15ab1c:
    // 0x15ab1c: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x15ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x15ab20: 0x8e652134  lw          $a1, 0x2134($s3)
    ctx->pc = 0x15ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8500)));
    // 0x15ab24: 0x8c481b94  lw          $t0, 0x1B94($v0)
    ctx->pc = 0x15ab24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7060)));
    // 0x15ab28: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15ab28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab2c: 0x8c461b98  lw          $a2, 0x1B98($v0)
    ctx->pc = 0x15ab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7064)));
    // 0x15ab30: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ab34: 0x8e632184  lw          $v1, 0x2184($s3)
    ctx->pc = 0x15ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8580)));
    // 0x15ab38: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x15ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x15ab3c: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x15ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x15ab40: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x15ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15ab44: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15AB44u;
    SET_GPR_U32(ctx, 31, 0x15AB4Cu);
    ctx->pc = 0x15AB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB44u;
            // 0x15ab48: 0x2448fffe  addiu       $t0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB4Cu; }
        if (ctx->pc != 0x15AB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB4Cu; }
        if (ctx->pc != 0x15AB4Cu) { return; }
    }
    ctx->pc = 0x15AB4Cu;
label_15ab4c:
    // 0x15ab4c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15ab50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab54: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x15ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x15ab58: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x15ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ab5c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x15ab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15ab60: 0xc0545d8  jal         func_151760
    ctx->pc = 0x15AB60u;
    SET_GPR_U32(ctx, 31, 0x15AB68u);
    ctx->pc = 0x15AB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB60u;
            // 0x15ab64: 0x27a800b0  addiu       $t0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB68u; }
        if (ctx->pc != 0x15AB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB68u; }
        if (ctx->pc != 0x15AB68u) { return; }
    }
    ctx->pc = 0x15AB68u;
label_15ab68:
    // 0x15ab68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ab68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15ab6c: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x15ab6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15ab70: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15ab74: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x15AB74u;
    {
        const bool branch_taken_0x15ab74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB74u;
            // 0x15ab78: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab74) {
            ctx->pc = 0x15AA7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15aa7c;
        }
    }
    ctx->pc = 0x15AB7Cu;
    // 0x15ab7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15ab7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ab80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15ab80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ab84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15ab84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ab88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15ab88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ab8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ab8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ab90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ab90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ab94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ab94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ab98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ab98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB9Cu;
            // 0x15aba0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15ABA4u;
}
