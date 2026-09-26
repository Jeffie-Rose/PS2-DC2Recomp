#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPARTS_MATERIAL__FP9SPI_STACKi
// Address: 0x2a5250 - 0x2a52d8
void emapPARTS_MATERIAL__FP9SPI_STACKi_0x2a5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPARTS_MATERIAL__FP9SPI_STACKi_0x2a5250");
#endif

    switch (ctx->pc) {
        case 0x2a5294u: goto label_2a5294;
        case 0x2a52b0u: goto label_2a52b0;
        case 0x2a52bcu: goto label_2a52bc;
        default: break;
    }

    ctx->pc = 0x2a5250u;

    // 0x2a5250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a525c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a5260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5264: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a5264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5268: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5268u;
    {
        const bool branch_taken_0x2a5268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5268u;
            // 0x2a526c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5268) {
            ctx->pc = 0x2A527Cu;
            goto label_2a527c;
        }
    }
    ctx->pc = 0x2A5270u;
    // 0x2a5270: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x2a5270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a5274: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5274u;
    {
        const bool branch_taken_0x2a5274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5274) {
            ctx->pc = 0x2A5284u;
            goto label_2a5284;
        }
    }
    ctx->pc = 0x2A527Cu;
label_2a527c:
    // 0x2a527c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A527Cu;
    {
        const bool branch_taken_0x2a527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A527Cu;
            // 0x2a5280: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a527c) {
            ctx->pc = 0x2A52C8u;
            goto label_2a52c8;
        }
    }
    ctx->pc = 0x2A5284u;
label_2a5284:
    // 0x2a5284: 0x8f859a60  lw          $a1, -0x65A0($gp)
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941280)));
    // 0x2a5288: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a528c: 0xc06d5cc  jal         func_1B5730
    ctx->pc = 0x2A528Cu;
    SET_GPR_U32(ctx, 31, 0x2A5294u);
    ctx->pc = 0x2A5290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A528Cu;
            // 0x2a5290: 0xaf829a60  sw          $v0, -0x65A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5730u;
    if (runtime->hasFunction(0x1B5730u)) {
        auto targetFn = runtime->lookupFunction(0x1B5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5294u; }
        if (ctx->pc != 0x2A5294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__14CEditPartsInfoFi_0x1b5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5294u; }
        if (ctx->pc != 0x2A5294u) { return; }
    }
    ctx->pc = 0x2A5294u;
label_2a5294:
    // 0x2a5294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5298: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5298u;
    {
        const bool branch_taken_0x2a5298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5298u;
            // 0x2a529c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5298) {
            ctx->pc = 0x2A52A8u;
            goto label_2a52a8;
        }
    }
    ctx->pc = 0x2A52A0u;
    // 0x2a52a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A52A0u;
    {
        const bool branch_taken_0x2a52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A52A0u;
            // 0x2a52a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52a0) {
            ctx->pc = 0x2A52C4u;
            goto label_2a52c4;
        }
    }
    ctx->pc = 0x2A52A8u;
label_2a52a8:
    // 0x2a52a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A52A8u;
    SET_GPR_U32(ctx, 31, 0x2A52B0u);
    ctx->pc = 0x2A52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A52A8u;
            // 0x2a52ac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52B0u; }
        if (ctx->pc != 0x2A52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52B0u; }
        if (ctx->pc != 0x2A52B0u) { return; }
    }
    ctx->pc = 0x2A52B0u;
label_2a52b0:
    // 0x2a52b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a52b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A52B4u;
    SET_GPR_U32(ctx, 31, 0x2A52BCu);
    ctx->pc = 0x2A52B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A52B4u;
            // 0x2a52b8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52BCu; }
        if (ctx->pc != 0x2A52BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52BCu; }
        if (ctx->pc != 0x2A52BCu) { return; }
    }
    ctx->pc = 0x2A52BCu;
label_2a52bc:
    // 0x2a52bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a52c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a52c4:
    // 0x2a52c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a52c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a52c8:
    // 0x2a52c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a52c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a52cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a52ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a52d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A52D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A52D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A52D0u;
            // 0x2a52d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A52D8u;
}
