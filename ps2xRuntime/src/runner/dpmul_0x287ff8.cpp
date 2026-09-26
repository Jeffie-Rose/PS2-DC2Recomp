#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dpmul
// Address: 0x287ff8 - 0x2882a0
void dpmul_0x287ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x287ff8");
#endif

    switch (ctx->pc) {
        case 0x288034u: goto label_288034;
        case 0x288044u: goto label_288044;
        case 0x288110u: goto label_288110;
        case 0x288120u: goto label_288120;
        case 0x288130u: goto label_288130;
        case 0x288140u: goto label_288140;
        case 0x2881b8u: goto label_2881b8;
        case 0x288210u: goto label_288210;
        case 0x288274u: goto label_288274;
        default: break;
    }

    ctx->pc = 0x287ff8u;

    // 0x287ff8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x287ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x287ffc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x287ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x288000: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x288000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x288004: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x288004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x288008: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x288008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x28800c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28800cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288010: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x288010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x288014: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x288014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x288018: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x288018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x28801c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x28801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x288020: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x288020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x288024: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x288024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x288028: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x288028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x28802c: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x28802Cu;
    SET_GPR_U32(ctx, 31, 0x288034u);
    ctx->pc = 0x288030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28802Cu;
            // 0x288030: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288034u; }
        if (ctx->pc != 0x288034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288034u; }
        if (ctx->pc != 0x288034u) { return; }
    }
    ctx->pc = 0x288034u;
label_288034:
    // 0x288034: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x288034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288038: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x288038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28803c: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x28803Cu;
    SET_GPR_U32(ctx, 31, 0x288044u);
    ctx->pc = 0x288040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28803Cu;
            // 0x288040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288044u; }
        if (ctx->pc != 0x288044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288044u; }
        if (ctx->pc != 0x288044u) { return; }
    }
    ctx->pc = 0x288044u;
label_288044:
    // 0x288044: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x288044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288048: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x288048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28804c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28804Cu;
    {
        const bool branch_taken_0x28804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28804Cu;
            // 0x288050: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28804c) {
            ctx->pc = 0x2880A8u;
            goto label_2880a8;
        }
    }
    ctx->pc = 0x288054u;
    // 0x288054: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x288054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288058: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x288058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28805c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x28805Cu;
    {
        const bool branch_taken_0x28805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28805c) {
            ctx->pc = 0x288060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28805Cu;
            // 0x288060: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2880D0u;
            goto label_2880d0;
        }
    }
    ctx->pc = 0x288064u;
    // 0x288064: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x288064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x288068: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288068u;
    {
        const bool branch_taken_0x288068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288068u;
            // 0x28806c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288068) {
            ctx->pc = 0x288084u;
            goto label_288084;
        }
    }
    ctx->pc = 0x288070u;
    // 0x288070: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x288070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x288074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288074u;
    {
        const bool branch_taken_0x288074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288074u;
            // 0x288078: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288074) {
            ctx->pc = 0x288094u;
            goto label_288094;
        }
    }
    ctx->pc = 0x28807Cu;
    // 0x28807c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28807Cu;
    {
        const bool branch_taken_0x28807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28807Cu;
            // 0x288080: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28807c) {
            ctx->pc = 0x2880B0u;
            goto label_2880b0;
        }
    }
    ctx->pc = 0x288084u;
label_288084:
    // 0x288084: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288084u;
    {
        const bool branch_taken_0x288084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288084u;
            // 0x288088: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288084) {
            ctx->pc = 0x2880A0u;
            goto label_2880a0;
        }
    }
    ctx->pc = 0x28808Cu;
    // 0x28808c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28808Cu;
    {
        const bool branch_taken_0x28808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28808Cu;
            // 0x288090: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28808c) {
            ctx->pc = 0x2880D0u;
            goto label_2880d0;
        }
    }
    ctx->pc = 0x288094u;
