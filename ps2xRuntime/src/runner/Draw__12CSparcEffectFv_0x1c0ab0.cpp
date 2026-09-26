#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CSparcEffectFv
// Address: 0x1c0ab0 - 0x1c0ce8
void Draw__12CSparcEffectFv_0x1c0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CSparcEffectFv_0x1c0ab0");
#endif

    switch (ctx->pc) {
        case 0x1c0ab0u: goto label_1c0ab0;
        case 0x1c0ab4u: goto label_1c0ab4;
        case 0x1c0ab8u: goto label_1c0ab8;
        case 0x1c0abcu: goto label_1c0abc;
        case 0x1c0ac0u: goto label_1c0ac0;
        case 0x1c0ac4u: goto label_1c0ac4;
        case 0x1c0ac8u: goto label_1c0ac8;
        case 0x1c0accu: goto label_1c0acc;
        case 0x1c0ad0u: goto label_1c0ad0;
        case 0x1c0ad4u: goto label_1c0ad4;
        case 0x1c0ad8u: goto label_1c0ad8;
        case 0x1c0adcu: goto label_1c0adc;
        case 0x1c0ae0u: goto label_1c0ae0;
        case 0x1c0ae4u: goto label_1c0ae4;
        case 0x1c0ae8u: goto label_1c0ae8;
        case 0x1c0aecu: goto label_1c0aec;
        case 0x1c0af0u: goto label_1c0af0;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0af8u: goto label_1c0af8;
        case 0x1c0afcu: goto label_1c0afc;
        case 0x1c0b00u: goto label_1c0b00;
        case 0x1c0b04u: goto label_1c0b04;
        case 0x1c0b08u: goto label_1c0b08;
        case 0x1c0b0cu: goto label_1c0b0c;
        case 0x1c0b10u: goto label_1c0b10;
        case 0x1c0b14u: goto label_1c0b14;
        case 0x1c0b18u: goto label_1c0b18;
        case 0x1c0b1cu: goto label_1c0b1c;
        case 0x1c0b20u: goto label_1c0b20;
        case 0x1c0b24u: goto label_1c0b24;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b2cu: goto label_1c0b2c;
        case 0x1c0b30u: goto label_1c0b30;
        case 0x1c0b34u: goto label_1c0b34;
        case 0x1c0b38u: goto label_1c0b38;
        case 0x1c0b3cu: goto label_1c0b3c;
        case 0x1c0b40u: goto label_1c0b40;
        case 0x1c0b44u: goto label_1c0b44;
        case 0x1c0b48u: goto label_1c0b48;
        case 0x1c0b4cu: goto label_1c0b4c;
        case 0x1c0b50u: goto label_1c0b50;
        case 0x1c0b54u: goto label_1c0b54;
        case 0x1c0b58u: goto label_1c0b58;
        case 0x1c0b5cu: goto label_1c0b5c;
        case 0x1c0b60u: goto label_1c0b60;
        case 0x1c0b64u: goto label_1c0b64;
        case 0x1c0b68u: goto label_1c0b68;
        case 0x1c0b6cu: goto label_1c0b6c;
        case 0x1c0b70u: goto label_1c0b70;
        case 0x1c0b74u: goto label_1c0b74;
        case 0x1c0b78u: goto label_1c0b78;
        case 0x1c0b7cu: goto label_1c0b7c;
        case 0x1c0b80u: goto label_1c0b80;
        case 0x1c0b84u: goto label_1c0b84;
        case 0x1c0b88u: goto label_1c0b88;
        case 0x1c0b8cu: goto label_1c0b8c;
        case 0x1c0b90u: goto label_1c0b90;
        case 0x1c0b94u: goto label_1c0b94;
        case 0x1c0b98u: goto label_1c0b98;
        case 0x1c0b9cu: goto label_1c0b9c;
        case 0x1c0ba0u: goto label_1c0ba0;
        case 0x1c0ba4u: goto label_1c0ba4;
        case 0x1c0ba8u: goto label_1c0ba8;
        case 0x1c0bacu: goto label_1c0bac;
        case 0x1c0bb0u: goto label_1c0bb0;
        case 0x1c0bb4u: goto label_1c0bb4;
        case 0x1c0bb8u: goto label_1c0bb8;
        case 0x1c0bbcu: goto label_1c0bbc;
        case 0x1c0bc0u: goto label_1c0bc0;
        case 0x1c0bc4u: goto label_1c0bc4;
        case 0x1c0bc8u: goto label_1c0bc8;
        case 0x1c0bccu: goto label_1c0bcc;
        case 0x1c0bd0u: goto label_1c0bd0;
        case 0x1c0bd4u: goto label_1c0bd4;
        case 0x1c0bd8u: goto label_1c0bd8;
        case 0x1c0bdcu: goto label_1c0bdc;
        case 0x1c0be0u: goto label_1c0be0;
        case 0x1c0be4u: goto label_1c0be4;
        case 0x1c0be8u: goto label_1c0be8;
        case 0x1c0becu: goto label_1c0bec;
        case 0x1c0bf0u: goto label_1c0bf0;
        case 0x1c0bf4u: goto label_1c0bf4;
        case 0x1c0bf8u: goto label_1c0bf8;
        case 0x1c0bfcu: goto label_1c0bfc;
        case 0x1c0c00u: goto label_1c0c00;
        case 0x1c0c04u: goto label_1c0c04;
        case 0x1c0c08u: goto label_1c0c08;
        case 0x1c0c0cu: goto label_1c0c0c;
        case 0x1c0c10u: goto label_1c0c10;
        case 0x1c0c14u: goto label_1c0c14;
        case 0x1c0c18u: goto label_1c0c18;
        case 0x1c0c1cu: goto label_1c0c1c;
        case 0x1c0c20u: goto label_1c0c20;
        case 0x1c0c24u: goto label_1c0c24;
        case 0x1c0c28u: goto label_1c0c28;
        case 0x1c0c2cu: goto label_1c0c2c;
        case 0x1c0c30u: goto label_1c0c30;
        case 0x1c0c34u: goto label_1c0c34;
        case 0x1c0c38u: goto label_1c0c38;
        case 0x1c0c3cu: goto label_1c0c3c;
        case 0x1c0c40u: goto label_1c0c40;
        case 0x1c0c44u: goto label_1c0c44;
        case 0x1c0c48u: goto label_1c0c48;
        case 0x1c0c4cu: goto label_1c0c4c;
        case 0x1c0c50u: goto label_1c0c50;
        case 0x1c0c54u: goto label_1c0c54;
        case 0x1c0c58u: goto label_1c0c58;
        case 0x1c0c5cu: goto label_1c0c5c;
        case 0x1c0c60u: goto label_1c0c60;
        case 0x1c0c64u: goto label_1c0c64;
        case 0x1c0c68u: goto label_1c0c68;
        case 0x1c0c6cu: goto label_1c0c6c;
        case 0x1c0c70u: goto label_1c0c70;
        case 0x1c0c74u: goto label_1c0c74;
        case 0x1c0c78u: goto label_1c0c78;
        case 0x1c0c7cu: goto label_1c0c7c;
        case 0x1c0c80u: goto label_1c0c80;
        case 0x1c0c84u: goto label_1c0c84;
        case 0x1c0c88u: goto label_1c0c88;
        case 0x1c0c8cu: goto label_1c0c8c;
        case 0x1c0c90u: goto label_1c0c90;
        case 0x1c0c94u: goto label_1c0c94;
        case 0x1c0c98u: goto label_1c0c98;
        case 0x1c0c9cu: goto label_1c0c9c;
        case 0x1c0ca0u: goto label_1c0ca0;
        case 0x1c0ca4u: goto label_1c0ca4;
        case 0x1c0ca8u: goto label_1c0ca8;
        case 0x1c0cacu: goto label_1c0cac;
        case 0x1c0cb0u: goto label_1c0cb0;
        case 0x1c0cb4u: goto label_1c0cb4;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0cbcu: goto label_1c0cbc;
        case 0x1c0cc0u: goto label_1c0cc0;
        case 0x1c0cc4u: goto label_1c0cc4;
        case 0x1c0cc8u: goto label_1c0cc8;
        case 0x1c0cccu: goto label_1c0ccc;
        case 0x1c0cd0u: goto label_1c0cd0;
        case 0x1c0cd4u: goto label_1c0cd4;
        case 0x1c0cd8u: goto label_1c0cd8;
        case 0x1c0cdcu: goto label_1c0cdc;
        case 0x1c0ce0u: goto label_1c0ce0;
        case 0x1c0ce4u: goto label_1c0ce4;
        default: break;
    }

    ctx->pc = 0x1c0ab0u;

