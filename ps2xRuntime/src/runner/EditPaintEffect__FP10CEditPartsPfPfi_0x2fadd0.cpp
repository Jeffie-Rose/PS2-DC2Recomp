#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPaintEffect__FP10CEditPartsPfPfi
// Address: 0x2fadd0 - 0x2faf30
void EditPaintEffect__FP10CEditPartsPfPfi_0x2fadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPaintEffect__FP10CEditPartsPfPfi_0x2fadd0");
#endif

    switch (ctx->pc) {
        case 0x2fadd0u: goto label_2fadd0;
        case 0x2fadd4u: goto label_2fadd4;
        case 0x2fadd8u: goto label_2fadd8;
        case 0x2faddcu: goto label_2faddc;
        case 0x2fade0u: goto label_2fade0;
        case 0x2fade4u: goto label_2fade4;
        case 0x2fade8u: goto label_2fade8;
        case 0x2fadecu: goto label_2fadec;
        case 0x2fadf0u: goto label_2fadf0;
        case 0x2fadf4u: goto label_2fadf4;
        case 0x2fadf8u: goto label_2fadf8;
        case 0x2fadfcu: goto label_2fadfc;
        case 0x2fae00u: goto label_2fae00;
        case 0x2fae04u: goto label_2fae04;
        case 0x2fae08u: goto label_2fae08;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae10u: goto label_2fae10;
        case 0x2fae14u: goto label_2fae14;
        case 0x2fae18u: goto label_2fae18;
        case 0x2fae1cu: goto label_2fae1c;
        case 0x2fae20u: goto label_2fae20;
        case 0x2fae24u: goto label_2fae24;
        case 0x2fae28u: goto label_2fae28;
        case 0x2fae2cu: goto label_2fae2c;
        case 0x2fae30u: goto label_2fae30;
        case 0x2fae34u: goto label_2fae34;
        case 0x2fae38u: goto label_2fae38;
        case 0x2fae3cu: goto label_2fae3c;
        case 0x2fae40u: goto label_2fae40;
        case 0x2fae44u: goto label_2fae44;
        case 0x2fae48u: goto label_2fae48;
        case 0x2fae4cu: goto label_2fae4c;
        case 0x2fae50u: goto label_2fae50;
        case 0x2fae54u: goto label_2fae54;
        case 0x2fae58u: goto label_2fae58;
        case 0x2fae5cu: goto label_2fae5c;
        case 0x2fae60u: goto label_2fae60;
        case 0x2fae64u: goto label_2fae64;
        case 0x2fae68u: goto label_2fae68;
        case 0x2fae6cu: goto label_2fae6c;
        case 0x2fae70u: goto label_2fae70;
        case 0x2fae74u: goto label_2fae74;
        case 0x2fae78u: goto label_2fae78;
        case 0x2fae7cu: goto label_2fae7c;
        case 0x2fae80u: goto label_2fae80;
        case 0x2fae84u: goto label_2fae84;
        case 0x2fae88u: goto label_2fae88;
        case 0x2fae8cu: goto label_2fae8c;
        case 0x2fae90u: goto label_2fae90;
        case 0x2fae94u: goto label_2fae94;
        case 0x2fae98u: goto label_2fae98;
        case 0x2fae9cu: goto label_2fae9c;
        case 0x2faea0u: goto label_2faea0;
        case 0x2faea4u: goto label_2faea4;
        case 0x2faea8u: goto label_2faea8;
        case 0x2faeacu: goto label_2faeac;
        case 0x2faeb0u: goto label_2faeb0;
        case 0x2faeb4u: goto label_2faeb4;
        case 0x2faeb8u: goto label_2faeb8;
        case 0x2faebcu: goto label_2faebc;
        case 0x2faec0u: goto label_2faec0;
        case 0x2faec4u: goto label_2faec4;
        case 0x2faec8u: goto label_2faec8;
        case 0x2faeccu: goto label_2faecc;
        case 0x2faed0u: goto label_2faed0;
        case 0x2faed4u: goto label_2faed4;
        case 0x2faed8u: goto label_2faed8;
        case 0x2faedcu: goto label_2faedc;
        case 0x2faee0u: goto label_2faee0;
        case 0x2faee4u: goto label_2faee4;
        case 0x2faee8u: goto label_2faee8;
        case 0x2faeecu: goto label_2faeec;
        case 0x2faef0u: goto label_2faef0;
        case 0x2faef4u: goto label_2faef4;
        case 0x2faef8u: goto label_2faef8;
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf00u: goto label_2faf00;
        case 0x2faf04u: goto label_2faf04;
        case 0x2faf08u: goto label_2faf08;
        case 0x2faf0cu: goto label_2faf0c;
        case 0x2faf10u: goto label_2faf10;
        case 0x2faf14u: goto label_2faf14;
        case 0x2faf18u: goto label_2faf18;
        case 0x2faf1cu: goto label_2faf1c;
        case 0x2faf20u: goto label_2faf20;
        case 0x2faf24u: goto label_2faf24;
        case 0x2faf28u: goto label_2faf28;
        case 0x2faf2cu: goto label_2faf2c;
        default: break;
    }

    ctx->pc = 0x2fadd0u;