label_288094:
    // 0x288094: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x288094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x288098: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x288098u;
    {
        const bool branch_taken_0x288098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288098u;
            // 0x28809c: 0x24445200  addiu       $a0, $v0, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288098) {
            ctx->pc = 0x28826Cu;
            goto label_28826c;
        }
    }
    ctx->pc = 0x2880A0u;
label_2880a0:
    // 0x2880a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2880A0u;
    {
        const bool branch_taken_0x2880a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2880A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880A0u;
            // 0x2880a4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880a0) {
            ctx->pc = 0x2880C4u;
            goto label_2880c4;
        }
    }
    ctx->pc = 0x2880A8u;
label_2880a8:
    // 0x2880a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2880a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2880ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2880acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2880b0:
    // 0x2880b0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2880b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2880b4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2880b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2880b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2880b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2880bc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2880BCu;
    {
        const bool branch_taken_0x2880bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880BCu;
            // 0x2880c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880bc) {
            ctx->pc = 0x28826Cu;
            goto label_28826c;
        }
    }
    ctx->pc = 0x2880C4u;
label_2880c4:
    // 0x2880c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2880C4u;
    {
        const bool branch_taken_0x2880c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2880C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880C4u;
            // 0x2880c8: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880c4) {
            ctx->pc = 0x2880E8u;
            goto label_2880e8;
        }
    }
    ctx->pc = 0x2880CCu;
    // 0x2880cc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2880ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2880d0:
    // 0x2880d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2880d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2880d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2880d8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2880d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2880dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2880dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2880e0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2880E0u;
    {
        const bool branch_taken_0x2880e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880E0u;
            // 0x2880e4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880e0) {
            ctx->pc = 0x28826Cu;
            goto label_28826c;
        }
    }
    ctx->pc = 0x2880E8u;
label_2880e8:
    // 0x2880e8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2880e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2880ec: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x2880ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2880f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2880f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2880f4: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x2880f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x2880f8: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x2880f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x2880fc: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2880fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x288100: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x288100u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x288104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288108: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x288108u;
    SET_GPR_U32(ctx, 31, 0x288110u);
    ctx->pc = 0x28810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288108u;
            // 0x28810c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288110u; }
        if (ctx->pc != 0x288110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288110u; }
        if (ctx->pc != 0x288110u) { return; }
    }
    ctx->pc = 0x288110u;
label_288110:
    // 0x288110: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288118: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x288118u;
    SET_GPR_U32(ctx, 31, 0x288120u);
    ctx->pc = 0x28811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288118u;
            // 0x28811c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288120u; }
        if (ctx->pc != 0x288120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288120u; }
        if (ctx->pc != 0x288120u) { return; }
    }
    ctx->pc = 0x288120u;
label_288120:
    // 0x288120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288124: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x288124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288128: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x288128u;
    SET_GPR_U32(ctx, 31, 0x288130u);
    ctx->pc = 0x28812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288128u;
            // 0x28812c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288130u; }
        if (ctx->pc != 0x288130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288130u; }
        if (ctx->pc != 0x288130u) { return; }
    }
    ctx->pc = 0x288130u;
label_288130:
    // 0x288130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288138: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x288138u;
    SET_GPR_U32(ctx, 31, 0x288140u);
    ctx->pc = 0x28813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288138u;
            // 0x28813c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288140u; }
        if (ctx->pc != 0x288140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288140u; }
        if (ctx->pc != 0x288140u) { return; }
    }
    ctx->pc = 0x288140u;