label_1c0ab0:
    // 0x1c0ab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1c0ab4:
    // 0x1c0ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c0ab8:
    // 0x1c0ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c0abc:
    // 0x1c0abc: 0x808300a9  lb          $v1, 0xA9($a0)
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 169)));
label_1c0ac0:
    // 0x1c0ac0: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_1c0ac4:
    if (ctx->pc == 0x1C0AC4u) {
        ctx->pc = 0x1C0AC4u;
            // 0x1c0ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AC8u;
        goto label_1c0ac8;
    }
    ctx->pc = 0x1C0AC0u;
    {
        const bool branch_taken_0x1c0ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AC0u;
            // 0x1c0ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ac0) {
            ctx->pc = 0x1C0CD8u;
            goto label_1c0cd8;
        }
    }
    ctx->pc = 0x1C0AC8u;
label_1c0ac8:
    // 0x1c0ac8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c0ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0acc:
    // 0x1c0acc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_1c0ad0:
    if (ctx->pc == 0x1C0AD0u) {
        ctx->pc = 0x1C0AD0u;
            // 0x1c0ad0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C0AD4u;
        goto label_1c0ad4;
    }
    ctx->pc = 0x1C0ACCu;
    {
        const bool branch_taken_0x1c0acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0ACCu;
            // 0x1c0ad0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0acc) {
            ctx->pc = 0x1C0CD8u;
            goto label_1c0cd8;
        }
    }
    ctx->pc = 0x1C0AD4u;
