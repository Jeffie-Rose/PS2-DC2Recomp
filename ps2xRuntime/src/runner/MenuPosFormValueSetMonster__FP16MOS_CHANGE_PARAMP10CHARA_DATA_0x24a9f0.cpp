#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosFormValueSetMonster__FP16MOS_CHANGE_PARAMP10CHARA_DATA
// Address: 0x24a9f0 - 0x24abf0
void MenuPosFormValueSetMonster__FP16MOS_CHANGE_PARAMP10CHARA_DATA_0x24a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosFormValueSetMonster__FP16MOS_CHANGE_PARAMP10CHARA_DATA_0x24a9f0");
#endif

    switch (ctx->pc) {
        case 0x24aa40u: goto label_24aa40;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aaf4u: goto label_24aaf4;
        case 0x24ab00u: goto label_24ab00;
        case 0x24ab14u: goto label_24ab14;
        case 0x24ab24u: goto label_24ab24;
        case 0x24ab38u: goto label_24ab38;
        case 0x24ab48u: goto label_24ab48;
        case 0x24ab60u: goto label_24ab60;
        case 0x24ab74u: goto label_24ab74;
        case 0x24ab7cu: goto label_24ab7c;
        case 0x24ab90u: goto label_24ab90;
        case 0x24aba0u: goto label_24aba0;
        case 0x24abb4u: goto label_24abb4;
        case 0x24abc4u: goto label_24abc4;
        default: break;
    }

    ctx->pc = 0x24a9f0u;

    // 0x24a9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24a9f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24a9f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24a9fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24aa00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24aa04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24aa04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24aa0c: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24aa10: 0x8c700190  lw          $s0, 0x190($v1)
    ctx->pc = 0x24aa10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x24aa14: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x24AA14u;
    {
        const bool branch_taken_0x24aa14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA14u;
            // 0x24aa18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa14) {
            ctx->pc = 0x24ABD4u;
            goto label_24abd4;
        }
    }
    ctx->pc = 0x24AA1Cu;
    // 0x24aa1c: 0x1240006d  beqz        $s2, . + 4 + (0x6D << 2)
    ctx->pc = 0x24AA1Cu;
    {
        const bool branch_taken_0x24aa1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa1c) {
            ctx->pc = 0x24ABD4u;
            goto label_24abd4;
        }
    }
    ctx->pc = 0x24AA24u;
    // 0x24aa24: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AA24u;
    {
        const bool branch_taken_0x24aa24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa24) {
            ctx->pc = 0x24AA34u;
            goto label_24aa34;
        }
    }
    ctx->pc = 0x24AA2Cu;
    // 0x24aa2c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x24AA2Cu;
    {
        const bool branch_taken_0x24aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA2Cu;
            // 0x24aa30: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa2c) {
            ctx->pc = 0x24ABD8u;
            goto label_24abd8;
        }
    }
    ctx->pc = 0x24AA34u;
label_24aa34:
    // 0x24aa34: 0x8464011a  lh          $a0, 0x11A($v1)
    ctx->pc = 0x24aa34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x24aa38: 0xc0ad6d0  jal         func_2B5B40
    ctx->pc = 0x24AA38u;
    SET_GPR_U32(ctx, 31, 0x24AA40u);
    ctx->pc = 0x24AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA38u;
            // 0x24aa3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B40u;
    if (runtime->hasFunction(0x2B5B40u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA40u; }
        if (ctx->pc != 0x24AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_gajji_id_from_monster_progress_table__FiPi_0x2b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA40u; }
        if (ctx->pc != 0x24AA40u) { return; }
    }
    ctx->pc = 0x24AA40u;
label_24aa40:
    // 0x24aa40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x24aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24aa44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24aa48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24aa4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24aa54: 0x24a5acf0  addiu       $a1, $a1, -0x5310
    ctx->pc = 0x24aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946032));
    // 0x24aa58: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x24aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24aa5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24aa60: 0xc089664  jal         func_225990
    ctx->pc = 0x24AA60u;
    SET_GPR_U32(ctx, 31, 0x24AA68u);
    ctx->pc = 0x24AA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA60u;
            // 0x24aa64: 0x2429821  addu        $s3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA68u; }
        if (ctx->pc != 0x24AA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA68u; }
        if (ctx->pc != 0x24AA68u) { return; }
    }
    ctx->pc = 0x24AA68u;
