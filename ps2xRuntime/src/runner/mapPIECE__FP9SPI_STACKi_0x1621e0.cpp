#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE__FP9SPI_STACKi
// Address: 0x1621e0 - 0x162350
void mapPIECE__FP9SPI_STACKi_0x1621e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE__FP9SPI_STACKi_0x1621e0");
#endif

    switch (ctx->pc) {
        case 0x162214u: goto label_162214;
        case 0x162238u: goto label_162238;
        case 0x162260u: goto label_162260;
        case 0x16226cu: goto label_16226c;
        case 0x162278u: goto label_162278;
        case 0x162288u: goto label_162288;
        case 0x162294u: goto label_162294;
        case 0x1622a0u: goto label_1622a0;
        case 0x1622f4u: goto label_1622f4;
        case 0x162304u: goto label_162304;
        case 0x162310u: goto label_162310;
        case 0x162320u: goto label_162320;
        case 0x162330u: goto label_162330;
        default: break;
    }

    ctx->pc = 0x1621e0u;

    // 0x1621e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1621e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1621e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1621e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1621e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1621ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1621ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1621f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1621f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1621f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1621f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1621f8: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x1621f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x1621fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1621FCu;
    {
        const bool branch_taken_0x1621fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621FCu;
            // 0x162200: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621fc) {
            ctx->pc = 0x16220Cu;
            goto label_16220c;
        }
    }
    ctx->pc = 0x162204u;
    // 0x162204: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x162204u;
    {
        const bool branch_taken_0x162204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162204u;
            // 0x162208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162204) {
            ctx->pc = 0x162334u;
            goto label_162334;
        }
    }
    ctx->pc = 0x16220Cu;
label_16220c:
    // 0x16220c: 0xc05191c  jal         func_146470
    ctx->pc = 0x16220Cu;
    SET_GPR_U32(ctx, 31, 0x162214u);
    ctx->pc = 0x162210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16220Cu;
            // 0x162210: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162214u; }
        if (ctx->pc != 0x162214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162214u; }
        if (ctx->pc != 0x162214u) { return; }
    }
    ctx->pc = 0x162214u;
label_162214:
    // 0x162214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162218: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162218u;
    {
        const bool branch_taken_0x162218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162218u;
            // 0x16221c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162218) {
            ctx->pc = 0x162228u;
            goto label_162228;
        }
    }
    ctx->pc = 0x162220u;
    // 0x162220: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x162220u;
    {
        const bool branch_taken_0x162220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162220u;
            // 0x162224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162220) {
            ctx->pc = 0x162334u;
            goto label_162334;
        }
    }
    ctx->pc = 0x162228u;
label_162228:
    // 0x162228: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162228u;
    {
        const bool branch_taken_0x162228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162228u;
            // 0x16222c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162228) {
            ctx->pc = 0x16223Cu;
            goto label_16223c;
        }
    }
    ctx->pc = 0x162230u;
    // 0x162230: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x162230u;
    SET_GPR_U32(ctx, 31, 0x162238u);
    ctx->pc = 0x162234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162230u;
            // 0x162234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162238u; }
        if (ctx->pc != 0x162238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162238u; }
        if (ctx->pc != 0x162238u) { return; }
    }
    ctx->pc = 0x162238u;
label_162238:
    // 0x162238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16223c:
    // 0x16223c: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x162240: 0x8c420ca8  lw          $v0, 0xCA8($v0)
    ctx->pc = 0x162240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3240)));
    // 0x162244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162248u;
    {
        const bool branch_taken_0x162248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162248u;
            // 0x16224c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162248) {
            ctx->pc = 0x162258u;
            goto label_162258;
        }
    }
    ctx->pc = 0x162250u;
    // 0x162250: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x162250u;
    {
        const bool branch_taken_0x162250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162250u;
            // 0x162254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162250) {
            ctx->pc = 0x162334u;
            goto label_162334;
        }
    }
    ctx->pc = 0x162258u;