label_2fadd0:
    // 0x2fadd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2fadd4:
    // 0x2fadd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fadd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2fadd8:
    // 0x2fadd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fadd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2faddc:
    // 0x2faddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2faddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fade0:
    // 0x2fade0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2fade0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fade4:
    // 0x2fade4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fade8:
    // 0x2fade8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2fade8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fadec:
    // 0x2fadec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fadecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fadf0:
    // 0x2fadf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fadf4:
    // 0x2fadf4: 0x8f859f6c  lw          $a1, -0x6094($gp)
    ctx->pc = 0x2fadf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942572)));
label_2fadf8:
    // 0x2fadf8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_2fadfc:
    if (ctx->pc == 0x2FADFCu) {
        ctx->pc = 0x2FADFCu;
            // 0x2fadfc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE00u;
        goto label_2fae00;
    }
    ctx->pc = 0x2FADF8u;
    {
        const bool branch_taken_0x2fadf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FADF8u;
            // 0x2fadfc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadf8) {
            ctx->pc = 0x2FAE08u;
            goto label_2fae08;
        }
    }
    ctx->pc = 0x2FAE00u;
label_2fae00:
    // 0x2fae00: 0x10000043  b           . + 4 + (0x43 << 2)
label_2fae04:
    if (ctx->pc == 0x2FAE04u) {
        ctx->pc = 0x2FAE04u;
            // 0x2fae04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE08u;
        goto label_2fae08;
    }
    ctx->pc = 0x2FAE00u;
    {
        const bool branch_taken_0x2fae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE00u;
            // 0x2fae04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae00) {
            ctx->pc = 0x2FAF10u;
            goto label_2faf10;
        }
    }
    ctx->pc = 0x2FAE08u;
label_2fae08:
    // 0x2fae08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fae08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fae0c:
    // 0x2fae0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2fae0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fae10:
    // 0x2fae10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fae14:
    // 0x2fae14: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2fae14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2fae18:
    // 0x2fae18: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x2fae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_2fae1c:
    // 0x2fae1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2fae20:
    if (ctx->pc == 0x2FAE20u) {
        ctx->pc = 0x2FAE24u;
        goto label_2fae24;
    }
    ctx->pc = 0x2FAE1Cu;
    {
        const bool branch_taken_0x2fae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fae1c) {
            ctx->pc = 0x2FAE28u;
            goto label_2fae28;
        }
    }
    ctx->pc = 0x2FAE24u;
label_2fae24:
    // 0x2fae24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2fae24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fae28:
    // 0x2fae28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2fae2c:
    // 0x2fae2c: 0x1860fff9  blez        $v1, . + 4 + (-0x7 << 2)
label_2fae30:
    if (ctx->pc == 0x2FAE30u) {
        ctx->pc = 0x2FAE30u;
            // 0x2fae30: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->pc = 0x2FAE34u;
        goto label_2fae34;
    }
    ctx->pc = 0x2FAE2Cu;
    {
        const bool branch_taken_0x2fae2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2FAE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE2Cu;
            // 0x2fae30: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae2c) {
            ctx->pc = 0x2FAE14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fae14;
        }
    }
    ctx->pc = 0x2FAE34u;
label_2fae34:
    // 0x2fae34: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2fae38:
    if (ctx->pc == 0x2FAE38u) {
        ctx->pc = 0x2FAE38u;
            // 0x2fae38: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x2FAE3Cu;
        goto label_2fae3c;
    }
    ctx->pc = 0x2FAE34u;
    {
        const bool branch_taken_0x2fae34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE34u;
            // 0x2fae38: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae34) {
            ctx->pc = 0x2FAE44u;
            goto label_2fae44;
        }
    }
    ctx->pc = 0x2FAE3Cu;
