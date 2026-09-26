#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachFormInfo__12CMenuGeoramaFv
// Address: 0x1f9af0 - 0x1f9cac
void AttachFormInfo__12CMenuGeoramaFv_0x1f9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachFormInfo__12CMenuGeoramaFv_0x1f9af0");
#endif

    switch (ctx->pc) {
        case 0x1f9b18u: goto label_1f9b18;
        case 0x1f9b48u: goto label_1f9b48;
        case 0x1f9b70u: goto label_1f9b70;
        case 0x1f9b8cu: goto label_1f9b8c;
        case 0x1f9b9cu: goto label_1f9b9c;
        case 0x1f9bb8u: goto label_1f9bb8;
        case 0x1f9bd4u: goto label_1f9bd4;
        case 0x1f9be8u: goto label_1f9be8;
        case 0x1f9bfcu: goto label_1f9bfc;
        case 0x1f9c08u: goto label_1f9c08;
        case 0x1f9c38u: goto label_1f9c38;
        case 0x1f9c54u: goto label_1f9c54;
        case 0x1f9c70u: goto label_1f9c70;
        case 0x1f9c94u: goto label_1f9c94;
        default: break;
    }

    ctx->pc = 0x1f9af0u;

    // 0x1f9af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f9af4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9af8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f9af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f9afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f9b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b0c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9b10: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9B10u;
    SET_GPR_U32(ctx, 31, 0x1F9B18u);
    ctx->pc = 0x1F9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B10u;
            // 0x1f9b14: 0x24a58b40  addiu       $a1, $a1, -0x74C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B18u; }
        if (ctx->pc != 0x1F9B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B18u; }
        if (ctx->pc != 0x1F9B18u) { return; }
    }
    ctx->pc = 0x1F9B18u;
label_1f9b18:
    // 0x1f9b18: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9b1c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9b20: 0x3463b834  ori         $v1, $v1, 0xB834
    ctx->pc = 0x1f9b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47156);
    // 0x1f9b24: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9b24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9b28: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f9b2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f9b30: 0x8c22b834  lw          $v0, -0x47CC($at)
    ctx->pc = 0x1f9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
    // 0x1f9b34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F9B34u;
    {
        const bool branch_taken_0x1f9b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b34) {
            ctx->pc = 0x1F9B8Cu;
            goto label_1f9b8c;
        }
    }
    ctx->pc = 0x1F9B3Cu;
    // 0x1f9b3c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1f9b40: 0xc07e06c  jal         func_1F81B0
    ctx->pc = 0x1F9B40u;
    SET_GPR_U32(ctx, 31, 0x1F9B48u);
    ctx->pc = 0x1F9B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B40u;
            // 0x1f9b44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F81B0u;
    if (runtime->hasFunction(0x1F81B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F81B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B48u; }
        if (ctx->pc != 0x1F9B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGekkaViewMode__Fi_0x1f81b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B48u; }
        if (ctx->pc != 0x1F9B48u) { return; }
    }
    ctx->pc = 0x1F9B48u;
label_1f9b48:
    // 0x1f9b48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9B48u;
    {
        const bool branch_taken_0x1f9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B48u;
            // 0x1f9b4c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b48) {
            ctx->pc = 0x1F9B74u;
            goto label_1f9b74;
        }
    }
    ctx->pc = 0x1F9B50u;
    // 0x1f9b50: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9b54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9b58: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9b58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9b5c: 0x24a58b50  addiu       $a1, $a1, -0x74B0
    ctx->pc = 0x1f9b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937424));
    // 0x1f9b60: 0x8c24b834  lw          $a0, -0x47CC($at)
    ctx->pc = 0x1f9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
    // 0x1f9b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b68: 0xc08968c  jal         func_225A30
    ctx->pc = 0x1F9B68u;
    SET_GPR_U32(ctx, 31, 0x1F9B70u);
    ctx->pc = 0x1F9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B68u;
            // 0x1f9b6c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B70u; }
        if (ctx->pc != 0x1F9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B70u; }
        if (ctx->pc != 0x1F9B70u) { return; }
    }
    ctx->pc = 0x1F9B70u;
label_1f9b70:
    // 0x1f9b70: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1f9b74:
    // 0x1f9b74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9b78: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9b78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9b7c: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x1f9b7cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f9b80: 0x8c24b834  lw          $a0, -0x47CC($at)
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
    // 0x1f9b84: 0xc08968c  jal         func_225A30
    ctx->pc = 0x1F9B84u;
    SET_GPR_U32(ctx, 31, 0x1F9B8Cu);
    ctx->pc = 0x1F9B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B84u;
            // 0x1f9b88: 0x24a58b58  addiu       $a1, $a1, -0x74A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B8Cu; }
        if (ctx->pc != 0x1F9B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B8Cu; }
        if (ctx->pc != 0x1F9B8Cu) { return; }
    }
    ctx->pc = 0x1F9B8Cu;
label_1f9b8c:
    // 0x1f9b8c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9b90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9b94: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9B94u;
    SET_GPR_U32(ctx, 31, 0x1F9B9Cu);
    ctx->pc = 0x1F9B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9B94u;
            // 0x1f9b98: 0x24a58b60  addiu       $a1, $a1, -0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B9Cu; }
        if (ctx->pc != 0x1F9B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B9Cu; }
        if (ctx->pc != 0x1F9B9Cu) { return; }
    }
    ctx->pc = 0x1F9B9Cu;
