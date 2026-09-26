#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKYB_ANIME__FP9SPI_STACKi
// Address: 0x184070 - 0x184158
void ps2__SKYB_ANIME__FP9SPI_STACKi_0x184070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKYB_ANIME__FP9SPI_STACKi_0x184070");
#endif

    switch (ctx->pc) {
        case 0x18409cu: goto label_18409c;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840f8u: goto label_1840f8;
        case 0x184104u: goto label_184104;
        default: break;
    }

    ctx->pc = 0x184070u;

    // 0x184070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18407c: 0x8f828a6c  lw          $v0, -0x7594($gp)
    ctx->pc = 0x18407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x184080: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x184080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x184084: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184084u;
    {
        const bool branch_taken_0x184084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184084u;
            // 0x184088: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184084) {
            ctx->pc = 0x184094u;
            goto label_184094;
        }
    }
    ctx->pc = 0x18408Cu;
    // 0x18408c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18408Cu;
    {
        const bool branch_taken_0x18408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18408Cu;
            // 0x184090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18408c) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x184094u;
label_184094:
    // 0x184094: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x184094u;
    SET_GPR_U32(ctx, 31, 0x18409Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18409Cu; }
        if (ctx->pc != 0x18409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18409Cu; }
        if (ctx->pc != 0x18409Cu) { return; }
    }
    ctx->pc = 0x18409Cu;
label_18409c:
    // 0x18409c: 0xc060f38  jal         func_183CE0
    ctx->pc = 0x18409Cu;
    SET_GPR_U32(ctx, 31, 0x1840A4u);
    ctx->pc = 0x1840A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18409Cu;
            // 0x1840a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CE0u;
    if (runtime->hasFunction(0x183CE0u)) {
        auto targetFn = runtime->lookupFunction(0x183CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840A4u; }
        if (ctx->pc != 0x1840A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSkyID__Fi_0x183ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840A4u; }
        if (ctx->pc != 0x1840A4u) { return; }
    }
    ctx->pc = 0x1840A4u;
label_1840a4:
    // 0x1840a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1840A4u;
    {
        const bool branch_taken_0x1840a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1840A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840A4u;
            // 0x1840a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840a4) {
            ctx->pc = 0x1840B4u;
            goto label_1840b4;
        }
    }
    ctx->pc = 0x1840ACu;
    // 0x1840ac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1840ACu;
    {
        const bool branch_taken_0x1840ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840ACu;
            // 0x1840b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840ac) {
            ctx->pc = 0x18414Cu;
            goto label_18414c;
        }
    }
    ctx->pc = 0x1840B4u;
label_1840b4:
    // 0x1840b4: 0x8f828a6c  lw          $v0, -0x7594($gp)
    ctx->pc = 0x1840b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x1840b8: 0x8f838a64  lw          $v1, -0x759C($gp)
    ctx->pc = 0x1840b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1840bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1840bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1840c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1840c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1840c4: 0xac4404c0  sw          $a0, 0x4C0($v0)
    ctx->pc = 0x1840c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1216), GPR_U32(ctx, 4));
    // 0x1840c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1840c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840cc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1840CCu;
    SET_GPR_U32(ctx, 31, 0x1840D4u);
    ctx->pc = 0x1840D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1840CCu;
            // 0x1840d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840D4u; }
        if (ctx->pc != 0x1840D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840D4u; }
        if (ctx->pc != 0x1840D4u) { return; }
    }
    ctx->pc = 0x1840D4u;
label_1840d4:
    // 0x1840d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1840D4u;
    {
        const bool branch_taken_0x1840d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840D4u;
            // 0x1840d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840d4) {
            ctx->pc = 0x1840FCu;
            goto label_1840fc;
        }
    }
    ctx->pc = 0x1840DCu;
    // 0x1840dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1840dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840e0: 0x8f838a6c  lw          $v1, -0x7594($gp)
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x1840e4: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1840e8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1840ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1840ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1840f0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1840F0u;
    SET_GPR_U32(ctx, 31, 0x1840F8u);
    ctx->pc = 0x1840F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1840F0u;
            // 0x1840f4: 0x24440500  addiu       $a0, $v0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840F8u; }
        if (ctx->pc != 0x1840F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840F8u; }
        if (ctx->pc != 0x1840F8u) { return; }
    }
    ctx->pc = 0x1840F8u;
label_1840f8:
    // 0x1840f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1840f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1840fc:
    // 0x1840fc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1840FCu;
    SET_GPR_U32(ctx, 31, 0x184104u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184104u; }
        if (ctx->pc != 0x184104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184104u; }
        if (ctx->pc != 0x184104u) { return; }
    }
    ctx->pc = 0x184104u;
label_184104:
    // 0x184104: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x184104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x184108: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x184108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x18410c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18410cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x184110: 0x8f848a64  lw          $a0, -0x759C($gp)
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x184114: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x184114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18411c: 0x0  nop
    ctx->pc = 0x18411cu;
    // NOP
    // 0x184120: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x184120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x184124: 0x8f838a6c  lw          $v1, -0x7594($gp)
    ctx->pc = 0x184124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x184128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18412c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18412cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x184130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x184134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x184138: 0xe4600700  swc1        $f0, 0x700($v1)
    ctx->pc = 0x184138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1792), bits); }
    // 0x18413c: 0x8f838a6c  lw          $v1, -0x7594($gp)
    ctx->pc = 0x18413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x184140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x184140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x184144: 0xaf838a6c  sw          $v1, -0x7594($gp)
    ctx->pc = 0x184144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937196), GPR_U32(ctx, 3));
label_184148:
    // 0x184148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18414c:
    // 0x18414c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18414cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184150: 0x3e00008  jr          $ra
    ctx->pc = 0x184150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184150u;
            // 0x184154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184158u;
}