label_162258:
    // 0x162258: 0xc05878c  jal         func_161E30
    ctx->pc = 0x162258u;
    SET_GPR_U32(ctx, 31, 0x162260u);
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162260u; }
        if (ctx->pc != 0x162260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162260u; }
        if (ctx->pc != 0x162260u) { return; }
    }
    ctx->pc = 0x162260u;
label_162260:
    // 0x162260: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x162260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x162264: 0xc04e748  jal         func_139D20
    ctx->pc = 0x162264u;
    SET_GPR_U32(ctx, 31, 0x16226Cu);
    ctx->pc = 0x162268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162264u;
            // 0x162268: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16226Cu; }
        if (ctx->pc != 0x16226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16226Cu; }
        if (ctx->pc != 0x16226Cu) { return; }
    }
    ctx->pc = 0x16226Cu;
label_16226c:
    // 0x16226c: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x16226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x162270: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x162270u;
    SET_GPR_U32(ctx, 31, 0x162278u);
    ctx->pc = 0x162274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162270u;
            // 0x162274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162278u; }
        if (ctx->pc != 0x162278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162278u; }
        if (ctx->pc != 0x162278u) { return; }
    }
    ctx->pc = 0x162278u;
label_162278:
    // 0x162278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162278u;
    {
        const bool branch_taken_0x162278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162278u;
            // 0x16227c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162278) {
            ctx->pc = 0x162288u;
            goto label_162288;
        }
    }
    ctx->pc = 0x162280u;
    // 0x162280: 0xc0588dc  jal         func_162370
    ctx->pc = 0x162280u;
    SET_GPR_U32(ctx, 31, 0x162288u);
    ctx->pc = 0x162370u;
    if (runtime->hasFunction(0x162370u)) {
        auto targetFn = runtime->lookupFunction(0x162370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162288u; }
        if (ctx->pc != 0x162288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__17CList_9CMapPiece_Fv_0x162370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162288u; }
        if (ctx->pc != 0x162288u) { return; }
    }
    ctx->pc = 0x162288u;
label_162288:
    // 0x162288: 0xaf82891c  sw          $v0, -0x76E4($gp)
    ctx->pc = 0x162288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936860), GPR_U32(ctx, 2));
    // 0x16228c: 0xc0588d8  jal         func_162360
    ctx->pc = 0x16228Cu;
    SET_GPR_U32(ctx, 31, 0x162294u);
    ctx->pc = 0x162290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16228Cu;
            // 0x162290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162294u; }
        if (ctx->pc != 0x162294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162294u; }
        if (ctx->pc != 0x162294u) { return; }
    }
    ctx->pc = 0x162294u;
label_162294:
    // 0x162294: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162298: 0xc04a422  jal         func_129088
    ctx->pc = 0x162298u;
    SET_GPR_U32(ctx, 31, 0x1622A0u);
    ctx->pc = 0x16229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162298u;
            // 0x16229c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622A0u; }
        if (ctx->pc != 0x1622A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622A0u; }
        if (ctx->pc != 0x1622A0u) { return; }
    }
    ctx->pc = 0x1622A0u;
label_1622a0:
    // 0x1622a0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1622a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1622a4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1622A4u;
    {
        const bool branch_taken_0x1622a4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1622A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1622A4u;
            // 0x1622a8: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622a4) {
            ctx->pc = 0x1622B8u;
            goto label_1622b8;
        }
    }
    ctx->pc = 0x1622ACu;
    // 0x1622ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1622ACu;
    {
        const bool branch_taken_0x1622ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1622ac) {
            ctx->pc = 0x1622B8u;
            goto label_1622b8;
        }
    }
    ctx->pc = 0x1622B4u;
    // 0x1622b4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1622b8:
    // 0x1622b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1622B8u;
    {
        const bool branch_taken_0x1622b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1622B8u;
            // 0x1622bc: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622b8) {
            ctx->pc = 0x1622D8u;
            goto label_1622d8;
        }
    }
    ctx->pc = 0x1622C0u;
    // 0x1622c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1622C0u;
    {
        const bool branch_taken_0x1622c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1622C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1622C0u;
            // 0x1622c4: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622c0) {
            ctx->pc = 0x1622D0u;
            goto label_1622d0;
        }
    }
    ctx->pc = 0x1622C8u;
    // 0x1622c8: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1622c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1622cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1622ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1622d0:
    // 0x1622d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1622D0u;
    {
        const bool branch_taken_0x1622d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1622D0u;
            // 0x1622d4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622d0) {
            ctx->pc = 0x1622ECu;
            goto label_1622ec;
        }
    }
    ctx->pc = 0x1622D8u;