label_1f9b9c:
    // 0x1f9b9c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9ba0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9ba4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9ba8: 0xac22b82c  sw          $v0, -0x47D4($at)
    ctx->pc = 0x1f9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948908), GPR_U32(ctx, 2));
    // 0x1f9bac: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9bb0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9BB0u;
    SET_GPR_U32(ctx, 31, 0x1F9BB8u);
    ctx->pc = 0x1F9BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BB0u;
            // 0x1f9bb4: 0x24a58b68  addiu       $a1, $a1, -0x7498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BB8u; }
        if (ctx->pc != 0x1F9BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BB8u; }
        if (ctx->pc != 0x1F9BB8u) { return; }
    }
    ctx->pc = 0x1F9BB8u;
label_1f9bb8:
    // 0x1f9bb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9bbc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9bc0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9bc4: 0xac22b838  sw          $v0, -0x47C8($at)
    ctx->pc = 0x1f9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948920), GPR_U32(ctx, 2));
    // 0x1f9bc8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9bcc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9BCCu;
    SET_GPR_U32(ctx, 31, 0x1F9BD4u);
    ctx->pc = 0x1F9BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BCCu;
            // 0x1f9bd0: 0x24a58b70  addiu       $a1, $a1, -0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BD4u; }
        if (ctx->pc != 0x1F9BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BD4u; }
        if (ctx->pc != 0x1F9BD4u) { return; }
    }
    ctx->pc = 0x1F9BD4u;
label_1f9bd4:
    // 0x1f9bd4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9bd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f9bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9bdc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9be0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f9be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9be4: 0xac22b830  sw          $v0, -0x47D0($at)
    ctx->pc = 0x1f9be4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948912), GPR_U32(ctx, 2));
label_1f9be8:
    // 0x1f9be8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9bec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f9bf0: 0x24a58b80  addiu       $a1, $a1, -0x7480
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937472));
    // 0x1f9bf4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1F9BF4u;
    SET_GPR_U32(ctx, 31, 0x1F9BFCu);
    ctx->pc = 0x1F9BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BF4u;
            // 0x1f9bf8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BFCu; }
        if (ctx->pc != 0x1F9BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BFCu; }
        if (ctx->pc != 0x1F9BFCu) { return; }
    }
    ctx->pc = 0x1F9BFCu;
label_1f9bfc:
    // 0x1f9bfc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9c00: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9C00u;
    SET_GPR_U32(ctx, 31, 0x1F9C08u);
    ctx->pc = 0x1F9C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C00u;
            // 0x1f9c04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C08u; }
        if (ctx->pc != 0x1F9C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C08u; }
        if (ctx->pc != 0x1F9C08u) { return; }
    }
    ctx->pc = 0x1F9C08u;
label_1f9c08:
    // 0x1f9c08: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1f9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f9c0c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9c10: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f9c14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9c18: 0xac22b8cc  sw          $v0, -0x4734($at)
    ctx->pc = 0x1f9c18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949068), GPR_U32(ctx, 2));
    // 0x1f9c1c: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1f9c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f9c20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F9C20u;
    {
        const bool branch_taken_0x1f9c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C20u;
            // 0x1f9c24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c20) {
            ctx->pc = 0x1F9BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9be8;
        }
    }
    ctx->pc = 0x1F9C28u;
    // 0x1f9c28: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9c2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9c30: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9C30u;
    SET_GPR_U32(ctx, 31, 0x1F9C38u);
    ctx->pc = 0x1F9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C30u;
            // 0x1f9c34: 0x24a58b90  addiu       $a1, $a1, -0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C38u; }
        if (ctx->pc != 0x1F9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C38u; }
        if (ctx->pc != 0x1F9C38u) { return; }
    }
    ctx->pc = 0x1F9C38u;
label_1f9c38:
    // 0x1f9c38: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9c3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9c40: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9c44: 0xac22b8e8  sw          $v0, -0x4718($at)
    ctx->pc = 0x1f9c44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949096), GPR_U32(ctx, 2));
    // 0x1f9c48: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9c4c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F9C54u);
    ctx->pc = 0x1F9C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C4Cu;
            // 0x1f9c50: 0x24a58ba0  addiu       $a1, $a1, -0x7460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C54u; }
        if (ctx->pc != 0x1F9C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C54u; }
        if (ctx->pc != 0x1F9C54u) { return; }
    }
    ctx->pc = 0x1F9C54u;
label_1f9c54:
    // 0x1f9c54: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9c58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f9c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f9c5c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9c60: 0xac22b8ec  sw          $v0, -0x4714($at)
    ctx->pc = 0x1f9c60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949100), GPR_U32(ctx, 2));
    // 0x1f9c64: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f9c68: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F9C68u;
    SET_GPR_U32(ctx, 31, 0x1F9C70u);
    ctx->pc = 0x1F9C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C68u;
            // 0x1f9c6c: 0x24a58bb0  addiu       $a1, $a1, -0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C70u; }
        if (ctx->pc != 0x1F9C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C70u; }
        if (ctx->pc != 0x1F9C70u) { return; }
    }
    ctx->pc = 0x1F9C70u;
label_1f9c70:
    // 0x1f9c70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9c74: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9c78: 0x3463b8f0  ori         $v1, $v1, 0xB8F0
    ctx->pc = 0x1f9c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47344);
    // 0x1f9c7c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f9c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f9c80: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f9c84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f9c88: 0x8c22b8f0  lw          $v0, -0x4710($at)
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949104)));
    // 0x1f9c8c: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x1F9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9C94u);
    ctx->pc = 0x1F9C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C8Cu;
            // 0x1f9c90: 0xaf828f64  sw          $v0, -0x709C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C94u; }
        if (ctx->pc != 0x1F9C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C94u; }
        if (ctx->pc != 0x1F9C94u) { return; }
    }
    ctx->pc = 0x1F9C94u;
label_1f9c94:
    // 0x1f9c94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f9c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9c98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f9c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CA4u;
            // 0x1f9ca8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9CACu;
}
