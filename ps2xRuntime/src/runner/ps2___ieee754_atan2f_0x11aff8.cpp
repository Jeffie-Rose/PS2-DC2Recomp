#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_atan2f
// Address: 0x11aff8 - 0x11b2e0
void ps2___ieee754_atan2f_0x11aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_atan2f_0x11aff8");
#endif

    switch (ctx->pc) {
        case 0x11b05cu: goto label_11b05c;
        case 0x11b0a8u: goto label_11b0a8;
        case 0x11b230u: goto label_11b230;
        case 0x11b238u: goto label_11b238;
        default: break;
    }

    ctx->pc = 0x11aff8u;

    // 0x11aff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11aff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11affc: 0x44086800  mfc1        $t0, $f13
    ctx->pc = 0x11affcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x11b000: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11b000u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11b004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b008: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x11b008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b00c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11b010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b014: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x11b014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11b018: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11b018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11b01c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b020: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x11b020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11b024: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x11b024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x11b028: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x11b028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11b02c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B02Cu;
    {
        const bool branch_taken_0x11b02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B02Cu;
            // 0x11b030: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b02c) {
            ctx->pc = 0x11B040u;
            goto label_11b040;
        }
    }
    ctx->pc = 0x11B034u;
    // 0x11b034: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11b034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11b038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B038u;
    {
        const bool branch_taken_0x11b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B038u;
            // 0x11b03c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b038) {
            ctx->pc = 0x11B04Cu;
            goto label_11b04c;
        }
    }
    ctx->pc = 0x11B040u;
label_11b040:
    // 0x11b040: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x11b040u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b044: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x11B044u;
    {
        const bool branch_taken_0x11b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B044u;
            // 0x11b048: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b044) {
            ctx->pc = 0x11B2D0u;
            goto label_11b2d0;
        }
    }
    ctx->pc = 0x11B04Cu;
label_11b04c:
    // 0x11b04c: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B04Cu;
    {
        const bool branch_taken_0x11b04c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B04Cu;
            // 0x11b050: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b04c) {
            ctx->pc = 0x11B064u;
            goto label_11b064;
        }
    }
    ctx->pc = 0x11B054u;
    // 0x11b054: 0xc0478ae  jal         func_11E2B8
    ctx->pc = 0x11B054u;
    SET_GPR_U32(ctx, 31, 0x11B05Cu);
    ctx->pc = 0x11B058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B054u;
            // 0x11b058: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E2B8u;
    if (runtime->hasFunction(0x11E2B8u)) {
        auto targetFn = runtime->lookupFunction(0x11E2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B05Cu; }
        if (ctx->pc != 0x11B05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x11e2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B05Cu; }
        if (ctx->pc != 0x11B05Cu) { return; }
    }
    ctx->pc = 0x11B05Cu;
label_11b05c:
    // 0x11b05c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x11B05Cu;
    {
        const bool branch_taken_0x11b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B05Cu;
            // 0x11b060: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b05c) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B064u;
label_11b064:
    // 0x11b064: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x11b064u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x11b068: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11b068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11b06c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B06Cu;
    {
        const bool branch_taken_0x11b06c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B06Cu;
            // 0x11b070: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b06c) {
            ctx->pc = 0x11B0A0u;
            goto label_11b0a0;
        }
    }
    ctx->pc = 0x11B074u;
    // 0x11b074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b078: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x11B078u;
    {
        const bool branch_taken_0x11b078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B078u;
            // 0x11b07c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b078) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B080u;
    // 0x11b080: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B080u;
    {
        const bool branch_taken_0x11b080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B080u;
            // 0x11b084: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b080) {
            ctx->pc = 0x11B098u;
            goto label_11b098;
        }
    }
    ctx->pc = 0x11B088u;
    // 0x11b088: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x11B088u;
    {
        const bool branch_taken_0x11b088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b088) {
            ctx->pc = 0x11B1CCu;
            goto label_11b1cc;
        }
    }
    ctx->pc = 0x11B090u;
    // 0x11b090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B090u;
    {
        const bool branch_taken_0x11b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b090) {
            ctx->pc = 0x11B0A0u;
            goto label_11b0a0;
        }
    }
    ctx->pc = 0x11B098u;