label_24aa68:
    // 0x24aa68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24aa68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa6c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x24AA6Cu;
    {
        const bool branch_taken_0x24aa6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa6c) {
            ctx->pc = 0x24AA9Cu;
            goto label_24aa9c;
        }
    }
    ctx->pc = 0x24AA74u;
    // 0x24aa74: 0xc065b6c  jal         func_196DB0
    ctx->pc = 0x24AA74u;
    SET_GPR_U32(ctx, 31, 0x24AA7Cu);
    ctx->pc = 0x24AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA74u;
            // 0x24aa78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DB0u;
    if (runtime->hasFunction(0x196DB0u)) {
        auto targetFn = runtime->lookupFunction(0x196DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA7Cu; }
        if (ctx->pc != 0x24AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonGageRate__FP11COMMON_GAGE_0x196db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA7Cu; }
        if (ctx->pc != 0x24AA7Cu) { return; }
    }
    ctx->pc = 0x24AA7Cu;
label_24aa7c:
    // 0x24aa7c: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x24aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
    // 0x24aa80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24aa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24aa84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AA84u;
    SET_GPR_U32(ctx, 31, 0x24AA8Cu);
    ctx->pc = 0x24AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA84u;
            // 0x24aa88: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA8Cu; }
        if (ctx->pc != 0x24AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AA8Cu; }
        if (ctx->pc != 0x24AA8Cu) { return; }
    }
    ctx->pc = 0x24AA8Cu;
label_24aa8c:
    // 0x24aa8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aa90: 0x0  nop
    ctx->pc = 0x24aa90u;
    // NOP
    // 0x24aa94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24aa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24aa98: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x24aa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_24aa9c:
    // 0x24aa9c: 0xc0945c8  jal         func_251720
    ctx->pc = 0x24AA9Cu;
    SET_GPR_U32(ctx, 31, 0x24AAA4u);
    ctx->pc = 0x24AAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA9Cu;
            // 0x24aaa0: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAA4u; }
        if (ctx->pc != 0x24AAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAA4u; }
        if (ctx->pc != 0x24AAA4u) { return; }
    }
    ctx->pc = 0x24AAA4u;
label_24aaa4:
    // 0x24aaa4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24aaa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24aaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aab0: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24AAB0u;
    SET_GPR_U32(ctx, 31, 0x24AAB8u);
    ctx->pc = 0x24AAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAB0u;
            // 0x24aab4: 0x24a5acf8  addiu       $a1, $a1, -0x5308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAB8u; }
        if (ctx->pc != 0x24AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAB8u; }
        if (ctx->pc != 0x24AAB8u) { return; }
    }
    ctx->pc = 0x24AAB8u;
label_24aab8:
    // 0x24aab8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AAB8u;
    SET_GPR_U32(ctx, 31, 0x24AAC0u);
    ctx->pc = 0x24AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAB8u;
            // 0x24aabc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAC0u; }
        if (ctx->pc != 0x24AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAC0u; }
        if (ctx->pc != 0x24AAC0u) { return; }
    }
    ctx->pc = 0x24AAC0u;
label_24aac0:
    // 0x24aac0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24aac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aacc: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24AACCu;
    SET_GPR_U32(ctx, 31, 0x24AAD4u);
    ctx->pc = 0x24AAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AACCu;
            // 0x24aad0: 0x24a5ad00  addiu       $a1, $a1, -0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAD4u; }
        if (ctx->pc != 0x24AAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAD4u; }
        if (ctx->pc != 0x24AAD4u) { return; }
    }
    ctx->pc = 0x24AAD4u;
label_24aad4:
    // 0x24aad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad8: 0xc066a38  jal         func_19A8E0
    ctx->pc = 0x24AAD8u;
    SET_GPR_U32(ctx, 31, 0x24AAE0u);
    ctx->pc = 0x24AADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAD8u;
            // 0x24aadc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E0u;
    if (runtime->hasFunction(0x19A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x19A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAE0u; }
        if (ctx->pc != 0x24AAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackVol__16MOS_CHANGE_PARAMFi_0x19a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAE0u; }
        if (ctx->pc != 0x24AAE0u) { return; }
    }
    ctx->pc = 0x24AAE0u;
