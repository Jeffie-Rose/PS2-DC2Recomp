#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOnOffParts__8CEditMapFPcPP9CMapPartsPP9CMapPiecei
// Address: 0x2a9ab0 - 0x2a9c60
void GetOnOffParts__8CEditMapFPcPP9CMapPartsPP9CMapPiecei_0x2a9ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOnOffParts__8CEditMapFPcPP9CMapPartsPP9CMapPiecei_0x2a9ab0");
#endif

    switch (ctx->pc) {
        case 0x2a9b08u: goto label_2a9b08;
        case 0x2a9b30u: goto label_2a9b30;
        case 0x2a9b70u: goto label_2a9b70;
        case 0x2a9bb8u: goto label_2a9bb8;
        case 0x2a9bf8u: goto label_2a9bf8;
        default: break;
    }

    ctx->pc = 0x2a9ab0u;

    // 0x2a9ab0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a9ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2a9ab4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a9ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a9ab8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a9ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a9abc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a9ac0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2a9ac0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ac4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a9ac8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a9ac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9acc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9ad0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a9ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ad4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a9ad8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a9ad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9ae0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2a9ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9ae8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9AE8u;
    {
        const bool branch_taken_0x2a9ae8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AE8u;
            // 0x2a9aec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ae8) {
            ctx->pc = 0x2A9AF8u;
            goto label_2a9af8;
        }
    }
    ctx->pc = 0x2A9AF0u;
    // 0x2a9af0: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9AF0u;
    {
        const bool branch_taken_0x2a9af0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2A9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AF0u;
            // 0x2a9af4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9af0) {
            ctx->pc = 0x2A9B00u;
            goto label_2a9b00;
        }
    }
    ctx->pc = 0x2A9AF8u;
label_2a9af8:
    // 0x2a9af8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2A9AF8u;
    {
        const bool branch_taken_0x2a9af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AF8u;
            // 0x2a9afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9af8) {
            ctx->pc = 0x2A9C34u;
            goto label_2a9c34;
        }
    }
    ctx->pc = 0x2A9B00u;
label_2a9b00:
    // 0x2a9b00: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2A9B00u;
    {
        const bool branch_taken_0x2a9b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9b00) {
            ctx->pc = 0x2A9C1Cu;
            goto label_2a9c1c;
        }
    }
    ctx->pc = 0x2A9B08u;
label_2a9b08:
    // 0x2a9b08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9B08u;
    {
        const bool branch_taken_0x2a9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B08u;
            // 0x2a9b0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b08) {
            ctx->pc = 0x2A9B18u;
            goto label_2a9b18;
        }
    }
    ctx->pc = 0x2A9B10u;
    // 0x2a9b10: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2A9B10u;
    {
        const bool branch_taken_0x2a9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B10u;
            // 0x2a9b14: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b10) {
            ctx->pc = 0x2A9C38u;
            goto label_2a9c38;
        }
    }
    ctx->pc = 0x2A9B18u;
label_2a9b18:
    // 0x2a9b18: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2a9b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9b1c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2a9b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a9b20: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x2a9b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9b24: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2a9b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a9b28: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2a9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a9b2c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2a9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2a9b30:
    // 0x2a9b30: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x2a9b30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a9b34: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9B34u;
    {
        const bool branch_taken_0x2a9b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9b34) {
            ctx->pc = 0x2A9B5Cu;
            goto label_2a9b5c;
        }
    }
    ctx->pc = 0x2A9B3Cu;
    // 0x2a9b3c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9B3Cu;
    {
        const bool branch_taken_0x2a9b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9b3c) {
            ctx->pc = 0x2A9B5Cu;
            goto label_2a9b5c;
        }
    }
    ctx->pc = 0x2A9B44u;
    // 0x2a9b44: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9B44u;
    {
        const bool branch_taken_0x2a9b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9b44) {
            ctx->pc = 0x2A9B5Cu;
            goto label_2a9b5c;
        }
    }
    ctx->pc = 0x2A9B4Cu;
    // 0x2a9b4c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2a9b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9b50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a9b54: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2A9B54u;
    {
        const bool branch_taken_0x2a9b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B54u;
            // 0x2a9b58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b54) {
            ctx->pc = 0x2A9B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b30;
        }
    }
    ctx->pc = 0x2A9B5Cu;
label_2a9b5c:
    // 0x2a9b5c: 0x0  nop
    ctx->pc = 0x2a9b5cu;
    // NOP
    // 0x2a9b60: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2a9b60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9b64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a9b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b68: 0xc057508  jal         func_15D420
    ctx->pc = 0x2A9B68u;
    SET_GPR_U32(ctx, 31, 0x2A9B70u);
    ctx->pc = 0x2A9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B68u;
            // 0x2a9b6c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B70u; }
        if (ctx->pc != 0x2A9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B70u; }
        if (ctx->pc != 0x2A9B70u) { return; }
    }
    ctx->pc = 0x2A9B70u;