label_2fae3c:
    // 0x2fae3c: 0x10000034  b           . + 4 + (0x34 << 2)
label_2fae40:
    if (ctx->pc == 0x2FAE40u) {
        ctx->pc = 0x2FAE40u;
            // 0x2fae40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE44u;
        goto label_2fae44;
    }
    ctx->pc = 0x2FAE3Cu;
    {
        const bool branch_taken_0x2fae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE3Cu;
            // 0x2fae40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae3c) {
            ctx->pc = 0x2FAF10u;
            goto label_2faf10;
        }
    }
    ctx->pc = 0x2FAE44u;
label_2fae44:
    // 0x2fae44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fae44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fae48:
    // 0x2fae48: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2fae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2fae4c:
    // 0x2fae4c: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8
    ctx->pc = 0x2fae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
label_2fae50:
    // 0x2fae50: 0xc04b414  jal         func_12D050
label_2fae54:
    if (ctx->pc == 0x2FAE54u) {
        ctx->pc = 0x2FAE54u;
            // 0x2fae54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2FAE58u;
        goto label_2fae58;
    }
    ctx->pc = 0x2FAE50u;
    SET_GPR_U32(ctx, 31, 0x2FAE58u);
    ctx->pc = 0x2FAE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE50u;
            // 0x2fae54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE58u; }
        if (ctx->pc != 0x2FAE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE58u; }
        if (ctx->pc != 0x2FAE58u) { return; }
    }
    ctx->pc = 0x2FAE58u;
label_2fae58:
    // 0x2fae58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fae58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fae5c:
    // 0x2fae5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fae60:
    // 0x2fae60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fae60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fae64:
    // 0x2fae64: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2fae68:
    if (ctx->pc == 0x2FAE68u) {
        ctx->pc = 0x2FAE68u;
            // 0x2fae68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FAE6Cu;
        goto label_2fae6c;
    }
    ctx->pc = 0x2FAE64u;
    {
        const bool branch_taken_0x2fae64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE64u;
            // 0x2fae68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae64) {
            ctx->pc = 0x2FAE78u;
            goto label_2fae78;
        }
    }
    ctx->pc = 0x2FAE6Cu;
label_2fae6c:
    // 0x2fae6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2fae70:
    // 0x2fae70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fae70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fae74:
    // 0x2fae74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fae78:
    // 0x2fae78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fae7c:
    // 0x2fae7c: 0xc0bed9c  jal         func_2FB670
label_2fae80:
    if (ctx->pc == 0x2FAE80u) {
        ctx->pc = 0x2FAE80u;
            // 0x2fae80: 0xaf829f64  sw          $v0, -0x609C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942564), GPR_U32(ctx, 2));
        ctx->pc = 0x2FAE84u;
        goto label_2fae84;
    }
    ctx->pc = 0x2FAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2FAE84u);
    ctx->pc = 0x2FAE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE7Cu;
            // 0x2fae80: 0xaf829f64  sw          $v0, -0x609C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (runtime->hasFunction(0x2FB670u)) {
        auto targetFn = runtime->lookupFunction(0x2FB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE84u; }
        if (ctx->pc != 0x2FAE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParamInit__12CPaintEffectFf_0x2fb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE84u; }
        if (ctx->pc != 0x2FAE84u) { return; }
    }
    ctx->pc = 0x2FAE84u;
label_2fae84:
    // 0x2fae84: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2fae84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fae88:
    // 0x2fae88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fae8c:
    // 0x2fae8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fae8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fae90:
    // 0x2fae90: 0x320f809  jalr        $t9
label_2fae94:
    if (ctx->pc == 0x2FAE94u) {
        ctx->pc = 0x2FAE94u;
            // 0x2fae94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE98u;
        goto label_2fae98;
    }
    ctx->pc = 0x2FAE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FAE98u);
        ctx->pc = 0x2FAE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE90u;
            // 0x2fae94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FAE98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE98u; }
            if (ctx->pc != 0x2FAE98u) { return; }
        }
        }
    }
    ctx->pc = 0x2FAE98u;
label_2fae98:
    // 0x2fae98: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2fae98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2fae9c:
    // 0x2fae9c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2fae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_2faea0:
    // 0x2faea0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2faea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2faea4:
    // 0x2faea4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2faea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2faea8:
    // 0x2faea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2faea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2faeac:
    // 0x2faeac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2faeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2faeb0:
    // 0x2faeb0: 0xc041c4a  jal         func_107128