label_1c0ad4:
    // 0x1c0ad4: 0xc04d6d8  jal         func_135B60
label_1c0ad8:
    if (ctx->pc == 0x1C0AD8u) {
        ctx->pc = 0x1C0ADCu;
        goto label_1c0adc;
    }
    ctx->pc = 0x1C0AD4u;
    SET_GPR_U32(ctx, 31, 0x1C0ADCu);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0ADCu; }
        if (ctx->pc != 0x1C0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0ADCu; }
        if (ctx->pc != 0x1C0ADCu) { return; }
    }
    ctx->pc = 0x1C0ADCu;
label_1c0adc:
    // 0x1c0adc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0ae0:
    // 0x1c0ae0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c0ae4:
    // 0x1c0ae4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1c0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_1c0ae8:
    // 0x1c0ae8: 0x820300aa  lb          $v1, 0xAA($s0)
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 170)));
label_1c0aec:
    // 0x1c0aec: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1c0af0:
    if (ctx->pc == 0x1C0AF0u) {
        ctx->pc = 0x1C0AF0u;
            // 0x1c0af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C0AF4u;
        goto label_1c0af4;
    }
    ctx->pc = 0x1C0AECu;
    {
        const bool branch_taken_0x1c0aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AECu;
            // 0x1c0af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0aec) {
            ctx->pc = 0x1C0B70u;
            goto label_1c0b70;
        }
    }
    ctx->pc = 0x1C0AF4u;
label_1c0af4:
    // 0x1c0af4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1c0af8:
    if (ctx->pc == 0x1C0AF8u) {
        ctx->pc = 0x1C0AF8u;
            // 0x1c0af8: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->pc = 0x1C0AFCu;
        goto label_1c0afc;
    }
    ctx->pc = 0x1C0AF4u;
    {
        const bool branch_taken_0x1c0af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AF4u;
            // 0x1c0af8: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0af4) {
            ctx->pc = 0x1C0B50u;
            goto label_1c0b50;
        }
    }
    ctx->pc = 0x1C0AFCu;