label_24aae0:
    // 0x24aae0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24aae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24aae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aaec: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24AAECu;
    SET_GPR_U32(ctx, 31, 0x24AAF4u);
    ctx->pc = 0x24AAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAECu;
            // 0x24aaf0: 0x24a5b9b8  addiu       $a1, $a1, -0x4648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAF4u; }
        if (ctx->pc != 0x24AAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AAF4u; }
        if (ctx->pc != 0x24AAF4u) { return; }
    }
    ctx->pc = 0x24AAF4u;
label_24aaf4:
    // 0x24aaf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24aaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aaf8: 0xc066a60  jal         func_19A980
    ctx->pc = 0x24AAF8u;
    SET_GPR_U32(ctx, 31, 0x24AB00u);
    ctx->pc = 0x24AAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AAF8u;
            // 0x24aafc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A980u;
    if (runtime->hasFunction(0x19A980u)) {
        auto targetFn = runtime->lookupFunction(0x19A980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB00u; }
        if (ctx->pc != 0x24AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__16MOS_CHANGE_PARAMFi_0x19a980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB00u; }
        if (ctx->pc != 0x24AB00u) { return; }
    }
    ctx->pc = 0x24AB00u;
label_24ab00:
    // 0x24ab00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ab04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24ab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab0c: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24AB0Cu;
    SET_GPR_U32(ctx, 31, 0x24AB14u);
    ctx->pc = 0x24AB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB0Cu;
            // 0x24ab10: 0x24a5b9c0  addiu       $a1, $a1, -0x4640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB14u; }
        if (ctx->pc != 0x24AB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB14u; }
        if (ctx->pc != 0x24AB14u) { return; }
    }
    ctx->pc = 0x24AB14u;
label_24ab14:
    // 0x24ab14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ab18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab1c: 0xc089664  jal         func_225990
    ctx->pc = 0x24AB1Cu;
    SET_GPR_U32(ctx, 31, 0x24AB24u);
    ctx->pc = 0x24AB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB1Cu;
            // 0x24ab20: 0x24a5b9a0  addiu       $a1, $a1, -0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB24u; }
        if (ctx->pc != 0x24AB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB24u; }
        if (ctx->pc != 0x24AB24u) { return; }
    }
    ctx->pc = 0x24AB24u;
label_24ab24:
    // 0x24ab24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24ab24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab28: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x24AB28u;
    {
        const bool branch_taken_0x24ab28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab28) {
            ctx->pc = 0x24AB58u;
            goto label_24ab58;
        }
    }
    ctx->pc = 0x24AB30u;
    // 0x24ab30: 0xc065b6c  jal         func_196DB0
    ctx->pc = 0x24AB30u;
    SET_GPR_U32(ctx, 31, 0x24AB38u);
    ctx->pc = 0x24AB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB30u;
            // 0x24ab34: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DB0u;
    if (runtime->hasFunction(0x196DB0u)) {
        auto targetFn = runtime->lookupFunction(0x196DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB38u; }
        if (ctx->pc != 0x24AB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonGageRate__FP11COMMON_GAGE_0x196db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB38u; }
        if (ctx->pc != 0x24AB38u) { return; }
    }
    ctx->pc = 0x24AB38u;
label_24ab38:
    // 0x24ab38: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24ab3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ab3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ab40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AB40u;
    SET_GPR_U32(ctx, 31, 0x24AB48u);
    ctx->pc = 0x24AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB40u;
            // 0x24ab44: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB48u; }
        if (ctx->pc != 0x24AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB48u; }
        if (ctx->pc != 0x24AB48u) { return; }
    }
    ctx->pc = 0x24AB48u;
