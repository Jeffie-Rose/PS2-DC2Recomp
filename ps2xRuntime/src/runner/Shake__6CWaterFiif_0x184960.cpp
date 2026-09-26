#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Shake__6CWaterFiif
// Address: 0x184960 - 0x1849f0
void Shake__6CWaterFiif_0x184960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shake__6CWaterFiif_0x184960");
#endif

    ctx->pc = 0x184960u;

    // 0x184960: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x184960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x184964: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x184964u;
    {
        const bool branch_taken_0x184964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184964u;
            // 0x184968: 0xa3001a  div         $zero, $a1, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184964) {
            ctx->pc = 0x184970u;
            goto label_184970;
        }
    }
    ctx->pc = 0x18496Cu;
    // 0x18496c: 0x1cd  break       0, 7
    ctx->pc = 0x18496cu;
    runtime->handleBreak(rdram, ctx);
label_184970:
    // 0x184970: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x184970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x184974: 0x2810  mfhi        $a1
    ctx->pc = 0x184974u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x184978: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x184978u;
    {
        const bool branch_taken_0x184978 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18497Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184978u;
            // 0x18497c: 0xc7001a  div         $zero, $a2, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184978) {
            ctx->pc = 0x184984u;
            goto label_184984;
        }
    }
    ctx->pc = 0x184980u;
    // 0x184980: 0x1cd  break       0, 7
    ctx->pc = 0x184980u;
    runtime->handleBreak(rdram, ctx);
label_184984:
    // 0x184984: 0x3010  mfhi        $a2
    ctx->pc = 0x184984u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x184988: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x184988u;
    {
        const bool branch_taken_0x184988 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x184988) {
            ctx->pc = 0x184994u;
            goto label_184994;
        }
    }
    ctx->pc = 0x184990u;
    // 0x184990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184994:
    // 0x184994: 0x1cc00002  bgtz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x184994u;
    {
        const bool branch_taken_0x184994 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x184994) {
            ctx->pc = 0x1849A0u;
            goto label_1849a0;
        }
    }
    ctx->pc = 0x18499Cu;
    // 0x18499c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18499cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1849a0:
    // 0x1849a0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1849a4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1849a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1849a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1849A8u;
    {
        const bool branch_taken_0x1849a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849a8) {
            ctx->pc = 0x1849B4u;
            goto label_1849b4;
        }
    }
    ctx->pc = 0x1849B0u;
    // 0x1849b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1849b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1849b4:
    // 0x1849b4: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x1849b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1849b8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1849b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1849bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1849BCu;
    {
        const bool branch_taken_0x1849bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849bc) {
            ctx->pc = 0x1849C8u;
            goto label_1849c8;
        }
    }
    ctx->pc = 0x1849C4u;
    // 0x1849c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1849c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1849c8:
    // 0x1849c8: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1849cc: 0xa71818  mult        $v1, $a1, $a3
    ctx->pc = 0x1849ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1849d0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1849d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1849d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1849d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1849d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1849d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1849dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1849dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1849e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1849e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1849e4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1849e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1849e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1849E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1849ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1849E8u;
            // 0x1849ec: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1849F0u;
}