label_288140:
    // 0x288140: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x288140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288144: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x288144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288148: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x288148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28814c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x28814cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x288150: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x288150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x288154: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288158: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x288158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28815c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x28815cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288160: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x288160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288164: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x288164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x288168: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x288168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x28816c: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x28816cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x288170: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x288170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288174: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x288174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x288178: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x288178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x28817c: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x28817cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x288180: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x288180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x288184: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x288184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288188: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x288188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28818c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288190: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x288190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x288194: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x288194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x288198: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x288198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28819c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28819Cu;
    {
        const bool branch_taken_0x28819c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28819Cu;
            // 0x2881a0: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28819c) {
            ctx->pc = 0x2881E4u;
            goto label_2881e4;
        }
    }
    ctx->pc = 0x2881A4u;
    // 0x2881a4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2881a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2881a8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2881a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2881ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2881b0: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x2881b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x2881b4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2881b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2881b8:
    // 0x2881b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2881b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2881bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2881bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2881c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2881C0u;
    {
        const bool branch_taken_0x2881c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881C0u;
            // 0x2881c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881c0) {
            ctx->pc = 0x2881D0u;
            goto label_2881d0;
        }
    }
    ctx->pc = 0x2881C8u;
    // 0x2881c8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2881c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x2881cc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2881ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2881d0:
    // 0x2881d0: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x2881d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x2881d4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2881d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2881d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2881D8u;
    {
        const bool branch_taken_0x2881d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2881DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881D8u;
            // 0x2881dc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881d8) {
            ctx->pc = 0x2881B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2881b8;
        }
    }
    ctx->pc = 0x2881E0u;
    // 0x2881e0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2881e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2881e4:
    // 0x2881e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2881e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2881e8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2881e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2881ec: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2881ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2881f0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2881F0u;
    {
        const bool branch_taken_0x2881f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2881F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881F0u;
            // 0x2881f4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f0) {
            ctx->pc = 0x288238u;
            goto label_288238;
        }
    }
    ctx->pc = 0x2881F8u;
    // 0x2881f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2881f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2881fc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2881fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288200: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x288200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x288204: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x288204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288208: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28820c: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x28820cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_288210:
    // 0x288210: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x288210u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x288214: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x288214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x288218: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x288218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x28821c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x288220: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x288220u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
    // 0x288224: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x288224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x288228: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288228u;
    {
        const bool branch_taken_0x288228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288228u;
            // 0x28822c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288228) {
            ctx->pc = 0x288210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288210;
        }
    }
    ctx->pc = 0x288230u;
    // 0x288230: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x288230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x288234: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x288234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_288238:
    // 0x288238: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x288238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28823c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28823Cu;
    {
        const bool branch_taken_0x28823c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28823c) {
            ctx->pc = 0x288240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28823Cu;
            // 0x288240: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288260u;
            goto label_288260;
        }
    }
    ctx->pc = 0x288244u;
    // 0x288244: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x288244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x288248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288248u;
    {
        const bool branch_taken_0x288248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288248u;
            // 0x28824c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288248) {
            ctx->pc = 0x288258u;
            goto label_288258;
        }
    }
    ctx->pc = 0x288250u;
    // 0x288250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288250u;
    {
        const bool branch_taken_0x288250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288250u;
            // 0x288254: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288250) {
            ctx->pc = 0x28825Cu;
            goto label_28825c;
        }
    }
    ctx->pc = 0x288258u;
label_288258:
    // 0x288258: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x288258u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
label_28825c:
    // 0x28825c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x28825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_288260:
    // 0x288260: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288264: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x288264u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x288268: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x288268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28826c:
    // 0x28826c: 0xc0a1eca  jal         func_287B28
    ctx->pc = 0x28826Cu;
    SET_GPR_U32(ctx, 31, 0x288274u);
    ctx->pc = 0x287B28u;
    if (runtime->hasFunction(0x287B28u)) {
        auto targetFn = runtime->lookupFunction(0x287B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288274u; }
        if (ctx->pc != 0x288274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x287b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288274u; }
        if (ctx->pc != 0x288274u) { return; }
    }
    ctx->pc = 0x288274u;
label_288274:
    // 0x288274: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x288274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x288278: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x288278u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28827c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x28827cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288280: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x288280u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288284: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x288284u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288288: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x288288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28828c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x28828cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288290: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x288290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288294: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288298: 0x3e00008  jr          $ra
    ctx->pc = 0x288298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28829Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288298u;
            // 0x28829c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2882A0u;
}
