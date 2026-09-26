#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapMAP_PARTS__FP9SPI_STACKi
// Address: 0x162af0 - 0x162bb8
void mapMAP_PARTS__FP9SPI_STACKi_0x162af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapMAP_PARTS__FP9SPI_STACKi_0x162af0");
#endif

    switch (ctx->pc) {
        case 0x162b0cu: goto label_162b0c;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b38u: goto label_162b38;
        case 0x162b44u: goto label_162b44;
        case 0x162b8cu: goto label_162b8c;
        default: break;
    }

    ctx->pc = 0x162af0u;

    // 0x162af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162b00: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x162b04: 0xc05191c  jal         func_146470
    ctx->pc = 0x162B04u;
    SET_GPR_U32(ctx, 31, 0x162B0Cu);
    ctx->pc = 0x162B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B04u;
            // 0x162b08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B0Cu; }
        if (ctx->pc != 0x162B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B0Cu; }
        if (ctx->pc != 0x162B0Cu) { return; }
    }
    ctx->pc = 0x162B0Cu;
label_162b0c:
    // 0x162b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162B0Cu;
    {
        const bool branch_taken_0x162b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B0Cu;
            // 0x162b10: 0xaf808918  sw          $zero, -0x76E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b0c) {
            ctx->pc = 0x162B1Cu;
            goto label_162b1c;
        }
    }
    ctx->pc = 0x162B14u;
    // 0x162b14: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x162B14u;
    {
        const bool branch_taken_0x162b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B14u;
            // 0x162b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b14) {
            ctx->pc = 0x162BA4u;
            goto label_162ba4;
        }
    }
    ctx->pc = 0x162B1Cu;
label_162b1c:
    // 0x162b1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x162b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x162b20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b24: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x162B24u;
    SET_GPR_U32(ctx, 31, 0x162B2Cu);
    ctx->pc = 0x162B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B24u;
            // 0x162b28: 0x248401a0  addiu       $a0, $a0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B2Cu; }
        if (ctx->pc != 0x162B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B2Cu; }
        if (ctx->pc != 0x162B2Cu) { return; }
    }
    ctx->pc = 0x162B2Cu;
label_162b2c:
    // 0x162b2c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x162b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x162b30: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x162B30u;
    SET_GPR_U32(ctx, 31, 0x162B38u);
    ctx->pc = 0x162B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B30u;
            // 0x162b34: 0x248404a0  addiu       $a0, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B38u; }
        if (ctx->pc != 0x162B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B38u; }
        if (ctx->pc != 0x162B38u) { return; }
    }
    ctx->pc = 0x162B38u;
label_162b38:
    // 0x162b38: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x162b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x162b3c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x162B3Cu;
    SET_GPR_U32(ctx, 31, 0x162B44u);
    ctx->pc = 0x162B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B3Cu;
            // 0x162b40: 0x248404b0  addiu       $a0, $a0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B44u; }
        if (ctx->pc != 0x162B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B44u; }
        if (ctx->pc != 0x162B44u) { return; }
    }
    ctx->pc = 0x162B44u;
label_162b44:
    // 0x162b44: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162b48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x162b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x162b4c: 0xac2004cc  sw          $zero, 0x4CC($at)
    ctx->pc = 0x162b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1228), GPR_U32(ctx, 0));
    // 0x162b50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x162b54: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162b58: 0xaf828924  sw          $v0, -0x76DC($gp)
    ctx->pc = 0x162b58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 2));
    // 0x162b5c: 0xac2304c8  sw          $v1, 0x4C8($at)
    ctx->pc = 0x162b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1224), GPR_U32(ctx, 3));
    // 0x162b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162b64: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162b68: 0xaf82892c  sw          $v0, -0x76D4($gp)
    ctx->pc = 0x162b68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 2));
    // 0x162b6c: 0xac2304c4  sw          $v1, 0x4C4($at)
    ctx->pc = 0x162b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1220), GPR_U32(ctx, 3));
    // 0x162b70: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162b74: 0xac2304c0  sw          $v1, 0x4C0($at)
    ctx->pc = 0x162b74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1216), GPR_U32(ctx, 3));
    // 0x162b78: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x162b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x162b7c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x162B7Cu;
    {
        const bool branch_taken_0x162b7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x162B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B7Cu;
            // 0x162b80: 0xaf808928  sw          $zero, -0x76D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b7c) {
            ctx->pc = 0x162B90u;
            goto label_162b90;
        }
    }
    ctx->pc = 0x162B84u;
    // 0x162b84: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x162B84u;
    SET_GPR_U32(ctx, 31, 0x162B8Cu);
    ctx->pc = 0x162B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B84u;
            // 0x162b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B8Cu; }
        if (ctx->pc != 0x162B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B8Cu; }
        if (ctx->pc != 0x162B8Cu) { return; }
    }
    ctx->pc = 0x162B8Cu;
label_162b8c:
    // 0x162b8c: 0xaf82892c  sw          $v0, -0x76D4($gp)
    ctx->pc = 0x162b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 2));
label_162b90:
    // 0x162b90: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162b98: 0xa02002a0  sb          $zero, 0x2A0($at)
    ctx->pc = 0x162b98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 672), (uint8_t)GPR_U32(ctx, 0));
    // 0x162b9c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162ba0: 0xa02003a0  sb          $zero, 0x3A0($at)
    ctx->pc = 0x162ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 928), (uint8_t)GPR_U32(ctx, 0));
label_162ba4:
    // 0x162ba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x162BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162BB0u;
            // 0x162bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162BB8u;
}
