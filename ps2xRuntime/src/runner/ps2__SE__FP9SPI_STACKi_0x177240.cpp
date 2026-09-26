#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SE__FP9SPI_STACKi
// Address: 0x177240 - 0x177360
void ps2__SE__FP9SPI_STACKi_0x177240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SE__FP9SPI_STACKi_0x177240");
#endif

    switch (ctx->pc) {
        case 0x177240u: goto label_177240;
        case 0x177244u: goto label_177244;
        case 0x177248u: goto label_177248;
        case 0x17724cu: goto label_17724c;
        case 0x177250u: goto label_177250;
        case 0x177254u: goto label_177254;
        case 0x177258u: goto label_177258;
        case 0x17725cu: goto label_17725c;
        case 0x177260u: goto label_177260;
        case 0x177264u: goto label_177264;
        case 0x177268u: goto label_177268;
        case 0x17726cu: goto label_17726c;
        case 0x177270u: goto label_177270;
        case 0x177274u: goto label_177274;
        case 0x177278u: goto label_177278;
        case 0x17727cu: goto label_17727c;
        case 0x177280u: goto label_177280;
        case 0x177284u: goto label_177284;
        case 0x177288u: goto label_177288;
        case 0x17728cu: goto label_17728c;
        case 0x177290u: goto label_177290;
        case 0x177294u: goto label_177294;
        case 0x177298u: goto label_177298;
        case 0x17729cu: goto label_17729c;
        case 0x1772a0u: goto label_1772a0;
        case 0x1772a4u: goto label_1772a4;
        case 0x1772a8u: goto label_1772a8;
        case 0x1772acu: goto label_1772ac;
        case 0x1772b0u: goto label_1772b0;
        case 0x1772b4u: goto label_1772b4;
        case 0x1772b8u: goto label_1772b8;
        case 0x1772bcu: goto label_1772bc;
        case 0x1772c0u: goto label_1772c0;
        case 0x1772c4u: goto label_1772c4;
        case 0x1772c8u: goto label_1772c8;
        case 0x1772ccu: goto label_1772cc;
        case 0x1772d0u: goto label_1772d0;
        case 0x1772d4u: goto label_1772d4;
        case 0x1772d8u: goto label_1772d8;
        case 0x1772dcu: goto label_1772dc;
        case 0x1772e0u: goto label_1772e0;
        case 0x1772e4u: goto label_1772e4;
        case 0x1772e8u: goto label_1772e8;
        case 0x1772ecu: goto label_1772ec;
        case 0x1772f0u: goto label_1772f0;
        case 0x1772f4u: goto label_1772f4;
        case 0x1772f8u: goto label_1772f8;
        case 0x1772fcu: goto label_1772fc;
        case 0x177300u: goto label_177300;
        case 0x177304u: goto label_177304;
        case 0x177308u: goto label_177308;
        case 0x17730cu: goto label_17730c;
        case 0x177310u: goto label_177310;
        case 0x177314u: goto label_177314;
        case 0x177318u: goto label_177318;
        case 0x17731cu: goto label_17731c;
        case 0x177320u: goto label_177320;
        case 0x177324u: goto label_177324;
        case 0x177328u: goto label_177328;
        case 0x17732cu: goto label_17732c;
        case 0x177330u: goto label_177330;
        case 0x177334u: goto label_177334;
        case 0x177338u: goto label_177338;
        case 0x17733cu: goto label_17733c;
        case 0x177340u: goto label_177340;
        case 0x177344u: goto label_177344;
        case 0x177348u: goto label_177348;
        case 0x17734cu: goto label_17734c;
        case 0x177350u: goto label_177350;
        case 0x177354u: goto label_177354;
        case 0x177358u: goto label_177358;
        case 0x17735cu: goto label_17735c;
        default: break;
    }

    ctx->pc = 0x177240u;

label_177240:
    // 0x177240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_177244:
    // 0x177244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_177248:
    // 0x177248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17724c:
    // 0x17724c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177250:
    // 0x177250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_177254:
    // 0x177254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177258:
    // 0x177258: 0x8f8289fc  lw          $v0, -0x7604($gp)
    ctx->pc = 0x177258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_17725c:
    // 0x17725c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_177260:
    if (ctx->pc == 0x177260u) {
        ctx->pc = 0x177260u;
            // 0x177260: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x177264u;
        goto label_177264;
    }
    ctx->pc = 0x17725Cu;
    {
        const bool branch_taken_0x17725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17725Cu;
            // 0x177260: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17725c) {
            ctx->pc = 0x17726Cu;
            goto label_17726c;
        }
    }
    ctx->pc = 0x177264u;
