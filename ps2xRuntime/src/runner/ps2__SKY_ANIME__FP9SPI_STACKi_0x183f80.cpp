#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKY_ANIME__FP9SPI_STACKi
// Address: 0x183f80 - 0x184068
void ps2__SKY_ANIME__FP9SPI_STACKi_0x183f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKY_ANIME__FP9SPI_STACKi_0x183f80");
#endif

    switch (ctx->pc) {
        case 0x183facu: goto label_183fac;
        case 0x183fb4u: goto label_183fb4;
        case 0x183fe4u: goto label_183fe4;
        case 0x184008u: goto label_184008;
        case 0x184014u: goto label_184014;
        default: break;
    }

    ctx->pc = 0x183f80u;

    // 0x183f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183f8c: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x183f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x183f90: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x183f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x183f94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183F94u;
    {
        const bool branch_taken_0x183f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F94u;
            // 0x183f98: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f94) {
            ctx->pc = 0x183FA4u;
            goto label_183fa4;
        }
    }
    ctx->pc = 0x183F9Cu;
    // 0x183f9c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x183F9Cu;
    {
        const bool branch_taken_0x183f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F9Cu;
            // 0x183fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f9c) {
            ctx->pc = 0x184058u;
            goto label_184058;
        }
    }
    ctx->pc = 0x183FA4u;
label_183fa4:
    // 0x183fa4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x183FA4u;
    SET_GPR_U32(ctx, 31, 0x183FACu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FACu; }
        if (ctx->pc != 0x183FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FACu; }
        if (ctx->pc != 0x183FACu) { return; }
    }
    ctx->pc = 0x183FACu;
label_183fac:
    // 0x183fac: 0xc060f38  jal         func_183CE0
    ctx->pc = 0x183FACu;
    SET_GPR_U32(ctx, 31, 0x183FB4u);
    ctx->pc = 0x183FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183FACu;
            // 0x183fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CE0u;
    if (runtime->hasFunction(0x183CE0u)) {
        auto targetFn = runtime->lookupFunction(0x183CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FB4u; }
        if (ctx->pc != 0x183FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSkyID__Fi_0x183ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FB4u; }
        if (ctx->pc != 0x183FB4u) { return; }
    }
    ctx->pc = 0x183FB4u;
label_183fb4:
    // 0x183fb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183FB4u;
    {
        const bool branch_taken_0x183fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FB4u;
            // 0x183fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fb4) {
            ctx->pc = 0x183FC4u;
            goto label_183fc4;
        }
    }
    ctx->pc = 0x183FBCu;
    // 0x183fbc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x183FBCu;
    {
        const bool branch_taken_0x183fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FBCu;
            // 0x183fc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fbc) {
            ctx->pc = 0x18405Cu;
            goto label_18405c;
        }
    }
    ctx->pc = 0x183FC4u;
label_183fc4:
    // 0x183fc4: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x183fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x183fc8: 0x8f838a64  lw          $v1, -0x759C($gp)
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x183fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x183fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183fd4: 0xac440240  sw          $a0, 0x240($v0)
    ctx->pc = 0x183fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 4));
    // 0x183fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fdc: 0xc05191c  jal         func_146470
    ctx->pc = 0x183FDCu;
    SET_GPR_U32(ctx, 31, 0x183FE4u);
    ctx->pc = 0x183FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183FDCu;
            // 0x183fe0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FE4u; }
        if (ctx->pc != 0x183FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FE4u; }
        if (ctx->pc != 0x183FE4u) { return; }
    }
    ctx->pc = 0x183FE4u;
label_183fe4:
    // 0x183fe4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183FE4u;
    {
        const bool branch_taken_0x183fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FE4u;
            // 0x183fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe4) {
            ctx->pc = 0x18400Cu;
            goto label_18400c;
        }
    }
    ctx->pc = 0x183FECu;
    // 0x183fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ff0: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x183ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x183ff4: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183ff8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x183ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x183ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184000: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x184000u;
    SET_GPR_U32(ctx, 31, 0x184008u);
    ctx->pc = 0x184004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184000u;
            // 0x184004: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184008u; }
        if (ctx->pc != 0x184008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184008u; }
        if (ctx->pc != 0x184008u) { return; }
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18400c:
    // 0x18400c: 0xc05190c  jal         func_146430
    ctx->pc = 0x18400Cu;
    SET_GPR_U32(ctx, 31, 0x184014u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184014u; }
        if (ctx->pc != 0x184014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184014u; }
        if (ctx->pc != 0x184014u) { return; }
    }
    ctx->pc = 0x184014u;
label_184014:
    // 0x184014: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x184014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x184018: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x18401c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x184020: 0x8f848a64  lw          $a0, -0x759C($gp)
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x184024: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x184024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18402c: 0x0  nop
    ctx->pc = 0x18402cu;
    // NOP
    // 0x184030: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x184030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x184034: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x184038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18403c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18403cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x184040: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x184044: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x184048: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x184048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x18404c: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x18404cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x184050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x184050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x184054: 0xaf838a68  sw          $v1, -0x7598($gp)
    ctx->pc = 0x184054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 3));
label_184058:
    // 0x184058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18405c:
    // 0x18405c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18405cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184060: 0x3e00008  jr          $ra
    ctx->pc = 0x184060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184060u;
            // 0x184064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184068u;
}
