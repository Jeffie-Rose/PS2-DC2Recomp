#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyActiveIconTexture__FPP10mgCTextureiPUi
// Address: 0x236ac0 - 0x236dfc
void CopyActiveIconTexture__FPP10mgCTextureiPUi_0x236ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyActiveIconTexture__FPP10mgCTextureiPUi_0x236ac0");
#endif

    switch (ctx->pc) {
        case 0x236af8u: goto label_236af8;
        case 0x236b28u: goto label_236b28;
        case 0x236b44u: goto label_236b44;
        case 0x236b94u: goto label_236b94;
        case 0x236c04u: goto label_236c04;
        case 0x236c24u: goto label_236c24;
        case 0x236c3cu: goto label_236c3c;
        case 0x236c54u: goto label_236c54;
        case 0x236c90u: goto label_236c90;
        case 0x236cd0u: goto label_236cd0;
        case 0x236cd4u: goto label_236cd4;
        case 0x236d28u: goto label_236d28;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d80u: goto label_236d80;
        default: break;
    }

    ctx->pc = 0x236ac0u;

    // 0x236ac0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x236ac4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x236ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x236ac8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x236ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x236acc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x236accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x236ad0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x236ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x236ad4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x236ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x236ad8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x236ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x236adc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x236ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x236ae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x236aec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236af0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x236AF0u;
    SET_GPR_U32(ctx, 31, 0x236AF8u);
    ctx->pc = 0x236AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236AF0u;
            // 0x236af4: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AF8u; }
        if (ctx->pc != 0x236AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AF8u; }
        if (ctx->pc != 0x236AF8u) { return; }
    }
    ctx->pc = 0x236AF8u;
label_236af8:
    // 0x236af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236afc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236AFCu;
    {
        const bool branch_taken_0x236afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AFCu;
            // 0x236b00: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236afc) {
            ctx->pc = 0x236B0Cu;
            goto label_236b0c;
        }
    }
    ctx->pc = 0x236B04u;
    // 0x236b04: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x236B04u;
    {
        const bool branch_taken_0x236b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236B04u;
            // 0x236b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b04) {
            ctx->pc = 0x236DCCu;
            goto label_236dcc;
        }
    }
    ctx->pc = 0x236B0Cu;
label_236b0c:
    // 0x236b0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236b10: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x236b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x236b14: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x236b18: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x236b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x236b1c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x236b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x236b20: 0xc04b414  jal         func_12D050
    ctx->pc = 0x236B20u;
    SET_GPR_U32(ctx, 31, 0x236B28u);
    ctx->pc = 0x236B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B20u;
            // 0x236b24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B28u; }
        if (ctx->pc != 0x236B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B28u; }
        if (ctx->pc != 0x236B28u) { return; }
    }
    ctx->pc = 0x236B28u;
label_236b28:
    // 0x236b28: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x236b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x236b2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236b30: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x236b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x236b34: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x236b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x236b38: 0x24a5aaf0  addiu       $a1, $a1, -0x5510
    ctx->pc = 0x236b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945520));
    // 0x236b3c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x236B3Cu;
    SET_GPR_U32(ctx, 31, 0x236B44u);
    ctx->pc = 0x236B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B3Cu;
            // 0x236b40: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B44u; }
        if (ctx->pc != 0x236B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B44u; }
        if (ctx->pc != 0x236B44u) { return; }
    }
    ctx->pc = 0x236B44u;
label_236b44:
    // 0x236b44: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x236b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x236b48: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x236b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x236b4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x236b50: 0x24a5d7e0  addiu       $a1, $a1, -0x2820
    ctx->pc = 0x236b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
    // 0x236b54: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x236b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x236b58: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x236b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x236b5c: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x236b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x236b60: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x236b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x236b64: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x236b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x236b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x236b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236b6c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x236b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x236b70: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x236b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x236b74: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x236b74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236b78: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x236b78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x236b7c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x236b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x236b80: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x236B80u;
    {
        const bool branch_taken_0x236b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236B80u;
            // 0x236b84: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b80) {
            ctx->pc = 0x236BE0u;
            goto label_236be0;
        }
    }
    ctx->pc = 0x236B88u;
    // 0x236b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b8c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x236B8Cu;
    SET_GPR_U32(ctx, 31, 0x236B94u);
    ctx->pc = 0x236B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B8Cu;
            // 0x236b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B94u; }
        if (ctx->pc != 0x236B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B94u; }
        if (ctx->pc != 0x236B94u) { return; }
    }
    ctx->pc = 0x236B94u;
