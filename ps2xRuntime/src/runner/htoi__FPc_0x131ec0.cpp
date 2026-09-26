#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: htoi__FPc
// Address: 0x131ec0 - 0x131f94
void htoi__FPc_0x131ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("htoi__FPc_0x131ec0");
#endif

    switch (ctx->pc) {
        case 0x131ed4u: goto label_131ed4;
        case 0x131f00u: goto label_131f00;
        default: break;
    }

    ctx->pc = 0x131ec0u;

    // 0x131ec0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x131ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ecc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131ECCu;
    {
        const bool branch_taken_0x131ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ecc) {
            ctx->pc = 0x131ED8u;
            goto label_131ed8;
        }
    }
    ctx->pc = 0x131ED4u;
label_131ed4:
    // 0x131ed4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x131ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_131ed8:
    // 0x131ed8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x131ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131edc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x131ee0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131ee4: 0x0  nop
    ctx->pc = 0x131ee4u;
    // NOP
    // 0x131ee8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131EE8u;
    {
        const bool branch_taken_0x131ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131ee8) {
            ctx->pc = 0x131ED4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131ed4;
        }
    }
    ctx->pc = 0x131EF0u;
    // 0x131ef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ef8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x131EF8u;
    {
        const bool branch_taken_0x131ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ef8) {
            ctx->pc = 0x131F80u;
            goto label_131f80;
        }
    }
    ctx->pc = 0x131F00u;
label_131f00:
    // 0x131f00: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x131f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x131f04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131f08: 0x9068ffff  lbu         $t0, -0x1($v1)
    ctx->pc = 0x131f08u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x131f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x131f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f10: 0x29030030  slti        $v1, $t0, 0x30
    ctx->pc = 0x131f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x131f14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x131F14u;
    {
        const bool branch_taken_0x131f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f14) {
            ctx->pc = 0x131F2Cu;
            goto label_131f2c;
        }
    }
    ctx->pc = 0x131F1Cu;
    // 0x131f1c: 0x2901003a  slti        $at, $t0, 0x3A
    ctx->pc = 0x131f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x131f20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F20u;
    {
        const bool branch_taken_0x131f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f20) {
            ctx->pc = 0x131F2Cu;
            goto label_131f2c;
        }
    }
    ctx->pc = 0x131F28u;
    // 0x131f28: 0x2509ffd0  addiu       $t1, $t0, -0x30
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
label_131f2c:
    // 0x131f2c: 0x0  nop
    ctx->pc = 0x131f2cu;
    // NOP
    // 0x131f30: 0x29030061  slti        $v1, $t0, 0x61
    ctx->pc = 0x131f30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x131f34: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x131F34u;
    {
        const bool branch_taken_0x131f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f34) {
            ctx->pc = 0x131F4Cu;
            goto label_131f4c;
        }
    }
    ctx->pc = 0x131F3Cu;
    // 0x131f3c: 0x29010067  slti        $at, $t0, 0x67
    ctx->pc = 0x131f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)103) ? 1 : 0);
    // 0x131f40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F40u;
    {
        const bool branch_taken_0x131f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f40) {
            ctx->pc = 0x131F4Cu;
            goto label_131f4c;
        }
    }
    ctx->pc = 0x131F48u;
    // 0x131f48: 0x2509ffa9  addiu       $t1, $t0, -0x57
    ctx->pc = 0x131f48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967209));
label_131f4c:
    // 0x131f4c: 0x0  nop
    ctx->pc = 0x131f4cu;
    // NOP
    // 0x131f50: 0x29030041  slti        $v1, $t0, 0x41
    ctx->pc = 0x131f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x131f54: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x131F54u;
    {
        const bool branch_taken_0x131f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f54) {
            ctx->pc = 0x131F6Cu;
            goto label_131f6c;
        }
    }
    ctx->pc = 0x131F5Cu;
    // 0x131f5c: 0x29010047  slti        $at, $t0, 0x47
    ctx->pc = 0x131f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x131f60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F60u;
    {
        const bool branch_taken_0x131f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f60) {
            ctx->pc = 0x131F6Cu;
            goto label_131f6c;
        }
    }
    ctx->pc = 0x131F68u;
    // 0x131f68: 0x2509ffc9  addiu       $t1, $t0, -0x37
    ctx->pc = 0x131f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967241));
label_131f6c:
    // 0x131f6c: 0x0  nop
    ctx->pc = 0x131f6cu;
    // NOP
    // 0x131f70: 0x1271818  mult        $v1, $t1, $a3
    ctx->pc = 0x131f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x131f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131f78: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x131f78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x131f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_131f80:
    // 0x131f80: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x131f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x131f84: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x131F84u;
    {
        const bool branch_taken_0x131f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f84) {
            ctx->pc = 0x131F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131f00;
        }
    }
    ctx->pc = 0x131F8Cu;
    // 0x131f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x131F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131F94u;
}