label_177264:
    // 0x177264: 0x10000037  b           . + 4 + (0x37 << 2)
label_177268:
    if (ctx->pc == 0x177268u) {
        ctx->pc = 0x177268u;
            // 0x177268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17726Cu;
        goto label_17726c;
    }
    ctx->pc = 0x177264u;
    {
        const bool branch_taken_0x177264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177264u;
            // 0x177268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177264) {
            ctx->pc = 0x177344u;
            goto label_177344;
        }
    }
    ctx->pc = 0x17726Cu;
label_17726c:
    // 0x17726c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_177270:
    if (ctx->pc == 0x177270u) {
        ctx->pc = 0x177270u;
            // 0x177270: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x177274u;
        goto label_177274;
    }
    ctx->pc = 0x17726Cu;
    {
        const bool branch_taken_0x17726c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x177270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17726Cu;
            // 0x177270: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17726c) {
            ctx->pc = 0x17727Cu;
            goto label_17727c;
        }
    }
    ctx->pc = 0x177274u;
label_177274:
    // 0x177274: 0x10000033  b           . + 4 + (0x33 << 2)
label_177278:
    if (ctx->pc == 0x177278u) {
        ctx->pc = 0x177278u;
            // 0x177278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17727Cu;
        goto label_17727c;
    }
    ctx->pc = 0x177274u;
    {
        const bool branch_taken_0x177274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177274u;
            // 0x177278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177274) {
            ctx->pc = 0x177344u;
            goto label_177344;
        }
    }
    ctx->pc = 0x17727Cu;
label_17727c:
    // 0x17727c: 0xc05191c  jal         func_146470
label_177280:
    if (ctx->pc == 0x177280u) {
        ctx->pc = 0x177284u;
        goto label_177284;
    }
    ctx->pc = 0x17727Cu;
    SET_GPR_U32(ctx, 31, 0x177284u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177284u; }
        if (ctx->pc != 0x177284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177284u; }
        if (ctx->pc != 0x177284u) { return; }
    }
    ctx->pc = 0x177284u;
label_177284:
    // 0x177284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177288:
    // 0x177288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x177288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17728c:
    // 0x17728c: 0xc0518f8  jal         func_1463E0
label_177290:
    if (ctx->pc == 0x177290u) {
        ctx->pc = 0x177290u;
            // 0x177290: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x177294u;
        goto label_177294;
    }
    ctx->pc = 0x17728Cu;
    SET_GPR_U32(ctx, 31, 0x177294u);
    ctx->pc = 0x177290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17728Cu;
            // 0x177290: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177294u; }
        if (ctx->pc != 0x177294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177294u; }
        if (ctx->pc != 0x177294u) { return; }
    }
    ctx->pc = 0x177294u;
label_177294:
    // 0x177294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177298:
    // 0x177298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17729c:
    // 0x17729c: 0xc0518f8  jal         func_1463E0
label_1772a0:
    if (ctx->pc == 0x1772A0u) {
        ctx->pc = 0x1772A0u;
            // 0x1772a0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1772A4u;
        goto label_1772a4;
    }
    ctx->pc = 0x17729Cu;
    SET_GPR_U32(ctx, 31, 0x1772A4u);
    ctx->pc = 0x1772A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17729Cu;
            // 0x1772a0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772A4u; }
        if (ctx->pc != 0x1772A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772A4u; }
        if (ctx->pc != 0x1772A4u) { return; }
    }
    ctx->pc = 0x1772A4u;
label_1772a4:
    // 0x1772a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1772a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1772a8:
    // 0x1772a8: 0xc05190c  jal         func_146430
label_1772ac:
    if (ctx->pc == 0x1772ACu) {
        ctx->pc = 0x1772ACu;
            // 0x1772ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1772B0u;
        goto label_1772b0;
    }
    ctx->pc = 0x1772A8u;
    SET_GPR_U32(ctx, 31, 0x1772B0u);
    ctx->pc = 0x1772ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1772A8u;
            // 0x1772ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772B0u; }
        if (ctx->pc != 0x1772B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772B0u; }
        if (ctx->pc != 0x1772B0u) { return; }
    }
    ctx->pc = 0x1772B0u;