label_236b94:
    // 0x236b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236B94u;
    {
        const bool branch_taken_0x236b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236b94) {
            ctx->pc = 0x236BA4u;
            goto label_236ba4;
        }
    }
    ctx->pc = 0x236B9Cu;
    // 0x236b9c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x236B9Cu;
    {
        const bool branch_taken_0x236b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236B9Cu;
            // 0x236ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b9c) {
            ctx->pc = 0x236DCCu;
            goto label_236dcc;
        }
    }
    ctx->pc = 0x236BA4u;
label_236ba4:
    // 0x236ba4: 0x8443002e  lh          $v1, 0x2E($v0)
    ctx->pc = 0x236ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x236ba8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x236ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x236bac: 0x8443009a  lh          $v1, 0x9A($v0)
    ctx->pc = 0x236bacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 154)));
    // 0x236bb0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x236bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x236bb4: 0x84430106  lh          $v1, 0x106($v0)
    ctx->pc = 0x236bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 262)));
    // 0x236bb8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x236bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x236bbc: 0x84430172  lh          $v1, 0x172($v0)
    ctx->pc = 0x236bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 370)));
    // 0x236bc0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x236bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x236bc4: 0x844301de  lh          $v1, 0x1DE($v0)
    ctx->pc = 0x236bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 478)));
    // 0x236bc8: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x236bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x236bcc: 0x8443024a  lh          $v1, 0x24A($v0)
    ctx->pc = 0x236bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 586)));
    // 0x236bd0: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x236bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x236bd4: 0x844202b6  lh          $v0, 0x2B6($v0)
    ctx->pc = 0x236bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 694)));
    // 0x236bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x236BD8u;
    {
        const bool branch_taken_0x236bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BD8u;
            // 0x236bdc: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bd8) {
            ctx->pc = 0x236BFCu;
            goto label_236bfc;
        }
    }
    ctx->pc = 0x236BE0u;
label_236be0:
    // 0x236be0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236be4: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236BE4u;
    {
        const bool branch_taken_0x236be4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x236BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BE4u;
            // 0x236be8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236be4) {
            ctx->pc = 0x236C00u;
            goto label_236c00;
        }
    }
    ctx->pc = 0x236BECu;
    // 0x236bec: 0x8602476a  lh          $v0, 0x476A($s0)
    ctx->pc = 0x236becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18282)));
    // 0x236bf0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x236bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x236bf4: 0x86024692  lh          $v0, 0x4692($s0)
    ctx->pc = 0x236bf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18066)));
    // 0x236bf8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x236bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_236bfc:
    // 0x236bfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x236bfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236c00:
    // 0x236c00: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x236c00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236c04:
    // 0x236c04: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x236c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x236c08: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x236c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x236c0c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x236c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x236c10: 0x10a00069  beqz        $a1, . + 4 + (0x69 << 2)
    ctx->pc = 0x236C10u;
    {
        const bool branch_taken_0x236c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c10) {
            ctx->pc = 0x236DB8u;
            goto label_236db8;
        }
    }
    ctx->pc = 0x236C18u;
    // 0x236c18: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x236c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x236c1c: 0xc04bba8  jal         func_12EEA0
    ctx->pc = 0x236C1Cu;
    SET_GPR_U32(ctx, 31, 0x236C24u);
    ctx->pc = 0x236C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236C1Cu;
            // 0x236c20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA0u;
    if (runtime->hasFunction(0x12EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C24u; }
        if (ctx->pc != 0x236C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C24u; }
        if (ctx->pc != 0x236C24u) { return; }
    }
    ctx->pc = 0x236C24u;
label_236c24:
    // 0x236c24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x236c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x236c28: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x236c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x236c2c: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x236c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x236c30: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x236c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x236c34: 0xc049c18  jal         func_127060
    ctx->pc = 0x236C34u;
    SET_GPR_U32(ctx, 31, 0x236C3Cu);
    ctx->pc = 0x236C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236C34u;
            // 0x236c38: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C3Cu; }
        if (ctx->pc != 0x236C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C3Cu; }
        if (ctx->pc != 0x236C3Cu) { return; }
    }
    ctx->pc = 0x236C3Cu;
label_236c3c:
    // 0x236c3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x236c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x236c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c48: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x236c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x236c4c: 0x8cc30060  lw          $v1, 0x60($a2)
    ctx->pc = 0x236c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x236c50: 0x0  nop
    ctx->pc = 0x236c50u;
    // NOP
