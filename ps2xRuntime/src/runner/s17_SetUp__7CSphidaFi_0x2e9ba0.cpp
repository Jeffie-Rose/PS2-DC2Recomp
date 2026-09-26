#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: s17_SetUp__7CSphidaFi
// Address: 0x2e9ba0 - 0x2e9c94
void s17_SetUp__7CSphidaFi_0x2e9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("s17_SetUp__7CSphidaFi_0x2e9ba0");
#endif

    switch (ctx->pc) {
        case 0x2e9c18u: goto label_2e9c18;
        case 0x2e9c38u: goto label_2e9c38;
        case 0x2e9c6cu: goto label_2e9c6c;
        case 0x2e9c78u: goto label_2e9c78;
        default: break;
    }

    ctx->pc = 0x2e9ba0u;

    // 0x2e9ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9ba4: 0x3c02bf8b  lui         $v0, 0xBF8B
    ctx->pc = 0x2e9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49035 << 16));
    // 0x2e9ba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9bac: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2e9bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2e9bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9bb4: 0x3c034349  lui         $v1, 0x4349
    ctx->pc = 0x2e9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17225 << 16));
    // 0x2e9bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9bbc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2e9bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9bc0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x2e9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x2e9bc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bc8: 0x3c02c3ef  lui         $v0, 0xC3EF
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50159 << 16));
    // 0x2e9bcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e9bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bd0: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x2e9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x2e9bd4: 0x344203d7  ori         $v0, $v0, 0x3D7
    ctx->pc = 0x2e9bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)983);
    // 0x2e9bd8: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x2e9bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x2e9bdc: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2e9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2e9be0: 0xac86009c  sw          $a2, 0x9C($a0)
    ctx->pc = 0x2e9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 6));
    // 0x2e9be4: 0x3c024283  lui         $v0, 0x4283
    ctx->pc = 0x2e9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17027 << 16));
    // 0x2e9be8: 0x344223d7  ori         $v0, $v0, 0x23D7
    ctx->pc = 0x2e9be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9175);
    // 0x2e9bec: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x2e9becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x2e9bf0: 0xac8200a4  sw          $v0, 0xA4($a0)
    ctx->pc = 0x2e9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
    // 0x2e9bf4: 0x3c0244a3  lui         $v0, 0x44A3
    ctx->pc = 0x2e9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17571 << 16));
    // 0x2e9bf8: 0x34432148  ori         $v1, $v0, 0x2148
    ctx->pc = 0x2e9bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8520);
    // 0x2e9bfc: 0xac8300a8  sw          $v1, 0xA8($a0)
    ctx->pc = 0x2e9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
    // 0x2e9c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9c04: 0xac8600ac  sw          $a2, 0xAC($a0)
    ctx->pc = 0x2e9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
    // 0x2e9c08: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x2e9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x2e9c0c: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x2e9c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x2e9c10: 0xc04c018  jal         func_130060
    ctx->pc = 0x2E9C10u;
    SET_GPR_U32(ctx, 31, 0x2E9C18u);
    ctx->pc = 0x2E9C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C10u;
            // 0x2e9c14: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C18u; }
        if (ctx->pc != 0x2E9C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C18u; }
        if (ctx->pc != 0x2E9C18u) { return; }
    }
    ctx->pc = 0x2E9C18u;
label_2e9c18:
    // 0x2e9c18: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2e9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2e9c1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9c20: 0x0  nop
    ctx->pc = 0x2e9c20u;
    // NOP
    // 0x2e9c24: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e9c24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e9c28: 0x0  nop
    ctx->pc = 0x2e9c28u;
    // NOP
    // 0x2e9c2c: 0x0  nop
    ctx->pc = 0x2e9c2cu;
    // NOP
    // 0x2e9c30: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2E9C30u;
    SET_GPR_U32(ctx, 31, 0x2E9C38u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C38u; }
        if (ctx->pc != 0x2E9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C38u; }
        if (ctx->pc != 0x2E9C38u) { return; }
    }
    ctx->pc = 0x2E9C38u;
label_2e9c38:
    // 0x2e9c38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e9c3c: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x2e9c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x2e9c40: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2e9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2e9c44: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x2e9c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2e9c48: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9C48u;
    {
        const bool branch_taken_0x2e9c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C48u;
            // 0x2e9c4c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c48) {
            ctx->pc = 0x2E9C54u;
            goto label_2e9c54;
        }
    }
    ctx->pc = 0x2E9C50u;
    // 0x2e9c50: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x2e9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
label_2e9c54:
    // 0x2e9c54: 0x8f858dcc  lw          $a1, -0x7234($gp)
    ctx->pc = 0x2e9c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x2e9c58: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9C58u;
    {
        const bool branch_taken_0x2e9c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C58u;
            // 0x2e9c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c58) {
            ctx->pc = 0x2E9C70u;
            goto label_2e9c70;
        }
    }
    ctx->pc = 0x2E9C60u;
    // 0x2e9c60: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x2e9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2e9c64: 0xc049c18  jal         func_127060
    ctx->pc = 0x2E9C64u;
    SET_GPR_U32(ctx, 31, 0x2E9C6Cu);
    ctx->pc = 0x2E9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C64u;
            // 0x2e9c68: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C6Cu; }
        if (ctx->pc != 0x2E9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C6Cu; }
        if (ctx->pc != 0x2E9C6Cu) { return; }
    }
    ctx->pc = 0x2E9C6Cu;
label_2e9c6c:
    // 0x2e9c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c70:
    // 0x2e9c70: 0xc0ba8d0  jal         func_2EA340
    ctx->pc = 0x2E9C70u;
    SET_GPR_U32(ctx, 31, 0x2E9C78u);
    ctx->pc = 0x2E9C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C70u;
            // 0x2e9c74: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA340u;
    if (runtime->hasFunction(0x2EA340u)) {
        auto targetFn = runtime->lookupFunction(0x2EA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C78u; }
        if (ctx->pc != 0x2E9C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStatusSprite__7CSphidaFv_0x2ea340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9C78u; }
        if (ctx->pc != 0x2E9C78u) { return; }
    }
    ctx->pc = 0x2E9C78u;
label_2e9c78:
    // 0x2e9c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9c7c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2e9c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x2e9c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9C8Cu;
            // 0x2e9c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9C94u;
}