label_24ab48:
    // 0x24ab48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ab48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ab4c: 0x0  nop
    ctx->pc = 0x24ab4cu;
    // NOP
    // 0x24ab50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ab50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ab54: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x24ab54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_24ab58:
    // 0x24ab58: 0xc0945c8  jal         func_251720
    ctx->pc = 0x24AB58u;
    SET_GPR_U32(ctx, 31, 0x24AB60u);
    ctx->pc = 0x24AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB58u;
            // 0x24ab5c: 0xc66c0010  lwc1        $f12, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB60u; }
        if (ctx->pc != 0x24AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB60u; }
        if (ctx->pc != 0x24AB60u) { return; }
    }
    ctx->pc = 0x24AB60u;
label_24ab60:
    // 0x24ab60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ab64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24ab64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab6c: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24AB6Cu;
    SET_GPR_U32(ctx, 31, 0x24AB74u);
    ctx->pc = 0x24AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB6Cu;
            // 0x24ab70: 0x24a5b9c8  addiu       $a1, $a1, -0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB74u; }
        if (ctx->pc != 0x24AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB74u; }
        if (ctx->pc != 0x24AB74u) { return; }
    }
    ctx->pc = 0x24AB74u;
label_24ab74:
    // 0x24ab74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24AB74u;
    SET_GPR_U32(ctx, 31, 0x24AB7Cu);
    ctx->pc = 0x24AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB74u;
            // 0x24ab78: 0xc66c000c  lwc1        $f12, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB7Cu; }
        if (ctx->pc != 0x24AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB7Cu; }
        if (ctx->pc != 0x24AB7Cu) { return; }
    }
    ctx->pc = 0x24AB7Cu;
label_24ab7c:
    // 0x24ab7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ab80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24ab80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab88: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24AB88u;
    SET_GPR_U32(ctx, 31, 0x24AB90u);
    ctx->pc = 0x24AB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB88u;
            // 0x24ab8c: 0x24a5b9d0  addiu       $a1, $a1, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB90u; }
        if (ctx->pc != 0x24AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB90u; }
        if (ctx->pc != 0x24AB90u) { return; }
    }
    ctx->pc = 0x24AB90u;
label_24ab90:
    // 0x24ab90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ab94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab98: 0xc089664  jal         func_225990
    ctx->pc = 0x24AB98u;
    SET_GPR_U32(ctx, 31, 0x24ABA0u);
    ctx->pc = 0x24AB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB98u;
            // 0x24ab9c: 0x24a5b9d8  addiu       $a1, $a1, -0x4628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ABA0u; }
        if (ctx->pc != 0x24ABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ABA0u; }
        if (ctx->pc != 0x24ABA0u) { return; }
    }
    ctx->pc = 0x24ABA0u;
label_24aba0:
    // 0x24aba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24aba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aba4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x24ABA4u;
    {
        const bool branch_taken_0x24aba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aba4) {
            ctx->pc = 0x24ABD4u;
            goto label_24abd4;
        }
    }
    ctx->pc = 0x24ABACu;
    // 0x24abac: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x24ABACu;
    SET_GPR_U32(ctx, 31, 0x24ABB4u);
    ctx->pc = 0x24ABB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABACu;
            // 0x24abb0: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ABB4u; }
        if (ctx->pc != 0x24ABB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ABB4u; }
        if (ctx->pc != 0x24ABB4u) { return; }
    }
    ctx->pc = 0x24ABB4u;
label_24abb4:
    // 0x24abb4: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24abb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24abb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24abbc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24ABBCu;
    SET_GPR_U32(ctx, 31, 0x24ABC4u);
    ctx->pc = 0x24ABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABBCu;
            // 0x24abc0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ABC4u; }
        if (ctx->pc != 0x24ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ABC4u; }
        if (ctx->pc != 0x24ABC4u) { return; }
    }
    ctx->pc = 0x24ABC4u;
label_24abc4:
    // 0x24abc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24abc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24abc8: 0x0  nop
    ctx->pc = 0x24abc8u;
    // NOP
    // 0x24abcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24abccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24abd0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x24abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_24abd4:
    // 0x24abd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24abd8:
    // 0x24abd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24abd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24abdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24abdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24abe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24abe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24abe8: 0x3e00008  jr          $ra
    ctx->pc = 0x24ABE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABE8u;
            // 0x24abec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24ABF0u;
}