label_236c54:
    // 0x236c54: 0x0  nop
    ctx->pc = 0x236c54u;
    // NOP
    // 0x236c58: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x236c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x236c5c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x236c5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x236c60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236C60u;
    {
        const bool branch_taken_0x236c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236c60) {
            ctx->pc = 0x236C70u;
            goto label_236c70;
        }
    }
    ctx->pc = 0x236C68u;
    // 0x236c68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x236C68u;
    {
        const bool branch_taken_0x236c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C68u;
            // 0x236c6c: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c68) {
            ctx->pc = 0x236C80u;
            goto label_236c80;
        }
    }
    ctx->pc = 0x236C70u;
label_236c70:
    // 0x236c70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x236c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x236c74: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x236c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x236c78: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x236C78u;
    {
        const bool branch_taken_0x236c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C78u;
            // 0x236c7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c78) {
            ctx->pc = 0x236C54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236c54;
        }
    }
    ctx->pc = 0x236C80u;
label_236c80:
    // 0x236c80: 0x8cde0050  lw          $fp, 0x50($a2)
    ctx->pc = 0x236c80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x236c84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x236c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c88: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x236C88u;
    {
        const bool branch_taken_0x236c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C88u;
            // 0x236c8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c88) {
            ctx->pc = 0x236DA0u;
            goto label_236da0;
        }
    }
    ctx->pc = 0x236C90u;
label_236c90:
    // 0x236c90: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x236c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x236c94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x236C94u;
    {
        const bool branch_taken_0x236c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C94u;
            // 0x236c98: 0x3d58821  addu        $s1, $fp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c94) {
            ctx->pc = 0x236CA4u;
            goto label_236ca4;
        }
    }
    ctx->pc = 0x236C9Cu;
    // 0x236c9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x236C9Cu;
    {
        const bool branch_taken_0x236c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c9c) {
            ctx->pc = 0x236CB8u;
            goto label_236cb8;
        }
    }
    ctx->pc = 0x236CA4u;
label_236ca4:
    // 0x236ca4: 0x0  nop
    ctx->pc = 0x236ca4u;
    // NOP
    // 0x236ca8: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x236ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x236cac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x236cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x236cb0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x236cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x236cb4: 0x24510800  addiu       $s1, $v0, 0x800
    ctx->pc = 0x236cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_236cb8:
    // 0x236cb8: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x236cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x236cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236cc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x236cc4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x236cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x236cc8: 0x1c800015  bgtz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x236CC8u;
    {
        const bool branch_taken_0x236cc8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x236CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236CC8u;
            // 0x236ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cc8) {
            ctx->pc = 0x236D20u;
            goto label_236d20;
        }
    }
    ctx->pc = 0x236CD0u;
label_236cd0:
    // 0x236cd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236cd4:
    // 0x236cd4: 0x0  nop
    ctx->pc = 0x236cd4u;
    // NOP
    // 0x236cd8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x236cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x236cdc: 0xa0900000  sb          $s0, 0x0($a0)
    ctx->pc = 0x236cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x236ce0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x236ce4: 0xa0900001  sb          $s0, 0x1($a0)
    ctx->pc = 0x236ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x236ce8: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x236ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x236cec: 0xa0900002  sb          $s0, 0x2($a0)
    ctx->pc = 0x236cecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x236cf0: 0xa0900003  sb          $s0, 0x3($a0)
    ctx->pc = 0x236cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x236cf4: 0xa0900004  sb          $s0, 0x4($a0)
    ctx->pc = 0x236cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 16));
    // 0x236cf8: 0xa0900005  sb          $s0, 0x5($a0)
    ctx->pc = 0x236cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 16));
    // 0x236cfc: 0xa0900006  sb          $s0, 0x6($a0)
    ctx->pc = 0x236cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 16));
    // 0x236d00: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x236D00u;
    {
        const bool branch_taken_0x236d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D00u;
            // 0x236d04: 0xa0900007  sb          $s0, 0x7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d00) {
            ctx->pc = 0x236CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236cd4;
        }
    }
    ctx->pc = 0x236D08u;
    // 0x236d08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x236d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x236d0c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x236d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x236d10: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x236D10u;
    {
        const bool branch_taken_0x236d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D10u;
            // 0x236d14: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d10) {
            ctx->pc = 0x236CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236cd0;
        }
    }
    ctx->pc = 0x236D18u;
    // 0x236d18: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x236D18u;
    {
        const bool branch_taken_0x236d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d18) {
            ctx->pc = 0x236D94u;
            goto label_236d94;
        }
    }
    ctx->pc = 0x236D20u;