label_1c0afc:
    // 0x1c0afc: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
label_1c0b00:
    if (ctx->pc == 0x1C0B00u) {
        ctx->pc = 0x1C0B00u;
            // 0x1c0b00: 0x3c024320  lui         $v0, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
        ctx->pc = 0x1C0B04u;
        goto label_1c0b04;
    }
    ctx->pc = 0x1C0AFCu;
    {
        const bool branch_taken_0x1c0afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C0B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AFCu;
            // 0x1c0b00: 0x3c024320  lui         $v0, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0afc) {
            ctx->pc = 0x1C0B30u;
            goto label_1c0b30;
        }
    }
    ctx->pc = 0x1C0B04u;
label_1c0b04:
    // 0x1c0b04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c0b08:
    if (ctx->pc == 0x1C0B08u) {
        ctx->pc = 0x1C0B08u;
            // 0x1c0b08: 0x3c02437f  lui         $v0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
        ctx->pc = 0x1C0B0Cu;
        goto label_1c0b0c;
    }
    ctx->pc = 0x1C0B04u;
    {
        const bool branch_taken_0x1c0b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B04u;
            // 0x1c0b08: 0x3c02437f  lui         $v0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b04) {
            ctx->pc = 0x1C0B14u;
            goto label_1c0b14;
        }
    }
    ctx->pc = 0x1C0B0Cu;
label_1c0b0c:
    // 0x1c0b0c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1c0b10:
    if (ctx->pc == 0x1C0B10u) {
        ctx->pc = 0x1C0B10u;
            // 0x1c0b10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C0B14u;
        goto label_1c0b14;
    }
    ctx->pc = 0x1C0B0Cu;
    {
        const bool branch_taken_0x1c0b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B0Cu;
            // 0x1c0b10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b0c) {
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0B14u;
label_1c0b14:
    // 0x1c0b14: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1c0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_1c0b18:
    // 0x1c0b18: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1c0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1c0b1c:
    // 0x1c0b1c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1c0b20:
    // 0x1c0b20: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1c0b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1c0b24:
    // 0x1c0b24: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x1c0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b28:
    // 0x1c0b28: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c0b2c:
    if (ctx->pc == 0x1C0B2Cu) {
        ctx->pc = 0x1C0B2Cu;
            // 0x1c0b2c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x1C0B30u;
        goto label_1c0b30;
    }
    ctx->pc = 0x1C0B28u;
    {
        const bool branch_taken_0x1c0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B28u;
            // 0x1c0b2c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b28) {
            ctx->pc = 0x1C0B8Cu;
            goto label_1c0b8c;
        }
    }
    ctx->pc = 0x1C0B30u;
label_1c0b30:
    // 0x1c0b30: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x1c0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_1c0b34:
    // 0x1c0b34: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1c0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1c0b38:
    // 0x1c0b38: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1c0b3c:
    // 0x1c0b3c: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x1c0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_1c0b40:
    // 0x1c0b40: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1c0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1c0b44:
    // 0x1c0b44: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x1c0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b48:
    // 0x1c0b48: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c0b4c:
    if (ctx->pc == 0x1C0B4Cu) {
        ctx->pc = 0x1C0B4Cu;
            // 0x1c0b4c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x1C0B50u;
        goto label_1c0b50;
    }
    ctx->pc = 0x1C0B48u;
    {
        const bool branch_taken_0x1c0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B48u;
            // 0x1c0b4c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b48) {
            ctx->pc = 0x1C0B8Cu;
            goto label_1c0b8c;
        }
    }
    ctx->pc = 0x1C0B50u;
label_1c0b50:
    // 0x1c0b50: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1c0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_1c0b54:
    // 0x1c0b54: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1c0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1c0b58:
    // 0x1c0b58: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1c0b5c:
    // 0x1c0b5c: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x1c0b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_1c0b60:
    // 0x1c0b60: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1c0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1c0b64:
    // 0x1c0b64: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x1c0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b68:
    // 0x1c0b68: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c0b6c:
    if (ctx->pc == 0x1C0B6Cu) {
        ctx->pc = 0x1C0B6Cu;
            // 0x1c0b6c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x1C0B70u;
        goto label_1c0b70;
    }
    ctx->pc = 0x1C0B68u;
    {
        const bool branch_taken_0x1c0b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B68u;
            // 0x1c0b6c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b68) {
            ctx->pc = 0x1C0B8Cu;
            goto label_1c0b8c;
        }
    }
    ctx->pc = 0x1C0B70u;
