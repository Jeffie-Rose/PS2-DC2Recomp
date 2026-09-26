#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitForMC__18CMemoryCardManagerFv
// Address: 0x2f1940 - 0x2f199c
void InitForMC__18CMemoryCardManagerFv_0x2f1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitForMC__18CMemoryCardManagerFv_0x2f1940");
#endif

    switch (ctx->pc) {
        case 0x2f1950u: goto label_2f1950;
        default: break;
    }

    ctx->pc = 0x2f1940u;

    // 0x2f1940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1948: 0xc0488ea  jal         func_1223A8
    ctx->pc = 0x2F1948u;
    SET_GPR_U32(ctx, 31, 0x2F1950u);
    ctx->pc = 0x2F194Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1948u;
            // 0x2f194c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1223A8u;
    if (runtime->hasFunction(0x1223A8u)) {
        auto targetFn = runtime->lookupFunction(0x1223A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1950u; }
        if (ctx->pc != 0x2F1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcInit_0x1223a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1950u; }
        if (ctx->pc != 0x2F1950u) { return; }
    }
    ctx->pc = 0x2F1950u;
label_2f1950:
    // 0x2f1950: 0x2403ff87  addiu       $v1, $zero, -0x79
    ctx->pc = 0x2f1950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x2f1954: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F1954u;
    {
        const bool branch_taken_0x2f1954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F1958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1954u;
            // 0x2f1958: 0x2403ff88  addiu       $v1, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1954) {
            ctx->pc = 0x2F1984u;
            goto label_2f1984;
        }
    }
    ctx->pc = 0x2F195Cu;
    // 0x2f195c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F195Cu;
    {
        const bool branch_taken_0x2f195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F1960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F195Cu;
            // 0x2f1960: 0x2403ff9b  addiu       $v1, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f195c) {
            ctx->pc = 0x2F197Cu;
            goto label_2f197c;
        }
    }
    ctx->pc = 0x2F1964u;
    // 0x2f1964: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1964u;
    {
        const bool branch_taken_0x2f1964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1964) {
            ctx->pc = 0x2F1974u;
            goto label_2f1974;
        }
    }
    ctx->pc = 0x2F196Cu;
    // 0x2f196c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F196Cu;
    {
        const bool branch_taken_0x2f196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F196Cu;
            // 0x2f1970: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f196c) {
            ctx->pc = 0x2F1988u;
            goto label_2f1988;
        }
    }
    ctx->pc = 0x2F1974u;
label_2f1974:
    // 0x2f1974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1974u;
    {
        const bool branch_taken_0x2f1974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1974u;
            // 0x2f1978: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1974) {
            ctx->pc = 0x2F1988u;
            goto label_2f1988;
        }
    }
    ctx->pc = 0x2F197Cu;
label_2f197c:
    // 0x2f197c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F197Cu;
    {
        const bool branch_taken_0x2f197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F197Cu;
            // 0x2f1980: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f197c) {
            ctx->pc = 0x2F1988u;
            goto label_2f1988;
        }
    }
    ctx->pc = 0x2F1984u;
label_2f1984:
    // 0x2f1984: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f1984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1988:
    // 0x2f1988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f1988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f198c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f198cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1994: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1994u;
            // 0x2f1998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F199Cu;
}
