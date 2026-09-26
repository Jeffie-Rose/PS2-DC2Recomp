#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFixVertex__FP9SPI_STACKi
// Address: 0x17b440 - 0x17b530
void dynFixVertex__FP9SPI_STACKi_0x17b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFixVertex__FP9SPI_STACKi_0x17b440");
#endif

    switch (ctx->pc) {
        case 0x17b45cu: goto label_17b45c;
        case 0x17b468u: goto label_17b468;
        case 0x17b478u: goto label_17b478;
        case 0x17b49cu: goto label_17b49c;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4dcu: goto label_17b4dc;
        case 0x17b4f0u: goto label_17b4f0;
        case 0x17b500u: goto label_17b500;
        default: break;
    }

    ctx->pc = 0x17b440u;

    // 0x17b440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17b444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17b448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b454: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B454u;
    SET_GPR_U32(ctx, 31, 0x17B45Cu);
    ctx->pc = 0x17B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B454u;
            // 0x17b458: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B45Cu; }
        if (ctx->pc != 0x17B45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B45Cu; }
        if (ctx->pc != 0x17B45Cu) { return; }
    }
    ctx->pc = 0x17B45Cu;
label_17b45c:
    // 0x17b45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b460: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B460u;
    SET_GPR_U32(ctx, 31, 0x17B468u);
    ctx->pc = 0x17B464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B460u;
            // 0x17b464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B468u; }
        if (ctx->pc != 0x17B468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B468u; }
        if (ctx->pc != 0x17B468u) { return; }
    }
    ctx->pc = 0x17B468u;
label_17b468:
    // 0x17b468: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b46c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b470: 0xc05eac8  jal         func_17AB20
    ctx->pc = 0x17B470u;
    SET_GPR_U32(ctx, 31, 0x17B478u);
    ctx->pc = 0x17B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B470u;
            // 0x17b474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    if (runtime->hasFunction(0x17AB20u)) {
        auto targetFn = runtime->lookupFunction(0x17AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B478u; }
        if (ctx->pc != 0x17B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetFixVertex__13CDynamicAnimeFi_0x17ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B478u; }
        if (ctx->pc != 0x17B478u) { return; }
    }
    ctx->pc = 0x17B478u;
label_17b478:
    // 0x17b478: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x17b478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x17b47c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b480: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B480u;
    {
        const bool branch_taken_0x17b480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B480u;
            // 0x17b484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b480) {
            ctx->pc = 0x17B490u;
            goto label_17b490;
        }
    }
    ctx->pc = 0x17B488u;
    // 0x17b488: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17B488u;
    {
        const bool branch_taken_0x17b488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B488u;
            // 0x17b48c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b488) {
            ctx->pc = 0x17B51Cu;
            goto label_17b51c;
        }
    }
    ctx->pc = 0x17B490u;
label_17b490:
    // 0x17b490: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x17b490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17b494: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17B494u;
    SET_GPR_U32(ctx, 31, 0x17B49Cu);
    ctx->pc = 0x17B498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B494u;
            // 0x17b498: 0x8f848a10  lw          $a0, -0x75F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B49Cu; }
        if (ctx->pc != 0x17B49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B49Cu; }
        if (ctx->pc != 0x17B49Cu) { return; }
    }
    ctx->pc = 0x17B49Cu;
label_17b49c:
    // 0x17b49c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17b49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B4A0u;
    {
        const bool branch_taken_0x17b4a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4A0u;
            // 0x17b4a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4a0) {
            ctx->pc = 0x17B4C0u;
            goto label_17b4c0;
        }
    }
    ctx->pc = 0x17B4A8u;
    // 0x17b4a8: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b4ac: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17B4ACu;
    SET_GPR_U32(ctx, 31, 0x17B4B4u);
    ctx->pc = 0x17B4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4ACu;
            // 0x17b4b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4B4u; }
        if (ctx->pc != 0x17B4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4B4u; }
        if (ctx->pc != 0x17B4B4u) { return; }
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B4B4u;
    {
        const bool branch_taken_0x17b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b4b4) {
            ctx->pc = 0x17B4CCu;
            goto label_17b4cc;
        }
    }
    ctx->pc = 0x17B4BCu;
    // 0x17b4bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b4c0:
    // 0x17b4c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17B4C4u;
    {
        const bool branch_taken_0x17b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4C4u;
            // 0x17b4c8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4c4) {
            ctx->pc = 0x17B518u;
            goto label_17b518;
        }
    }
    ctx->pc = 0x17B4CCu;
label_17b4cc:
    // 0x17b4cc: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b4d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4d4: 0xc05ea80  jal         func_17AA00
    ctx->pc = 0x17B4D4u;
    SET_GPR_U32(ctx, 31, 0x17B4DCu);
    ctx->pc = 0x17B4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4D4u;
            // 0x17b4d8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA00u;
    if (runtime->hasFunction(0x17AA00u)) {
        auto targetFn = runtime->lookupFunction(0x17AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4DCu; }
        if (ctx->pc != 0x17B4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInitVertex__13CDynamicAnimeFiPf_0x17aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4DCu; }
        if (ctx->pc != 0x17B4DCu) { return; }
    }
    ctx->pc = 0x17B4DCu;
label_17b4dc:
    // 0x17b4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b4e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4e4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x17b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x17b4e8: 0xc04dcc8  jal         func_137320
    ctx->pc = 0x17B4E8u;
    SET_GPR_U32(ctx, 31, 0x17B4F0u);
    ctx->pc = 0x17B4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4E8u;
            // 0x17b4ec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137320u;
    if (runtime->hasFunction(0x137320u)) {
        auto targetFn = runtime->lookupFunction(0x137320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4F0u; }
        if (ctx->pc != 0x17B4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInverseMatrix__8mgCFrameFPA4_f_0x137320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B4F0u; }
        if (ctx->pc != 0x17B4F0u) { return; }
    }
    ctx->pc = 0x17B4F0u;
label_17b4f0:
    // 0x17b4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b4f8: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x17B4F8u;
    SET_GPR_U32(ctx, 31, 0x17B500u);
    ctx->pc = 0x17B4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4F8u;
            // 0x17b4fc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B500u; }
        if (ctx->pc != 0x17B500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B500u; }
        if (ctx->pc != 0x17B500u) { return; }
    }
    ctx->pc = 0x17B500u;
label_17b500:
    // 0x17b500: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b508: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x17b508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x17b50c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x17b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x17b510: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17b510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17b514: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x17b514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_17b518:
    // 0x17b518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b51c:
    // 0x17b51c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b528: 0x3e00008  jr          $ra
    ctx->pc = 0x17B528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B528u;
            // 0x17b52c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B530u;
}