label_1c0b70:
    // 0x1c0b70: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1c0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_1c0b74:
    // 0x1c0b74: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c0b78:
    // 0x1c0b78: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1c0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1c0b7c:
    // 0x1c0b7c: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1c0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_1c0b80:
    // 0x1c0b80: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1c0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_1c0b84:
    // 0x1c0b84: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x1c0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b88:
    // 0x1c0b88: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1c0b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1c0b8c:
    // 0x1c0b8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0b90:
    // 0x1c0b90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c0b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c0b94:
    // 0x1c0b94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0b98:
    // 0x1c0b98: 0xc04de54  jal         func_137950
label_1c0b9c:
    if (ctx->pc == 0x1C0B9Cu) {
        ctx->pc = 0x1C0B9Cu;
            // 0x1c0b9c: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1C0BA0u;
        goto label_1c0ba0;
    }
    ctx->pc = 0x1C0B98u;
    SET_GPR_U32(ctx, 31, 0x1C0BA0u);
    ctx->pc = 0x1C0B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B98u;
            // 0x1c0b9c: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BA0u; }
        if (ctx->pc != 0x1C0BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BA0u; }
        if (ctx->pc != 0x1C0BA0u) { return; }
    }
    ctx->pc = 0x1C0BA0u;
label_1c0ba0:
    // 0x1c0ba0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c0ba4:
    // 0x1c0ba4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c0ba8:
    // 0x1c0ba8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0bac:
    // 0x1c0bac: 0xc04de54  jal         func_137950
label_1c0bb0:
    if (ctx->pc == 0x1C0BB0u) {
        ctx->pc = 0x1C0BB0u;
            // 0x1c0bb0: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1C0BB4u;
        goto label_1c0bb4;
    }
    ctx->pc = 0x1C0BACu;
    SET_GPR_U32(ctx, 31, 0x1C0BB4u);
    ctx->pc = 0x1C0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BACu;
            // 0x1c0bb0: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB4u; }
        if (ctx->pc != 0x1C0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BB4u; }
        if (ctx->pc != 0x1C0BB4u) { return; }
    }
    ctx->pc = 0x1C0BB4u;
label_1c0bb4:
    // 0x1c0bb4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c0bb8:
    // 0x1c0bb8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c0bbc:
    // 0x1c0bbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0bc0:
    // 0x1c0bc0: 0xc04de54  jal         func_137950
label_1c0bc4:
    if (ctx->pc == 0x1C0BC4u) {
        ctx->pc = 0x1C0BC4u;
            // 0x1c0bc4: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1C0BC8u;
        goto label_1c0bc8;
    }
    ctx->pc = 0x1C0BC0u;
    SET_GPR_U32(ctx, 31, 0x1C0BC8u);
    ctx->pc = 0x1C0BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BC0u;
            // 0x1c0bc4: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BC8u; }
        if (ctx->pc != 0x1C0BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BC8u; }
        if (ctx->pc != 0x1C0BC8u) { return; }
    }
    ctx->pc = 0x1C0BC8u;
label_1c0bc8:
    // 0x1c0bc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c0bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0bcc:
    // 0x1c0bcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0bd0:
    // 0x1c0bd0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1c0bd4:
    // 0x1c0bd4: 0x320f809  jalr        $t9