label_11b098:
    // 0x11b098: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x11B098u;
    {
        const bool branch_taken_0x11b098 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B098u;
            // 0x11b09c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b098) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B0A0u;
label_11b0a0:
    // 0x11b0a0: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x11B0A0u;
    {
        const bool branch_taken_0x11b0a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0A0u;
            // 0x11b0a4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0a0) {
            ctx->pc = 0x11B0D0u;
            goto label_11b0d0;
        }
    }
    ctx->pc = 0x11B0A8u;
label_11b0a8:
    // 0x11b0a8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11b0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11b0ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11b0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11b0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b0b4: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x11B0B4u;
    {
        const bool branch_taken_0x11b0b4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0B4u;
            // 0x11b0b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0b4) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B0BCu;
    // 0x11b0bc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x11b0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x11b0c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11b0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11b0c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b0c8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x11B0C8u;
    {
        const bool branch_taken_0x11b0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0C8u;
            // 0x11b0cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0c8) {
            ctx->pc = 0x11B2D8u;
            goto label_11b2d8;
        }
    }
    ctx->pc = 0x11B0D0u;
label_11b0d0:
    // 0x11b0d0: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11B0D0u;
    {
        const bool branch_taken_0x11b0d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0D0u;
            // 0x11b0d4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0d0) {
            ctx->pc = 0x11B1E0u;
            goto label_11b1e0;
        }
    }
    ctx->pc = 0x11B0D8u;
    // 0x11b0d8: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11B0D8u;
    {
        const bool branch_taken_0x11b0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x11B0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0D8u;
            // 0x11b0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0d8) {
            ctx->pc = 0x11B168u;
            goto label_11b168;
        }
    }
    ctx->pc = 0x11B0E0u;
    // 0x11b0e0: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B0E0u;
    {
        const bool branch_taken_0x11b0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0E0u;
            // 0x11b0e4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e0) {
            ctx->pc = 0x11B12Cu;
            goto label_11b12c;
        }
    }
    ctx->pc = 0x11B0E8u;
    // 0x11b0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B0E8u;
    {
        const bool branch_taken_0x11b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0E8u;
            // 0x11b0ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e8) {
            ctx->pc = 0x11B100u;
            goto label_11b100;
        }
    }
    ctx->pc = 0x11B0F0u;
    // 0x11b0f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B0F0u;
    {
        const bool branch_taken_0x11b0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0F0u;
            // 0x11b0f4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0f0) {
            ctx->pc = 0x11B118u;
            goto label_11b118;
        }
    }
    ctx->pc = 0x11B0F8u;
    // 0x11b0f8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11B0F8u;
    {
        const bool branch_taken_0x11b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b0f8) {
            ctx->pc = 0x11B1E0u;
            goto label_11b1e0;
        }
    }
    ctx->pc = 0x11B100u;
label_11b100:
    // 0x11b100: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11B100u;
    {
        const bool branch_taken_0x11b100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B100u;
            // 0x11b104: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b100) {
            ctx->pc = 0x11B140u;
            goto label_11b140;
        }
    }
    ctx->pc = 0x11B108u;
    // 0x11b108: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B108u;
    {
        const bool branch_taken_0x11b108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B108u;
            // 0x11b10c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b108) {
            ctx->pc = 0x11B154u;
            goto label_11b154;
        }
    }
    ctx->pc = 0x11B110u;
    // 0x11b110: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11B110u;
    {
        const bool branch_taken_0x11b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b110) {
            ctx->pc = 0x11B1E0u;
            goto label_11b1e0;
        }
    }
    ctx->pc = 0x11B118u;