label_1772b0:
    // 0x1772b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1772b4:
    // 0x1772b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1772b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1772b8:
    // 0x1772b8: 0x0  nop
    ctx->pc = 0x1772b8u;
    // NOP
label_1772bc:
    // 0x1772bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1772bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1772c0:
    // 0x1772c0: 0x0  nop
    ctx->pc = 0x1772c0u;
    // NOP
label_1772c4:
    // 0x1772c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1772c8:
    if (ctx->pc == 0x1772C8u) {
        ctx->pc = 0x1772CCu;
        goto label_1772cc;
    }
    ctx->pc = 0x1772C4u;
    {
        const bool branch_taken_0x1772c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1772c4) {
            ctx->pc = 0x1772E4u;
            goto label_1772e4;
        }
    }
    ctx->pc = 0x1772CCu;
label_1772cc:
    // 0x1772cc: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x1772ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1772d0:
    // 0x1772d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1772d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1772d4:
    // 0x1772d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1772d8:
    // 0x1772d8: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x1772d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_1772dc:
    // 0x1772dc: 0x320f809  jalr        $t9
label_1772e0:
    if (ctx->pc == 0x1772E0u) {
        ctx->pc = 0x1772E0u;
            // 0x1772e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1772E4u;
        goto label_1772e4;
    }
    ctx->pc = 0x1772DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1772E4u);
        ctx->pc = 0x1772E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772DCu;
            // 0x1772e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1772E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1772E4u; }
            if (ctx->pc != 0x1772E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1772E4u;
label_1772e4:
    // 0x1772e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1772e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1772e8:
    // 0x1772e8: 0x0  nop
    ctx->pc = 0x1772e8u;
    // NOP
label_1772ec:
    // 0x1772ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1772ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1772f0:
    // 0x1772f0: 0x0  nop
    ctx->pc = 0x1772f0u;
    // NOP
label_1772f4:
    // 0x1772f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1772f8:
    if (ctx->pc == 0x1772F8u) {
        ctx->pc = 0x1772F8u;
            // 0x1772f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1772FCu;
        goto label_1772fc;
    }
    ctx->pc = 0x1772F4u;
    {
        const bool branch_taken_0x1772f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1772F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772F4u;
            // 0x1772f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772f4) {
            ctx->pc = 0x177304u;
            goto label_177304;
        }
    }
    ctx->pc = 0x1772FCu;
label_1772fc:
    // 0x1772fc: 0x10000012  b           . + 4 + (0x12 << 2)
label_177300:
    if (ctx->pc == 0x177300u) {
        ctx->pc = 0x177300u;
            // 0x177300: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x177304u;
        goto label_177304;
    }
    ctx->pc = 0x1772FCu;
    {
        const bool branch_taken_0x1772fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772FCu;
            // 0x177300: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772fc) {
            ctx->pc = 0x177348u;
            goto label_177348;
        }
    }
    ctx->pc = 0x177304u;
label_177304:
    // 0x177304: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_177308:
    // 0x177308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17730c:
    // 0x17730c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_177310:
    // 0x177310: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_177314:
    // 0x177314: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x177314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_177318:
    // 0x177318: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_17731c:
    // 0x17731c: 0xa470000a  sh          $s0, 0xA($v1)
    ctx->pc = 0x17731cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 16));
label_177320:
    // 0x177320: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_177324:
    // 0x177324: 0xa471000c  sh          $s1, 0xC($v1)
    ctx->pc = 0x177324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 17));
label_177328:
    // 0x177328: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_17732c:
    // 0x17732c: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x17732cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_177330:
    // 0x177330: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_177334:
    // 0x177334: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x177334u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
label_177338:
    // 0x177338: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_17733c:
    // 0x17733c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_177340:
    // 0x177340: 0xaf8389fc  sw          $v1, -0x7604($gp)
    ctx->pc = 0x177340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 3));
label_177344:
    // 0x177344: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_177348:
    // 0x177348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17734c:
    // 0x17734c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17734cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177350:
    // 0x177350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177354:
    // 0x177354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_177358:
    // 0x177358: 0x3e00008  jr          $ra
label_17735c:
    if (ctx->pc == 0x17735Cu) {
        ctx->pc = 0x17735Cu;
            // 0x17735c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x177360u;
        goto label_fallthrough_0x177358;
    }
    ctx->pc = 0x177358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177358u;
            // 0x17735c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x177358:
    ctx->pc = 0x177360u;
}