label_1c0bd8:
    if (ctx->pc == 0x1C0BD8u) {
        ctx->pc = 0x1C0BD8u;
            // 0x1c0bd8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1C0BDCu;
        goto label_1c0bdc;
    }
    ctx->pc = 0x1C0BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0BDCu);
        ctx->pc = 0x1C0BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BD4u;
            // 0x1c0bd8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BDCu; }
            if (ctx->pc != 0x1C0BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C0BDCu;
label_1c0bdc:
    // 0x1c0bdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0be0:
    // 0x1c0be0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1c0be4:
    // 0x1c0be4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c0be8:
    // 0x1c0be8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c0be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0bec:
    // 0x1c0bec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c0becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c0bf0:
    // 0x1c0bf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0bf4:
    // 0x1c0bf4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1c0bf8:
    // 0x1c0bf8: 0x320f809  jalr        $t9
label_1c0bfc:
    if (ctx->pc == 0x1C0BFCu) {
        ctx->pc = 0x1C0BFCu;
            // 0x1c0bfc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1C0C00u;
        goto label_1c0c00;
    }
    ctx->pc = 0x1C0BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0C00u);
        ctx->pc = 0x1C0BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BF8u;
            // 0x1c0bfc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0C00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C00u; }
            if (ctx->pc != 0x1C0C00u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0C00u;
label_1c0c00:
    // 0x1c0c00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c0c04:
    // 0x1c0c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0c08:
    // 0x1c0c08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1c0c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1c0c0c:
    // 0x1c0c0c: 0x320f809  jalr        $t9
label_1c0c10:
    if (ctx->pc == 0x1C0C10u) {
        ctx->pc = 0x1C0C10u;
            // 0x1c0c10: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1C0C14u;
        goto label_1c0c14;
    }
    ctx->pc = 0x1C0C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0C14u);
        ctx->pc = 0x1C0C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C0Cu;
            // 0x1c0c10: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C14u; }
            if (ctx->pc != 0x1C0C14u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0C14u;
label_1c0c14:
    // 0x1c0c14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c0c18:
    // 0x1c0c18: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1c0c1c:
    // 0x1c0c1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c0c20:
    // 0x1c0c20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c0c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0c24:
    // 0x1c0c24: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c0c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c0c28:
    // 0x1c0c28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0c2c:
    // 0x1c0c2c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1c0c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1c0c30:
    // 0x1c0c30: 0x320f809  jalr        $t9
label_1c0c34:
    if (ctx->pc == 0x1C0C34u) {
        ctx->pc = 0x1C0C34u;
            // 0x1c0c34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1C0C38u;
        goto label_1c0c38;
    }
    ctx->pc = 0x1C0C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0C38u);
        ctx->pc = 0x1C0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C30u;
            // 0x1c0c34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0C38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C38u; }
            if (ctx->pc != 0x1C0C38u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0C38u;
label_1c0c38:
    // 0x1c0c38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c0c3c:
    // 0x1c0c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0c40:
    // 0x1c0c40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1c0c44:
    // 0x1c0c44: 0x320f809  jalr        $t9
label_1c0c48:
    if (ctx->pc == 0x1C0C48u) {
        ctx->pc = 0x1C0C48u;
            // 0x1c0c48: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1C0C4Cu;
        goto label_1c0c4c;
    }
    ctx->pc = 0x1C0C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0C4Cu);
        ctx->pc = 0x1C0C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C44u;
            // 0x1c0c48: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C4Cu; }
            if (ctx->pc != 0x1C0C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C0C4Cu;
label_1c0c4c:
    // 0x1c0c4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c0c50:
    // 0x1c0c50: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1c0c54:
    // 0x1c0c54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c0c58:
    // 0x1c0c58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c0c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0c5c:
    // 0x1c0c5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c0c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c0c60:
    // 0x1c0c60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0c64:
    // 0x1c0c64: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1c0c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1c0c68:
    // 0x1c0c68: 0x320f809  jalr        $t9
label_1c0c6c:
    if (ctx->pc == 0x1C0C6Cu) {
        ctx->pc = 0x1C0C6Cu;
            // 0x1c0c6c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1C0C70u;
        goto label_1c0c70;
    }
    ctx->pc = 0x1C0C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0C70u);
        ctx->pc = 0x1C0C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C68u;
            // 0x1c0c6c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C70u; }
            if (ctx->pc != 0x1C0C70u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0C70u;
label_1c0c70:
    // 0x1c0c70: 0x820400a8  lb          $a0, 0xA8($s0)
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_1c0c74:
    // 0x1c0c74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0c78:
    // 0x1c0c78: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_1c0c7c:
    if (ctx->pc == 0x1C0C7Cu) {
        ctx->pc = 0x1C0C7Cu;
            // 0x1c0c7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C0C80u;
        goto label_1c0c80;
    }
    ctx->pc = 0x1C0C78u;
    {
        const bool branch_taken_0x1c0c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C78u;
            // 0x1c0c7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c78) {
            ctx->pc = 0x1C0CC8u;
            goto label_1c0cc8;
        }
    }
    ctx->pc = 0x1C0C80u;
