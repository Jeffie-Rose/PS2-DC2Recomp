#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPARTS_COMMENT__FP9SPI_STACKi
// Address: 0x2a52e0 - 0x2a5374
void emapPARTS_COMMENT__FP9SPI_STACKi_0x2a52e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPARTS_COMMENT__FP9SPI_STACKi_0x2a52e0");
#endif

    switch (ctx->pc) {
        case 0x2a530cu: goto label_2a530c;
        case 0x2a5318u: goto label_2a5318;
        case 0x2a5338u: goto label_2a5338;
        case 0x2a5354u: goto label_2a5354;
        default: break;
    }

    ctx->pc = 0x2a52e0u;

    // 0x2a52e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a52e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a52e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a52e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a52e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a52e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a52ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a52ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a52f0: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a52f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A52F4u;
    {
        const bool branch_taken_0x2a52f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A52F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A52F4u;
            // 0x2a52f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52f4) {
            ctx->pc = 0x2A5304u;
            goto label_2a5304;
        }
    }
    ctx->pc = 0x2A52FCu;
    // 0x2a52fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A52FCu;
    {
        const bool branch_taken_0x2a52fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A52FCu;
            // 0x2a5300: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52fc) {
            ctx->pc = 0x2A5364u;
            goto label_2a5364;
        }
    }
    ctx->pc = 0x2A5304u;
label_2a5304:
    // 0x2a5304: 0xc05191c  jal         func_146470
    ctx->pc = 0x2A5304u;
    SET_GPR_U32(ctx, 31, 0x2A530Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A530Cu; }
        if (ctx->pc != 0x2A530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A530Cu; }
        if (ctx->pc != 0x2A530Cu) { return; }
    }
    ctx->pc = 0x2A530Cu;
label_2a530c:
    // 0x2a530c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5310: 0xc04a422  jal         func_129088
    ctx->pc = 0x2A5310u;
    SET_GPR_U32(ctx, 31, 0x2A5318u);
    ctx->pc = 0x2A5314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5310u;
            // 0x2a5314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5318u; }
        if (ctx->pc != 0x2A5318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5318u; }
        if (ctx->pc != 0x2A5318u) { return; }
    }
    ctx->pc = 0x2A5318u;
label_2a5318:
    // 0x2a5318: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2a5318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a531c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a5320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5320u;
    {
        const bool branch_taken_0x2a5320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5320u;
            // 0x2a5324: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5320) {
            ctx->pc = 0x2A5330u;
            goto label_2a5330;
        }
    }
    ctx->pc = 0x2A5328u;
    // 0x2a5328: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a5328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a532c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a5330:
    // 0x2a5330: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A5330u;
    SET_GPR_U32(ctx, 31, 0x2A5338u);
    ctx->pc = 0x2A5334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5330u;
            // 0x2a5334: 0x8f849a58  lw          $a0, -0x65A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5338u; }
        if (ctx->pc != 0x2A5338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5338u; }
        if (ctx->pc != 0x2A5338u) { return; }
    }
    ctx->pc = 0x2A5338u;
label_2a5338:
    // 0x2a5338: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5338u;
    {
        const bool branch_taken_0x2a5338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5338u;
            // 0x2a533c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5338) {
            ctx->pc = 0x2A535Cu;
            goto label_2a535c;
        }
    }
    ctx->pc = 0x2A5340u;
    // 0x2a5340: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5340u;
    {
        const bool branch_taken_0x2a5340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5340u;
            // 0x2a5344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5340) {
            ctx->pc = 0x2A5360u;
            goto label_2a5360;
        }
    }
    ctx->pc = 0x2A5348u;
    // 0x2a5348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a5348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a534c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2A534Cu;
    SET_GPR_U32(ctx, 31, 0x2A5354u);
    ctx->pc = 0x2A5350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A534Cu;
            // 0x2a5350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5354u; }
        if (ctx->pc != 0x2A5354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5354u; }
        if (ctx->pc != 0x2A5354u) { return; }
    }
    ctx->pc = 0x2A5354u;
label_2a5354:
    // 0x2a5354: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5358: 0xac510048  sw          $s1, 0x48($v0)
    ctx->pc = 0x2a5358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 17));
label_2a535c:
    // 0x2a535c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5360:
    // 0x2a5360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5364:
    // 0x2a5364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a536c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A536Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A536Cu;
            // 0x2a5370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5374u;
}