label_2a9b70:
    // 0x2a9b70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2a9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a9b74: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x2a9b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2a9b78: 0x2e39021  addu        $s2, $s7, $v1
    ctx->pc = 0x2a9b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2a9b7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a9b80: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2a9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2a9b84: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2a9b84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a9b88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9B88u;
    {
        const bool branch_taken_0x2a9b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B88u;
            // 0x2a9b8c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b88) {
            ctx->pc = 0x2A9B98u;
            goto label_2a9b98;
        }
    }
    ctx->pc = 0x2A9B90u;
    // 0x2a9b90: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2A9B90u;
    {
        const bool branch_taken_0x2a9b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B90u;
            // 0x2a9b94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b90) {
            ctx->pc = 0x2A9C2Cu;
            goto label_2a9c2c;
        }
    }
    ctx->pc = 0x2A9B98u;
label_2a9b98:
    // 0x2a9b98: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9B98u;
    {
        const bool branch_taken_0x2a9b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9b98) {
            ctx->pc = 0x2A9BACu;
            goto label_2a9bac;
        }
    }
    ctx->pc = 0x2A9BA0u;
    // 0x2a9ba0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a9ba4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A9BA4u;
    {
        const bool branch_taken_0x2a9ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BA4u;
            // 0x2a9ba8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ba4) {
            ctx->pc = 0x2A9C1Cu;
            goto label_2a9c1c;
        }
    }
    ctx->pc = 0x2A9BACu;
label_2a9bac:
    // 0x2a9bac: 0x0  nop
    ctx->pc = 0x2a9bacu;
    // NOP
    // 0x2a9bb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9bb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a9bb4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2a9bb8:
    // 0x2a9bb8: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2a9bb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a9bbc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9BBCu;
    {
        const bool branch_taken_0x2a9bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9bbc) {
            ctx->pc = 0x2A9BDCu;
            goto label_2a9bdc;
        }
    }
    ctx->pc = 0x2A9BC4u;
    // 0x2a9bc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9BC4u;
    {
        const bool branch_taken_0x2a9bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bc4) {
            ctx->pc = 0x2A9BDCu;
            goto label_2a9bdc;
        }
    }
    ctx->pc = 0x2A9BCCu;
    // 0x2a9bcc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2a9bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9bd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a9bd4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A9BD4u;
    {
        const bool branch_taken_0x2a9bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BD4u;
            // 0x2a9bd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bd4) {
            ctx->pc = 0x2A9BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9bb8;
        }
    }
    ctx->pc = 0x2A9BDCu;
label_2a9bdc:
    // 0x2a9bdc: 0x0  nop
    ctx->pc = 0x2a9bdcu;
    // NOP
    // 0x2a9be0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a9be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9be4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a9be8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9BE8u;
    {
        const bool branch_taken_0x2a9be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BE8u;
            // 0x2a9bec: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9be8) {
            ctx->pc = 0x2A9BFCu;
            goto label_2a9bfc;
        }
    }
    ctx->pc = 0x2A9BF0u;
    // 0x2a9bf0: 0xc059924  jal         func_166490
    ctx->pc = 0x2A9BF0u;
    SET_GPR_U32(ctx, 31, 0x2A9BF8u);
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BF8u; }
        if (ctx->pc != 0x2A9BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BF8u; }
        if (ctx->pc != 0x2A9BF8u) { return; }
    }
    ctx->pc = 0x2A9BF8u;
label_2a9bf8:
    // 0x2a9bf8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2a9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2a9bfc:
    // 0x2a9bfc: 0x0  nop
    ctx->pc = 0x2a9bfcu;
    // NOP
    // 0x2a9c00: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2a9c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a9c04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9C04u;
    {
        const bool branch_taken_0x2a9c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c04) {
            ctx->pc = 0x2A9C14u;
            goto label_2a9c14;
        }
    }
    ctx->pc = 0x2A9C0Cu;
    // 0x2a9c0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9C0Cu;
    {
        const bool branch_taken_0x2a9c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C0Cu;
            // 0x2a9c10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c0c) {
            ctx->pc = 0x2A9C2Cu;
            goto label_2a9c2c;
        }
    }
    ctx->pc = 0x2A9C14u;
label_2a9c14:
    // 0x2a9c14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a9c18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a9c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a9c1c:
    // 0x2a9c1c: 0x0  nop
    ctx->pc = 0x2a9c1cu;
    // NOP
    // 0x2a9c20: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2a9c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a9c24: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2A9C24u;
    {
        const bool branch_taken_0x2a9c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C24u;
            // 0x2a9c28: 0x233102a  slt         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c24) {
            ctx->pc = 0x2A9B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b08;
        }
    }
    ctx->pc = 0x2A9C2Cu;
label_2a9c2c:
    // 0x2a9c2c: 0x0  nop
    ctx->pc = 0x2a9c2cu;
    // NOP
    // 0x2a9c30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a9c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c34:
    // 0x2a9c34: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a9c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9c38:
    // 0x2a9c38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a9c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a9c3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a9c3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9c40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a9c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9c44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C58u;
            // 0x2a9c5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9C60u;
}