label_1c0c80:
    // 0x1c0c80: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1c0c84:
    if (ctx->pc == 0x1C0C84u) {
        ctx->pc = 0x1C0C88u;
        goto label_1c0c88;
    }
    ctx->pc = 0x1C0C80u;
    {
        const bool branch_taken_0x1c0c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0c80) {
            ctx->pc = 0x1C0CB0u;
            goto label_1c0cb0;
        }
    }
    ctx->pc = 0x1C0C88u;
label_1c0c88:
    // 0x1c0c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c0c8c:
    if (ctx->pc == 0x1C0C8Cu) {
        ctx->pc = 0x1C0C90u;
        goto label_1c0c90;
    }
    ctx->pc = 0x1C0C88u;
    {
        const bool branch_taken_0x1c0c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c88) {
            ctx->pc = 0x1C0C98u;
            goto label_1c0c98;
        }
    }
    ctx->pc = 0x1C0C90u;
label_1c0c90:
    // 0x1c0c90: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c0c94:
    if (ctx->pc == 0x1C0C94u) {
        ctx->pc = 0x1C0C94u;
            // 0x1c0c94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C0C98u;
        goto label_1c0c98;
    }
    ctx->pc = 0x1C0C90u;
    {
        const bool branch_taken_0x1c0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C90u;
            // 0x1c0c94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c90) {
            ctx->pc = 0x1C0CDCu;
            goto label_1c0cdc;
        }
    }
    ctx->pc = 0x1C0C98u;
label_1c0c98:
    // 0x1c0c98: 0xc050bf4  jal         func_142FD0
label_1c0c9c:
    if (ctx->pc == 0x1C0C9Cu) {
        ctx->pc = 0x1C0C9Cu;
            // 0x1c0c9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C0CA0u;
        goto label_1c0ca0;
    }
    ctx->pc = 0x1C0C98u;
    SET_GPR_U32(ctx, 31, 0x1C0CA0u);
    ctx->pc = 0x1C0C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C98u;
            // 0x1c0c9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CA0u; }
        if (ctx->pc != 0x1C0CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CA0u; }
        if (ctx->pc != 0x1C0CA0u) { return; }
    }
    ctx->pc = 0x1C0CA0u;
label_1c0ca0:
    // 0x1c0ca0: 0xc050bf4  jal         func_142FD0
label_1c0ca4:
    if (ctx->pc == 0x1C0CA4u) {
        ctx->pc = 0x1C0CA4u;
            // 0x1c0ca4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1C0CA8u;
        goto label_1c0ca8;
    }
    ctx->pc = 0x1C0CA0u;
    SET_GPR_U32(ctx, 31, 0x1C0CA8u);
    ctx->pc = 0x1C0CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CA0u;
            // 0x1c0ca4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CA8u; }
        if (ctx->pc != 0x1C0CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CA8u; }
        if (ctx->pc != 0x1C0CA8u) { return; }
    }
    ctx->pc = 0x1C0CA8u;
label_1c0ca8:
    // 0x1c0ca8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c0cac:
    if (ctx->pc == 0x1C0CACu) {
        ctx->pc = 0x1C0CB0u;
        goto label_1c0cb0;
    }
    ctx->pc = 0x1C0CA8u;
    {
        const bool branch_taken_0x1c0ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ca8) {
            ctx->pc = 0x1C0CD8u;
            goto label_1c0cd8;
        }
    }
    ctx->pc = 0x1C0CB0u;