label_11b118:
    // 0x11b118: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x11b11c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11b11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11b120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b124: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11B124u;
    {
        const bool branch_taken_0x11b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B124u;
            // 0x11b128: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b124) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B12Cu;
label_11b12c:
    // 0x11b12c: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x11b130: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11b130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11b134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b138: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x11B138u;
    {
        const bool branch_taken_0x11b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B138u;
            // 0x11b13c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b138) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B140u;
label_11b140:
    // 0x11b140: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x11b140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x11b144: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x11b144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x11b148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b14c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11B14Cu;
    {
        const bool branch_taken_0x11b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B14Cu;
            // 0x11b150: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b14c) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B154u;
label_11b154:
    // 0x11b154: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x11b158: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x11b158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x11b15c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b160: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x11B160u;
    {
        const bool branch_taken_0x11b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B160u;
            // 0x11b164: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b160) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B168u;
label_11b168:
    // 0x11b168: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B168u;
    {
        const bool branch_taken_0x11b168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B168u;
            // 0x11b16c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b168) {
            ctx->pc = 0x11B1ACu;
            goto label_11b1ac;
        }
    }
    ctx->pc = 0x11B170u;
    // 0x11b170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B170u;
    {
        const bool branch_taken_0x11b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B170u;
            // 0x11b174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b170) {
            ctx->pc = 0x11B188u;
            goto label_11b188;
        }
    }
    ctx->pc = 0x11B178u;
    // 0x11b178: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B178u;
    {
        const bool branch_taken_0x11b178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B178u;
            // 0x11b17c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b178) {
            ctx->pc = 0x11B1A0u;
            goto label_11b1a0;
        }
    }
    ctx->pc = 0x11B180u;
    // 0x11b180: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11B180u;
    {
        const bool branch_taken_0x11b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b180) {
            ctx->pc = 0x11B1E0u;
            goto label_11b1e0;
        }
    }
    ctx->pc = 0x11B188u;
label_11b188:
    // 0x11b188: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B188u;
    {
        const bool branch_taken_0x11b188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B188u;
            // 0x11b18c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b188) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B190u;
    // 0x11b190: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B190u;
    {
        const bool branch_taken_0x11b190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B190u;
            // 0x11b194: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b190) {
            ctx->pc = 0x11B1CCu;
            goto label_11b1cc;
        }
    }
    ctx->pc = 0x11B198u;
    // 0x11b198: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11B198u;
    {
        const bool branch_taken_0x11b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b198) {
            ctx->pc = 0x11B1E0u;
            goto label_11b1e0;
        }
    }
    ctx->pc = 0x11B1A0u;
label_11b1a0:
    // 0x11b1a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b1a4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x11B1A4u;
    {
        const bool branch_taken_0x11b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1A4u;
            // 0x11b1a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1a4) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B1ACu;
label_11b1ac:
    // 0x11b1ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b1b0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11B1B0u;
    {
        const bool branch_taken_0x11b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1B0u;
            // 0x11b1b4: 0xc44012c0  lwc1        $f0, 0x12C0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1b0) {
            ctx->pc = 0x11B2D0u;
            goto label_11b2d0;
        }
    }
    ctx->pc = 0x11B1B8u;
label_11b1b8:
    // 0x11b1b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11b1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11b1bc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11b1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11b1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b1c4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x11B1C4u;
    {
        const bool branch_taken_0x11b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1C4u;
            // 0x11b1c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1c4) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B1CCu;
label_11b1cc:
    // 0x11b1cc: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x11b1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x11b1d0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11b1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11b1d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b1d8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11B1D8u;
    {
        const bool branch_taken_0x11b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1D8u;
            // 0x11b1dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1d8) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B1E0u;
label_11b1e0:
    // 0x11b1e0: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x11B1E0u;
    {
        const bool branch_taken_0x11b1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1E0u;
            // 0x11b1e4: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1e0) {
            ctx->pc = 0x11B0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b0a8;
        }
    }
    ctx->pc = 0x11B1E8u;
    // 0x11b1e8: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x11b1e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x11b1ec: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x11b1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x11b1f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B1F0u;
    {
        const bool branch_taken_0x11b1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b1f0) {
            ctx->pc = 0x11B208u;
            goto label_11b208;
        }
    }
    ctx->pc = 0x11B1F8u;
    // 0x11b1f8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x11b1fc: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x11b1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x11b200: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11B200u;
    {
        const bool branch_taken_0x11b200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B200u;
            // 0x11b204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b200) {
            ctx->pc = 0x11B240u;
            goto label_11b240;
        }
    }
    ctx->pc = 0x11B208u;
label_11b208:
    // 0x11b208: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B208u;
    {
        const bool branch_taken_0x11b208 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x11B20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B208u;
            // 0x11b20c: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b208) {
            ctx->pc = 0x11B218u;
            goto label_11b218;
        }
    }
    ctx->pc = 0x11B210u;
    // 0x11b210: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B210u;
    {
        const bool branch_taken_0x11b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B210u;
            // 0x11b214: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b210) {
            ctx->pc = 0x11B23Cu;
            goto label_11b23c;
        }
    }
    ctx->pc = 0x11B218u;
