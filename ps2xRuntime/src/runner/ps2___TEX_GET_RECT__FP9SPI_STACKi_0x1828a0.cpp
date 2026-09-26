#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __TEX_GET_RECT__FP9SPI_STACKi
// Address: 0x1828a0 - 0x182968
void ps2___TEX_GET_RECT__FP9SPI_STACKi_0x1828a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___TEX_GET_RECT__FP9SPI_STACKi_0x1828a0");
#endif

    switch (ctx->pc) {
        case 0x1828bcu: goto label_1828bc;
        case 0x1828d0u: goto label_1828d0;
        case 0x1828d8u: goto label_1828d8;
        case 0x1828f0u: goto label_1828f0;
        case 0x182908u: goto label_182908;
        case 0x182920u: goto label_182920;
        default: break;
    }

    ctx->pc = 0x1828a0u;

    // 0x1828a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1828a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1828a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1828a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1828a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1828a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1828ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1828acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1828b0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1828b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1828B4u;
    SET_GPR_U32(ctx, 31, 0x1828BCu);
    ctx->pc = 0x1828B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828B4u;
            // 0x1828b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828BCu; }
        if (ctx->pc != 0x1828BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828BCu; }
        if (ctx->pc != 0x1828BCu) { return; }
    }
    ctx->pc = 0x1828BCu;
label_1828bc:
    // 0x1828bc: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1828c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1828c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1828c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1828C8u;
    {
        const bool branch_taken_0x1828c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1828CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828C8u;
            // 0x1828cc: 0xac620258  sw          $v0, 0x258($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828c8) {
            ctx->pc = 0x182934u;
            goto label_182934;
        }
    }
    ctx->pc = 0x1828D0u;
label_1828d0:
    // 0x1828d0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1828D0u;
    SET_GPR_U32(ctx, 31, 0x1828D8u);
    ctx->pc = 0x1828D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828D0u;
            // 0x1828d4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828D8u; }
        if (ctx->pc != 0x1828D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828D8u; }
        if (ctx->pc != 0x1828D8u) { return; }
    }
    ctx->pc = 0x1828D8u;
label_1828d8:
    // 0x1828d8: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1828d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1828dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1828dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828e0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1828e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1828e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1828e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1828E8u;
    SET_GPR_U32(ctx, 31, 0x1828F0u);
    ctx->pc = 0x1828ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828E8u;
            // 0x1828ec: 0xac62025c  sw          $v0, 0x25C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828F0u; }
        if (ctx->pc != 0x1828F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828F0u; }
        if (ctx->pc != 0x1828F0u) { return; }
    }
    ctx->pc = 0x1828F0u;
label_1828f0:
    // 0x1828f0: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1828f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1828f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1828f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828f8: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x1828f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1828fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1828fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x182900: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182900u;
    SET_GPR_U32(ctx, 31, 0x182908u);
    ctx->pc = 0x182904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182900u;
            // 0x182904: 0xac620260  sw          $v0, 0x260($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182908u; }
        if (ctx->pc != 0x182908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182908u; }
        if (ctx->pc != 0x182908u) { return; }
    }
    ctx->pc = 0x182908u;
label_182908:
    // 0x182908: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18290c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182910: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182914: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x182918: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182918u;
    SET_GPR_U32(ctx, 31, 0x182920u);
    ctx->pc = 0x18291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182918u;
            // 0x18291c: 0xac620264  sw          $v0, 0x264($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182920u; }
        if (ctx->pc != 0x182920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182920u; }
        if (ctx->pc != 0x182920u) { return; }
    }
    ctx->pc = 0x182920u;
label_182920:
    // 0x182920: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x182928: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x182928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18292c: 0xac620268  sw          $v0, 0x268($v1)
    ctx->pc = 0x18292cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 2));
    // 0x182930: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x182930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_182934:
    // 0x182934: 0x0  nop
    ctx->pc = 0x182934u;
    // NOP
    // 0x182938: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18293c: 0x8c420258  lw          $v0, 0x258($v0)
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x182940: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x182940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x182944: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x182944u;
    {
        const bool branch_taken_0x182944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182944u;
            // 0x182948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182944) {
            ctx->pc = 0x1828D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1828d0;
        }
    }
    ctx->pc = 0x18294Cu;
    // 0x18294c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18295c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18295cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182960: 0x3e00008  jr          $ra
    ctx->pc = 0x182960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182960u;
            // 0x182964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182968u;
}