label_1c0cb0:
    // 0x1c0cb0: 0xc050bf4  jal         func_142FD0
label_1c0cb4:
    if (ctx->pc == 0x1C0CB4u) {
        ctx->pc = 0x1C0CB4u;
            // 0x1c0cb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1C0CB8u;
        goto label_1c0cb8;
    }
    ctx->pc = 0x1C0CB0u;
    SET_GPR_U32(ctx, 31, 0x1C0CB8u);
    ctx->pc = 0x1C0CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CB0u;
            // 0x1c0cb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CB8u; }
        if (ctx->pc != 0x1C0CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CB8u; }
        if (ctx->pc != 0x1C0CB8u) { return; }
    }
    ctx->pc = 0x1C0CB8u;
label_1c0cb8:
    // 0x1c0cb8: 0xc050bf4  jal         func_142FD0
label_1c0cbc:
    if (ctx->pc == 0x1C0CBCu) {
        ctx->pc = 0x1C0CBCu;
            // 0x1c0cbc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1C0CC0u;
        goto label_1c0cc0;
    }
    ctx->pc = 0x1C0CB8u;
    SET_GPR_U32(ctx, 31, 0x1C0CC0u);
    ctx->pc = 0x1C0CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CB8u;
            // 0x1c0cbc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CC0u; }
        if (ctx->pc != 0x1C0CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CC0u; }
        if (ctx->pc != 0x1C0CC0u) { return; }
    }
    ctx->pc = 0x1C0CC0u;
label_1c0cc0:
    // 0x1c0cc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c0cc4:
    if (ctx->pc == 0x1C0CC4u) {
        ctx->pc = 0x1C0CC8u;
        goto label_1c0cc8;
    }
    ctx->pc = 0x1C0CC0u;
    {
        const bool branch_taken_0x1c0cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cc0) {
            ctx->pc = 0x1C0CD8u;
            goto label_1c0cd8;
        }
    }
    ctx->pc = 0x1C0CC8u;
label_1c0cc8:
    // 0x1c0cc8: 0xc050bf4  jal         func_142FD0
label_1c0ccc:
    if (ctx->pc == 0x1C0CCCu) {
        ctx->pc = 0x1C0CCCu;
            // 0x1c0ccc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C0CD0u;
        goto label_1c0cd0;
    }
    ctx->pc = 0x1C0CC8u;
    SET_GPR_U32(ctx, 31, 0x1C0CD0u);
    ctx->pc = 0x1C0CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CC8u;
            // 0x1c0ccc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CD0u; }
        if (ctx->pc != 0x1C0CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CD0u; }
        if (ctx->pc != 0x1C0CD0u) { return; }
    }
    ctx->pc = 0x1C0CD0u;
label_1c0cd0:
    // 0x1c0cd0: 0xc050bf4  jal         func_142FD0
label_1c0cd4:
    if (ctx->pc == 0x1C0CD4u) {
        ctx->pc = 0x1C0CD4u;
            // 0x1c0cd4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1C0CD8u;
        goto label_1c0cd8;
    }
    ctx->pc = 0x1C0CD0u;
    SET_GPR_U32(ctx, 31, 0x1C0CD8u);
    ctx->pc = 0x1C0CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CD0u;
            // 0x1c0cd4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CD8u; }
        if (ctx->pc != 0x1C0CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CD8u; }
        if (ctx->pc != 0x1C0CD8u) { return; }
    }
    ctx->pc = 0x1C0CD8u;
label_1c0cd8:
    // 0x1c0cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0cdc:
    // 0x1c0cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0ce0:
    // 0x1c0ce0: 0x3e00008  jr          $ra
label_1c0ce4:
    if (ctx->pc == 0x1C0CE4u) {
        ctx->pc = 0x1C0CE4u;
            // 0x1c0ce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1C0CE8u;
        goto label_fallthrough_0x1c0ce0;
    }
    ctx->pc = 0x1C0CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CE0u;
            // 0x1c0ce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c0ce0:
    ctx->pc = 0x1C0CE8u;
}