label_1622d8:
    // 0x1622d8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1622D8u;
    {
        const bool branch_taken_0x1622d8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1622d8) {
            ctx->pc = 0x1622E8u;
            goto label_1622e8;
        }
    }
    ctx->pc = 0x1622E0u;
    // 0x1622e0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1622e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1622e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1622e8:
    // 0x1622e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1622e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1622ec:
    // 0x1622ec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1622ECu;
    SET_GPR_U32(ctx, 31, 0x1622F4u);
    ctx->pc = 0x1622F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622ECu;
            // 0x1622f0: 0x8f848920  lw          $a0, -0x76E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622F4u; }
        if (ctx->pc != 0x1622F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622F4u; }
        if (ctx->pc != 0x1622F4u) { return; }
    }
    ctx->pc = 0x1622F4u;
label_1622f4:
    // 0x1622f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1622f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1622f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622fc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1622FCu;
    SET_GPR_U32(ctx, 31, 0x162304u);
    ctx->pc = 0x162300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622FCu;
            // 0x162300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162304u; }
        if (ctx->pc != 0x162304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162304u; }
        if (ctx->pc != 0x162304u) { return; }
    }
    ctx->pc = 0x162304u;
label_162304:
    // 0x162304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162308: 0xc0588d4  jal         func_162350
    ctx->pc = 0x162308u;
    SET_GPR_U32(ctx, 31, 0x162310u);
    ctx->pc = 0x16230Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162308u;
            // 0x16230c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162350u;
    if (runtime->hasFunction(0x162350u)) {
        auto targetFn = runtime->lookupFunction(0x162350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162310u; }
        if (ctx->pc != 0x162310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__9CMapPieceFPc_0x162350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162310u; }
        if (ctx->pc != 0x162310u) { return; }
    }
    ctx->pc = 0x162310u;
label_162310:
    // 0x162310: 0xae510064  sw          $s1, 0x64($s2)
    ctx->pc = 0x162310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 17));
    // 0x162314: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x162318: 0xc05732c  jal         func_15CCB0
    ctx->pc = 0x162318u;
    SET_GPR_U32(ctx, 31, 0x162320u);
    ctx->pc = 0x16231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162318u;
            // 0x16231c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CCB0u;
    if (runtime->hasFunction(0x15CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162320u; }
        if (ctx->pc != 0x162320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMDS__4CMapFPc_0x15ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162320u; }
        if (ctx->pc != 0x162320u) { return; }
    }
    ctx->pc = 0x162320u;
label_162320:
    // 0x162320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162320u;
    {
        const bool branch_taken_0x162320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162320u;
            // 0x162324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162320) {
            ctx->pc = 0x162330u;
            goto label_162330;
        }
    }
    ctx->pc = 0x162328u;
    // 0x162328: 0xc05a148  jal         func_168520
    ctx->pc = 0x162328u;
    SET_GPR_U32(ctx, 31, 0x162330u);
    ctx->pc = 0x16232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162328u;
            // 0x16232c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162330u; }
        if (ctx->pc != 0x162330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMds__9CMapPieceFP8CMdsInfo_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162330u; }
        if (ctx->pc != 0x162330u) { return; }
    }
    ctx->pc = 0x162330u;
label_162330:
    // 0x162330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162334:
    // 0x162334: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x162334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x162338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16233c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16233cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162348: 0x3e00008  jr          $ra
    ctx->pc = 0x162348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162348u;
            // 0x16234c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162350u;
}