label_2faeb4:
    if (ctx->pc == 0x2FAEB4u) {
        ctx->pc = 0x2FAEB4u;
            // 0x2faeb4: 0x7e030080  sq          $v1, 0x80($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
        ctx->pc = 0x2FAEB8u;
        goto label_2faeb8;
    }
    ctx->pc = 0x2FAEB0u;
    SET_GPR_U32(ctx, 31, 0x2FAEB8u);
    ctx->pc = 0x2FAEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAEB0u;
            // 0x2faeb4: 0x7e030080  sq          $v1, 0x80($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAEB8u; }
        if (ctx->pc != 0x2FAEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAEB8u; }
        if (ctx->pc != 0x2FAEB8u) { return; }
    }
    ctx->pc = 0x2FAEB8u;
label_2faeb8:
    // 0x2faeb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2faeb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faebc:
    // 0x2faebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2faebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faec0:
    // 0x2faec0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2faec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2faec4:
    // 0x2faec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2faec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2faec8:
    // 0x2faec8: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2faec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2faecc:
    // 0x2faecc: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2faeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2faed0:
    // 0x2faed0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2faed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2faed4:
    // 0x2faed4: 0x0  nop
    ctx->pc = 0x2faed4u;
    // NOP
label_2faed8:
    // 0x2faed8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2faedc:
    if (ctx->pc == 0x2FAEDCu) {
        ctx->pc = 0x2FAEDCu;
            // 0x2faedc: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x2FAEE0u;
        goto label_2faee0;
    }
    ctx->pc = 0x2FAED8u;
    {
        const bool branch_taken_0x2faed8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FAEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAED8u;
            // 0x2faedc: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faed8) {
            ctx->pc = 0x2FAEE4u;
            goto label_2faee4;
        }
    }
    ctx->pc = 0x2FAEE0u;
label_2faee0:
    // 0x2faee0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2faee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2faee4:
    // 0x2faee4: 0x0  nop
    ctx->pc = 0x2faee4u;
    // NOP
label_2faee8:
    // 0x2faee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2faee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2faeec:
    // 0x2faeec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2faeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2faef0:
    // 0x2faef0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2faef4:
    if (ctx->pc == 0x2FAEF4u) {
        ctx->pc = 0x2FAEF4u;
            // 0x2faef4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2FAEF8u;
        goto label_2faef8;
    }
    ctx->pc = 0x2FAEF0u;
    {
        const bool branch_taken_0x2faef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAEF0u;
            // 0x2faef4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faef0) {
            ctx->pc = 0x2FAEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2faec8;
        }
    }
    ctx->pc = 0x2FAEF8u;
label_2faef8:
    // 0x2faef8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2faefc:
    if (ctx->pc == 0x2FAEFCu) {
        ctx->pc = 0x2FAEFCu;
            // 0x2faefc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FAF00u;
        goto label_2faf00;
    }
    ctx->pc = 0x2FAEF8u;
    {
        const bool branch_taken_0x2faef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAEF8u;
            // 0x2faefc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faef8) {
            ctx->pc = 0x2FAF08u;
            goto label_2faf08;
        }
    }
    ctx->pc = 0x2FAF00u;
label_2faf00:
    // 0x2faf00: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2faf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_2faf04:
    // 0x2faf04: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x2faf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_2faf08:
    // 0x2faf08: 0xae110090  sw          $s1, 0x90($s0)
    ctx->pc = 0x2faf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
label_2faf0c:
    // 0x2faf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2faf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2faf10:
    // 0x2faf10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2faf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2faf14:
    // 0x2faf14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2faf14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2faf18:
    // 0x2faf18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2faf18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2faf1c:
    // 0x2faf1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2faf1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2faf20:
    // 0x2faf20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2faf20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2faf24:
    // 0x2faf24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2faf24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2faf28:
    // 0x2faf28: 0x3e00008  jr          $ra
label_2faf2c:
    if (ctx->pc == 0x2FAF2Cu) {
        ctx->pc = 0x2FAF2Cu;
            // 0x2faf2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FAF30u;
        goto label_fallthrough_0x2faf28;
    }
    ctx->pc = 0x2FAF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF28u;
            // 0x2faf2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2faf28:
    ctx->pc = 0x2FAF30u;
}
