#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_TITLE__FP9SPI_STACKi
// Address: 0x2f93a0 - 0x2f941c
void ps2__ROOM_TITLE__FP9SPI_STACKi_0x2f93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_TITLE__FP9SPI_STACKi_0x2f93a0");
#endif

    switch (ctx->pc) {
        case 0x2f93b8u: goto label_2f93b8;
        case 0x2f93c4u: goto label_2f93c4;
        case 0x2f93e0u: goto label_2f93e0;
        case 0x2f9400u: goto label_2f9400;
        default: break;
    }

    ctx->pc = 0x2f93a0u;

    // 0x2f93a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f93a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f93a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f93ac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2f93acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f93b0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F93B0u;
    SET_GPR_U32(ctx, 31, 0x2F93B8u);
    ctx->pc = 0x2F93B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93B0u;
            // 0x2f93b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93B8u; }
        if (ctx->pc != 0x2F93B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93B8u; }
        if (ctx->pc != 0x2F93B8u) { return; }
    }
    ctx->pc = 0x2F93B8u;
label_2f93b8:
    // 0x2f93b8: 0x8f849f4c  lw          $a0, -0x60B4($gp)
    ctx->pc = 0x2f93b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f93bc: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F93BCu;
    SET_GPR_U32(ctx, 31, 0x2F93C4u);
    ctx->pc = 0x2F93C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93BCu;
            // 0x2f93c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93C4u; }
        if (ctx->pc != 0x2F93C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93C4u; }
        if (ctx->pc != 0x2F93C4u) { return; }
    }
    ctx->pc = 0x2F93C4u;
label_2f93c4:
    // 0x2f93c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f93c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93c8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F93C8u;
    {
        const bool branch_taken_0x2f93c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F93CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93C8u;
            // 0x2f93cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93c8) {
            ctx->pc = 0x2F93D8u;
            goto label_2f93d8;
        }
    }
    ctx->pc = 0x2F93D0u;
    // 0x2f93d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F93D0u;
    {
        const bool branch_taken_0x2f93d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F93D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93D0u;
            // 0x2f93d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93d0) {
            ctx->pc = 0x2F9408u;
            goto label_2f9408;
        }
    }
    ctx->pc = 0x2F93D8u;
label_2f93d8:
    // 0x2f93d8: 0xc05191c  jal         func_146470
    ctx->pc = 0x2F93D8u;
    SET_GPR_U32(ctx, 31, 0x2F93E0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93E0u; }
        if (ctx->pc != 0x2F93E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93E0u; }
        if (ctx->pc != 0x2F93E0u) { return; }
    }
    ctx->pc = 0x2F93E0u;
label_2f93e0:
    // 0x2f93e0: 0xc78085d8  lwc1        $f0, -0x7A28($gp)
    ctx->pc = 0x2f93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f93e4: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x2f93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2f93e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F93E8u;
    {
        const bool branch_taken_0x2f93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F93ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93E8u;
            // 0x2f93ec: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93e8) {
            ctx->pc = 0x2F93F4u;
            goto label_2f93f4;
        }
    }
    ctx->pc = 0x2F93F0u;
    // 0x2f93f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f93f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f93f4:
    // 0x2f93f4: 0x8f859f54  lw          $a1, -0x60AC($gp)
    ctx->pc = 0x2f93f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2f93f8: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2F93F8u;
    SET_GPR_U32(ctx, 31, 0x2F9400u);
    ctx->pc = 0x2F93FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93F8u;
            // 0x2f93fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9400u; }
        if (ctx->pc != 0x2F9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9400u; }
        if (ctx->pc != 0x2F9400u) { return; }
    }
    ctx->pc = 0x2F9400u;
label_2f9400:
    // 0x2f9400: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f9400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f9404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9408:
    // 0x2f9408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f9408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f940c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f940cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9414: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9414u;
            // 0x2f9418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F941Cu;
}