label_11b218:
    // 0x11b218: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x11b218u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11b21c: 0x0  nop
    ctx->pc = 0x11b21cu;
    // NOP
    // 0x11b220: 0x0  nop
    ctx->pc = 0x11b220u;
    // NOP
    // 0x11b224: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x11b224u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x11b228: 0xc04799e  jal         func_11E678
    ctx->pc = 0x11B228u;
    SET_GPR_U32(ctx, 31, 0x11B230u);
    ctx->pc = 0x11E678u;
    if (runtime->hasFunction(0x11E678u)) {
        auto targetFn = runtime->lookupFunction(0x11E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B230u; }
        if (ctx->pc != 0x11B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabsf_0x11e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B230u; }
        if (ctx->pc != 0x11B230u) { return; }
    }
    ctx->pc = 0x11B230u;
label_11b230:
    // 0x11b230: 0xc0478ae  jal         func_11E2B8
    ctx->pc = 0x11B230u;
    SET_GPR_U32(ctx, 31, 0x11B238u);
    ctx->pc = 0x11B234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B230u;
            // 0x11b234: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E2B8u;
    if (runtime->hasFunction(0x11E2B8u)) {
        auto targetFn = runtime->lookupFunction(0x11E2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B238u; }
        if (ctx->pc != 0x11B238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x11e2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B238u; }
        if (ctx->pc != 0x11B238u) { return; }
    }
    ctx->pc = 0x11B238u;
label_11b238:
    // 0x11b238: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11b238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11b23c:
    // 0x11b23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b240:
    // 0x11b240: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B240u;
    {
        const bool branch_taken_0x11b240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B240u;
            // 0x11b244: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b240) {
            ctx->pc = 0x11B270u;
            goto label_11b270;
        }
    }
    ctx->pc = 0x11B248u;
    // 0x11b248: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B248u;
    {
        const bool branch_taken_0x11b248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b248) {
            ctx->pc = 0x11B24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B248u;
            // 0x11b24c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B250u;
    // 0x11b250: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B250u;
    {
        const bool branch_taken_0x11b250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b250) {
            ctx->pc = 0x11B278u;
            goto label_11b278;
        }
    }
    ctx->pc = 0x11B258u;
    // 0x11b258: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11B258u;
    {
        const bool branch_taken_0x11b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b258) {
            ctx->pc = 0x11B2ACu;
            goto label_11b2ac;
        }
    }
    ctx->pc = 0x11B260u;
label_11b260:
    // 0x11b260: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B260u;
    {
        const bool branch_taken_0x11b260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b260) {
            ctx->pc = 0x11B284u;
            goto label_11b284;
        }
    }
    ctx->pc = 0x11B268u;
    // 0x11b268: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11B268u;
    {
        const bool branch_taken_0x11b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b268) {
            ctx->pc = 0x11B2ACu;
            goto label_11b2ac;
        }
    }
    ctx->pc = 0x11B270u;
label_11b270:
    // 0x11b270: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11b274: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x11b274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_11b278:
    // 0x11b278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11b278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b27c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11B27Cu;
    {
        const bool branch_taken_0x11b27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B27Cu;
            // 0x11b280: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b27c) {
            ctx->pc = 0x11B2D4u;
            goto label_11b2d4;
        }
    }
    ctx->pc = 0x11B284u;
label_11b284:
    // 0x11b284: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x11b284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x11b288: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11b288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11b28c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b290: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x11b290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11b294: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11b298: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11b298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11b29c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11b29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b2a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11b2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11b2a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B2A4u;
    {
        const bool branch_taken_0x11b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2A4u;
            // 0x11b2a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2a4) {
            ctx->pc = 0x11B2D0u;
            goto label_11b2d0;
        }
    }
    ctx->pc = 0x11B2ACu;
label_11b2ac:
    // 0x11b2ac: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x11b2b0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11b2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11b2b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b2b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x11b2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11b2bc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11b2c0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11b2c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11b2c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11b2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b2c8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11b2c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11b2cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b2ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11b2d0:
    // 0x11b2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b2d4:
    // 0x11b2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b2d8:
    // 0x11b2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2D8u;
            // 0x11b2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B2E0u;
}