label_236d20:
    // 0x236d20: 0xc065820  jal         func_196080
    ctx->pc = 0x236D20u;
    SET_GPR_U32(ctx, 31, 0x236D28u);
    ctx->pc = 0x196080u;
    if (runtime->hasFunction(0x196080u)) {
        auto targetFn = runtime->lookupFunction(0x196080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D28u; }
        if (ctx->pc != 0x236D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemIconNo__Fi_0x196080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D28u; }
        if (ctx->pc != 0x236D28u) { return; }
    }
    ctx->pc = 0x236D28u;
label_236d28:
    // 0x236d28: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x236d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x236d2c: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x236d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x236d30: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x236d30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x236d34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236D34u;
    {
        const bool branch_taken_0x236d34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x236D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D34u;
            // 0x236d38: 0x30430007  andi        $v1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d34) {
            ctx->pc = 0x236D48u;
            goto label_236d48;
        }
    }
    ctx->pc = 0x236D3Cu;
    // 0x236d3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x236D3Cu;
    {
        const bool branch_taken_0x236d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D3Cu;
            // 0x236d40: 0x32140  sll         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d3c) {
            ctx->pc = 0x236D4Cu;
            goto label_236d4c;
        }
    }
    ctx->pc = 0x236D44u;
    // 0x236d44: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x236d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_236d48:
    // 0x236d48: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x236d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_236d4c:
    // 0x236d4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236D4Cu;
    {
        const bool branch_taken_0x236d4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x236D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D4Cu;
            // 0x236d50: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d4c) {
            ctx->pc = 0x236D5Cu;
            goto label_236d5c;
        }
    }
    ctx->pc = 0x236D54u;
    // 0x236d54: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x236d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x236d58: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x236d58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_236d5c:
    // 0x236d5c: 0x31340  sll         $v0, $v1, 13
    ctx->pc = 0x236d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x236d60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x236d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x236d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x236d68: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x236d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_236d6c:
    // 0x236d6c: 0x0  nop
    ctx->pc = 0x236d6cu;
    // NOP
    // 0x236d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d78: 0xc049c18  jal         func_127060
    ctx->pc = 0x236D78u;
    SET_GPR_U32(ctx, 31, 0x236D80u);
    ctx->pc = 0x236D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236D78u;
            // 0x236d7c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D80u; }
        if (ctx->pc != 0x236D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D80u; }
        if (ctx->pc != 0x236D80u) { return; }
    }
    ctx->pc = 0x236D80u;
label_236d80:
    // 0x236d80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x236d80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x236d84: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x236d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x236d88: 0x2a820020  slti        $v0, $s4, 0x20
    ctx->pc = 0x236d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x236d8c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x236D8Cu;
    {
        const bool branch_taken_0x236d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D8Cu;
            // 0x236d90: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d8c) {
            ctx->pc = 0x236D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236d6c;
        }
    }
    ctx->pc = 0x236D94u;
label_236d94:
    // 0x236d94: 0x0  nop
    ctx->pc = 0x236d94u;
    // NOP
    // 0x236d98: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x236d9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x236d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_236da0:
    // 0x236da0: 0x27828350  addiu       $v0, $gp, -0x7CB0
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x236da4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x236da8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x236da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236dac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x236dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236db0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x236DB0u;
    {
        const bool branch_taken_0x236db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236db0) {
            ctx->pc = 0x236C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236c90;
        }
    }
    ctx->pc = 0x236DB8u;
label_236db8:
    // 0x236db8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x236db8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x236dbc: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x236dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x236dc0: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x236DC0u;
    {
        const bool branch_taken_0x236dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DC0u;
            // 0x236dc4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dc0) {
            ctx->pc = 0x236C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236c04;
        }
    }
    ctx->pc = 0x236DC8u;
    // 0x236dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236dcc:
    // 0x236dcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x236dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x236dd0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x236dd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x236dd4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x236dd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236dd8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x236dd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236ddc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x236ddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236de0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x236de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236de4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x236de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236de8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236dec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236df4: 0x3e00008  jr          $ra
    ctx->pc = 0x236DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236DF4u;
            // 0x236df8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236DFCu;
}
