#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONSTER_LIFE__FP12RS_STACKDATAi
// Address: 0x1e1940 - 0x1e19d4
void ps2__GET_MONSTER_LIFE__FP12RS_STACKDATAi_0x1e1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONSTER_LIFE__FP12RS_STACKDATAi_0x1e1940");
#endif

    switch (ctx->pc) {
        case 0x1e197cu: goto label_1e197c;
        case 0x1e19b4u: goto label_1e19b4;
        default: break;
    }

    ctx->pc = 0x1e1940u;

    // 0x1e1940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1944: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e194c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1950: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1950u;
            // 0x1e1954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1960u;
            goto label_1e1960;
        }
    }
    ctx->pc = 0x1E1958u;
    // 0x1e1958: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E1958u;
    {
        const bool branch_taken_0x1e1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1958u;
            // 0x1e195c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1958) {
            ctx->pc = 0x1E19CCu;
            goto label_1e19cc;
        }
    }
    ctx->pc = 0x1E1960u;
label_1e1960:
    // 0x1e1960: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e1960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1964: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e1964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1968: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1968u;
    {
        const bool branch_taken_0x1e1968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1968u;
            // 0x1e196c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1968) {
            ctx->pc = 0x1E1984u;
            goto label_1e1984;
        }
    }
    ctx->pc = 0x1E1970u;
    // 0x1e1970: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1974: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E1974u;
    SET_GPR_U32(ctx, 31, 0x1E197Cu);
    ctx->pc = 0x1E1978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1974u;
            // 0x1e1978: 0x8c451314  lw          $a1, 0x1314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4884)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E197Cu; }
        if (ctx->pc != 0x1E197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E197Cu; }
        if (ctx->pc != 0x1E197Cu) { return; }
    }
    ctx->pc = 0x1E197Cu;
label_1e197c:
    // 0x1e197c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E197Cu;
    {
        const bool branch_taken_0x1e197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E197Cu;
            // 0x1e1980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e197c) {
            ctx->pc = 0x1E19C8u;
            goto label_1e19c8;
        }
    }
    ctx->pc = 0x1E1984u;
label_1e1984:
    // 0x1e1984: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1984u;
    {
        const bool branch_taken_0x1e1984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1984u;
            // 0x1e1988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1984) {
            ctx->pc = 0x1E19BCu;
            goto label_1e19bc;
        }
    }
    ctx->pc = 0x1E198Cu;
    // 0x1e198c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1990: 0xc4411314  lwc1        $f1, 0x1314($v0)
    ctx->pc = 0x1e1990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1994: 0xc4401310  lwc1        $f0, 0x1310($v0)
    ctx->pc = 0x1e1994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1998: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e1998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e199c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e199cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e19a0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e19a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e19a4: 0x0  nop
    ctx->pc = 0x1e19a4u;
    // NOP
    // 0x1e19a8: 0x0  nop
    ctx->pc = 0x1e19a8u;
    // NOP
    // 0x1e19ac: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E19ACu;
    SET_GPR_U32(ctx, 31, 0x1E19B4u);
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19B4u; }
        if (ctx->pc != 0x1E19B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19B4u; }
        if (ctx->pc != 0x1E19B4u) { return; }
    }
    ctx->pc = 0x1E19B4u;
label_1e19b4:
    // 0x1e19b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E19B4u;
    {
        const bool branch_taken_0x1e19b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19b4) {
            ctx->pc = 0x1E19C4u;
            goto label_1e19c4;
        }
    }
    ctx->pc = 0x1E19BCu;
label_1e19bc:
    // 0x1e19bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E19BCu;
    {
        const bool branch_taken_0x1e19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19bc) {
            ctx->pc = 0x1E19C8u;
            goto label_1e19c8;
        }
    }
    ctx->pc = 0x1E19C4u;
label_1e19c4:
    // 0x1e19c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e19c8:
    // 0x1e19c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e19c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e19cc:
    // 0x1e19cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E19CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19CCu;
            // 0x1e19d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E19D4u;
}
